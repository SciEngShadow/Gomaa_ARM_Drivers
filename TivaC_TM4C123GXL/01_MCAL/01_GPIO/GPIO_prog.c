#include "GPIO_priv.h"
#include "GPIO_int.h"
#include "GPIO_cfg.h"

void MGPIO_vSetPinMode(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                       Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                       Dt_GPIOBusCfg_E              copy_GPIOBusCfg          ,\
                       Dt_GPIOPinDirectionCfg_E     copy_GPIOPinDirectionCfg )
{
    MGPIO_CTRL1_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODIR.All |= (copy_GPIOPinDirectionCfg<<copy_GPIOPinCfg);
}

/******************************************************************************************************************/

void MGPIO_vSetPinOutputType(Dt_GPIOPortNum_E                   copy_GPIOPortCfg         ,\
                             Dt_GPIOPinNum_E                    copy_GPIOPinCfg          ,\
                             Dt_GPIOBusCfg_E                    copy_GPIOBusCfg          ,\
                             Dt_GPIOPinOpenDrainPushPullCfg_E   copy_GPIOPinOpenDrainPushPullCfg)
{
    MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOODR.All |= (copy_GPIOPinOpenDrainPushPullCfg<<copy_GPIOPinCfg);
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
            MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOPUR.All |= (1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_PULLUP_DIS:
        {
            MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOPUR.All &= ~(1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_PULLDOWN_EN:
        {
            MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOPDR.All |= (1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_PULLDOWN_DIS:
        {
            MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOPDR.All &= ~(1U<<copy_GPIOPinCfg);
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
            MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR2R.All &= ~(1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_R2REN:
        {
            MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR2R.All |= (1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_R4RDIS:
        {
            MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR4R.All &= ~(1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_R4REN:
        {
            MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR4R.All |= (1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_R8RDIS:
        {
            MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR8R.All &= ~(1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_R8REN:
        {
            MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODR8R.All |= (1U<<copy_GPIOPinCfg);
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
            MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODEN.All &= ~(1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_D_EN:
        {
            MGPIO_CTRL2_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIODEN.All |= (1U<<copy_GPIOPinCfg);
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
                        Dt_GPIOPinAlternateFunCfg_E  opy_GPIOPinAlternateFunCfg)
{
    switch(opy_GPIOPinAlternateFunCfg)
    {
        case GPIO_PIN_ALF_DIS:
        {
            MGPIO_CTRL1_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOAFSEL.All &= ~(1U<<copy_GPIOPinCfg);
            break;
        }
        case GPIO_PIN_ALF_EN:
        {
            MGPIO_CTRL1_REG(copy_GPIOBusCfg,copy_GPIOPortCfg)->GPIOAFSEL.All |= (1U<<copy_GPIOPinCfg);
            break;
        }
        default:
        {
            break;
        }        
    }
}


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
