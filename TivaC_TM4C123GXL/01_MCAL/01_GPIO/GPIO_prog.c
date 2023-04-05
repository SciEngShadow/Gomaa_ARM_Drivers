#include "GPIO_priv.h"
#include "GPIO_int.h"
#include "GPIO_cfg.h"

void MGPIO_vSetPinMode(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                       Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                       Dt_GPIOBusCfg_E              copy_GPIOBusCfg          ,\
                       Dt_GPIOPinDirectionCfg_E     copy_GPIOPinDirectionCfg )
{
    switch(copy_GPIOPinDirectionCfg)
    {
        case GPIO_PIN_INPUT:
        {
            CLR_BIT(MGPIO_CTRL1_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODIR.All , copy_GPIOPinCfg);
            //MGPIO_CTRL1_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODIR.All &= (copy_GPIOPinDirectionCfg<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_OUTPUT:
        {
            SET_BIT(MGPIO_CTRL1_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODIR.All,copy_GPIOPinCfg);
            //MGPIO_CTRL1_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODIR.All |= (copy_GPIOPinDirectionCfg<<copy_GPIOPinCfg);
            break;
        }
        default:
        {
            break;
        }
    }
}

/******************************************************************************************************************/

void MGPIO_vSetPinOutputType(Dt_GPIOPortNum_E                   copy_GPIOPortCfg         ,\
                             Dt_GPIOPinNum_E                    copy_GPIOPinCfg          ,\
                             Dt_GPIOBusCfg_E                    copy_GPIOBusCfg          ,\
                             Dt_GPIOPinOpenDrainPushPullCfg_E   copy_GPIOPinOpenDrainPushPullCfg)
{
    switch(copy_GPIOPinOpenDrainPushPullCfg)
    {
        case GPIO_PIN_PUSHPULL:
        {
            CLR_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOODR.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOODR.All &= (copy_GPIOPinOpenDrainPushPullCfg<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_OPENDRAIN:
        {
            SET_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOODR.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOODR.All |= (copy_GPIOPinOpenDrainPushPullCfg<<copy_GPIOPinCfg);
            break;
        }
        default:
        {
            break;
        }
    }
}

/******************************************************************************************************************/

void MGPIO_vSetPullType(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                        Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                        Dt_GPIOBusCfg_E              copy_GPIOBusCfg          ,\
                        Dt_GPIOPinPullUpDownCfg_E    copy_GPIOPinPullUpDownCfg)
{
    switch(copy_GPIOPinPullUpDownCfg)
    {
        case GPIO_PIN_PULLUP_EN:
        {
            SET_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOPUR.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOPUR.All |= (1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_PULLUP_DIS:
        {
            CLR_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOPUR.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOPUR.All &= ~(1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_PULLDOWN_EN:
        {
            SET_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOPDR.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOPDR.All |= (1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_PULLDOWN_DIS:
        {
            CLR_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOPDR.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOPDR.All &= ~(1U<<copy_GPIOPinCfg);
            break;
        }
        default:
        {
            break;
        }
    }
}

 /******************************************************************************************************************/

void MGPIO_vSetDriveStrenghType(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                                Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                                Dt_GPIOBusCfg_E              copy_GPIOBusCfg          ,\
                                Dt_GPIOPinDriveStrenghCfg_E  copy_GPIOPinDriveStrenghCfg)
{
    switch(copy_GPIOPinDriveStrenghCfg)
    {
        case GPIO_PIN_R2RDIS:
        {
            CLR_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR2R.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR2R.All &= ~(1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_R2REN:
        {
            SET_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR2R.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR2R.All |= (1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_R4RDIS:
        {
            CLR_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR4R.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR4R.All &= ~(1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_R4REN:
        {
            SET_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR4R.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR4R.All |= (1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_R8RDIS:
        {
            CLR_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR8R.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR8R.All &= ~(1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_R8REN:
        {
            SET_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR8R.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR8R.All |= (1U<<copy_GPIOPinCfg);
            break;
        }
        default:
        {
            break;
        }    
    }
}

 /******************************************************************************************************************/

void MGPIO_vSetDigitalPinEnableType(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                                    Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                                    Dt_GPIOBusCfg_E              copy_GPIOBusCfg          ,\
                                    Dt_GPIOPinDigitalEnableCfg_E copy_GPIOPinDigitalEnableCfg)
{
    switch(copy_GPIOPinDigitalEnableCfg)
    {
        case GPIO_PIN_D_DIS:
        {
            CLR_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODEN.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODEN.All &= ~(1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_D_EN:
        {
            SET_BIT(MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODEN.All , copy_GPIOPinCfg);
            //MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODEN.All |= (1U<<copy_GPIOPinCfg);
            break;
        }
        default:
        {
            break;
        }        
    }
}

 /******************************************************************************************************************/

void MGPIO_vSetPinAltFn(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                        Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                        Dt_GPIOBusCfg_E              copy_GPIOBusCfg          ,\
                        Dt_GPIOPinAlternateFunCfg_E  copy_GPIOPinAlternateFunCfg)
{
    switch(copy_GPIOPinAlternateFunCfg)
    {
        case GPIO_PIN_ALF_DIS:
        {
            CLR_BIT(MGPIO_CTRL1_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOAFSEL.All , copy_GPIOPinCfg);
            //MGPIO_CTRL1_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOAFSEL.All &= ~(1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_ALF_EN:
        {
            SET_BIT(MGPIO_CTRL1_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOAFSEL.All , copy_GPIOPinCfg);
            //MGPIO_CTRL1_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOAFSEL.All |= (1U<<copy_GPIOPinCfg);
            break;
        }
        default:
        {
            break;
        }        
    }
}

 /******************************************************************************************************************/

void MGPIO_vInit(Dt_GPIOPortNum_E                   copy_GPIOPortCfg                    ,\
                 Dt_GPIOPinNum_E                    copy_GPIOPinCfg                     ,\
                 Dt_GPIOBusCfg_E                    copy_GPIOBusCfg                     ,\
                 Dt_GPIOPinDirectionCfg_E           copy_GPIOPinDirectionCfg            ,\
                 Dt_GPIOPinDriveStrenghCfg_E        copy_GPIOPinDriveStrenghCfg         ,\
                 Dt_GPIOPinPullUpDownCfg_E          copy_GPIOPinPullUpDownCfg           ,\
                 Dt_GPIOPinOpenDrainPushPullCfg_E   copy_GPIOPinOpenDrainPushPullCfg    ,\
                 Dt_GPIOPinAlternateFunCfg_E        copy_GPIOPinAlternateFunCfg         ,\
                 Dt_GPIOPinDigitalEnableCfg_E       copy_GPIOPinDigitalEnableCfg        )
{
    MGPIO_vSetPinMode               (copy_GPIOPortCfg , copy_GPIOPinCfg , copy_GPIOBusCfg , copy_GPIOPinDirectionCfg);
    MGPIO_vSetPinOutputType         (copy_GPIOPortCfg , copy_GPIOPinCfg , copy_GPIOBusCfg , copy_GPIOPinOpenDrainPushPullCfg);
    MGPIO_vSetPullType              (copy_GPIOPortCfg , copy_GPIOPinCfg , copy_GPIOBusCfg , copy_GPIOPinPullUpDownCfg);
    MGPIO_vSetDriveStrenghType      (copy_GPIOPortCfg , copy_GPIOPinCfg , copy_GPIOBusCfg , copy_GPIOPinDriveStrenghCfg);
    MGPIO_vSetDigitalPinEnableType  (copy_GPIOPortCfg , copy_GPIOPinCfg , copy_GPIOBusCfg , copy_GPIOPinDigitalEnableCfg);
    MGPIO_vSetPinAltFn              (copy_GPIOPortCfg , copy_GPIOPinCfg , copy_GPIOBusCfg , copy_GPIOPinAlternateFunCfg);
}

 /******************************************************************************************************************/

void MGPIO_vWriteData(Dt_GPIOPortNum_E                   copy_GPIOPortCfg                    ,\
                      Dt_GPIOPinNum_E                    copy_GPIOPinCfg                     ,\
                      Dt_GPIOBusCfg_E                    copy_GPIOBusCfg                     ,\
                      //Dt_GPIOPinAddressOffsetCfg_E       copy_GPIOPinAddressOffsetCfg        ,
                      Dt_GPIOPinOutputStateCfg_E         copy_GPIOPinOutputStateCfg           )
{
    switch(copy_GPIOPinOutputStateCfg)
    {
        case GPIO_PIN_OUTPUT_STATE_LOW:
        {
            //CLR_BIT(MGPIO_DATA_REG(copy_GPIOBusCfg,copy_GPIOPortCfg,copy_GPIOPinAddressOffsetCfg)->All , copy_GPIOPinCfg);
            CLR_BIT(MGPIO_DATA_REG(copy_GPIOBusCfg,copy_GPIOPortCfg,copy_GPIOPinCfg)->All , copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_OUTPUT_STATE_HIGH:
        {
            //SET_BIT(MGPIO_DATA_REG(copy_GPIOBusCfg,copy_GPIOPortCfg,copy_GPIOPinAddressOffsetCfg)->All , copy_GPIOPinCfg);
            SET_BIT(MGPIO_DATA_REG(copy_GPIOBusCfg,copy_GPIOPortCfg,copy_GPIOPinCfg)->All , copy_GPIOPinCfg);
            break;
        }
        default:
        {
            break;
        }
    }
}

 /******************************************************************************************************************/

void MGPIO_vInitOneByte(Dt_GPIOPortNum_E                   copy_GPIOPortCfg                    ,\
                        Dt_GPIOPinNum_E                    copy_GPIOPinSCfg                    ,\
                        Dt_GPIOBusCfg_E                    copy_GPIOBusCfg                     ,\
                        Dt_GPIOPinDirectionCfg_E           copy_GPIOPinDirectionCfg            ,\
                        Dt_GPIOPinDriveStrenghCfg_E        copy_GPIOPinDriveStrenghCfg         ,\
                        Dt_GPIOPinPullUpDownCfg_E          copy_GPIOPinPullUpDownCfg           ,\
                        Dt_GPIOPinOpenDrainPushPullCfg_E   copy_GPIOPinOpenDrainPushPullCfg    ,\
                        Dt_GPIOPinAlternateFunCfg_E        copy_GPIOPinAlternateFunCfg         ,\
                        Dt_GPIOPinDigitalEnableCfg_E       copy_GPIOPinDigitalEnableCfg        )
{
    uint8 local_counter = 0;

    for(local_counter ; local_counter <= copy_GPIOPinSCfg ; local_counter++)
    {
        MGPIO_vSetPinMode               (copy_GPIOPortCfg , local_counter , copy_GPIOBusCfg , copy_GPIOPinDirectionCfg);
        MGPIO_vSetPinOutputType         (copy_GPIOPortCfg , local_counter , copy_GPIOBusCfg , copy_GPIOPinOpenDrainPushPullCfg);
        MGPIO_vSetPullType              (copy_GPIOPortCfg , local_counter , copy_GPIOBusCfg , copy_GPIOPinPullUpDownCfg);
        MGPIO_vSetDriveStrenghType      (copy_GPIOPortCfg , local_counter , copy_GPIOBusCfg , copy_GPIOPinDriveStrenghCfg);
        MGPIO_vSetDigitalPinEnableType  (copy_GPIOPortCfg , local_counter , copy_GPIOBusCfg , copy_GPIOPinDigitalEnableCfg);
        MGPIO_vSetPinAltFn              (copy_GPIOPortCfg , local_counter , copy_GPIOBusCfg , copy_GPIOPinAlternateFunCfg);
    }
}

 /******************************************************************************************************************/

void MGPIO_vPortOutputOneByte(Dt_GPIOPortNum_E                   copy_GPIOPortCfg                    ,\
                              Dt_GPIOPinAddCfg_E                 copy_GPIOPinAddCfg                  ,\
                              Dt_GPIOBusCfg_E                    copy_GPIOBusCfg                     ,\
                              uint32                             copy_GPIOPinOutputStateCfg           )
{
    MGPIO_DATA_REG_ONE_BYTE(copy_GPIOBusCfg,copy_GPIOPortCfg,copy_GPIOPinAddCfg)->All = copy_GPIOPinOutputStateCfg;   
}


void Delay(void){
	unsigned long j=0;
	for (j=0; j<DELAY_VALUE ; j++);
}