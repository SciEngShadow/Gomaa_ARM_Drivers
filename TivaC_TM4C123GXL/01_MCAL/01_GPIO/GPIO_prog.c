#include "GPIO_priv.h"
#include "GPIO_int.h"
#include "GPIO_cfg.h"

void MGPIO_vSetPinMode(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                       Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                       Dt_GPIOBusCfg_E              copy_GPIOBusCfg          ,\
                       Dt_GPIOPinDirectionCfg_E     copy_GPIOPinDirectionCfg )
{
    switch(copy_GPIOBusCfg)
    {
        case GPIO_AHB:{
            switch(copy_GPIOPortCfg)
            {
                case GPIO_PORTA: {
                    switch(copy_GPIOPinCfg)
                    {
                        case GPIO_PIN0: MGPIO_AHB_GPIODIR_REG(0,0) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN1: MGPIO_AHB_GPIODIR_REG(0,1) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN2: MGPIO_AHB_GPIODIR_REG(0,2) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN3: MGPIO_AHB_GPIODIR_REG(0,3) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN4: MGPIO_AHB_GPIODIR_REG(0,4) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN5: MGPIO_AHB_GPIODIR_REG(0,5) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN6: MGPIO_AHB_GPIODIR_REG(0,6) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN7: MGPIO_AHB_GPIODIR_REG(0,7) = copy_GPIOPinDirectionCfg; break;
                        default: break;
                    } break;
                }
                case GPIO_PORTB:{
                    switch(copy_GPIOPinCfg)
                    {
                        case GPIO_PIN0: MGPIO_AHB_GPIODIR_REG(0,0) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN1: MGPIO_AHB_GPIODIR_REG(0,1) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN2: MGPIO_AHB_GPIODIR_REG(0,2) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN3: MGPIO_AHB_GPIODIR_REG(0,3) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN4: MGPIO_AHB_GPIODIR_REG(0,4) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN5: MGPIO_AHB_GPIODIR_REG(0,5) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN6: MGPIO_AHB_GPIODIR_REG(0,6) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN7: MGPIO_AHB_GPIODIR_REG(0,7) = copy_GPIOPinDirectionCfg; break;
                        default: break;
                    } break;
                }
                case GPIO_PORTC:{
                    switch(copy_GPIOPinCfg)
                    {
                        case GPIO_PIN0: MGPIO_AHB_GPIODIR_REG(0,0) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN1: MGPIO_AHB_GPIODIR_REG(0,1) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN2: MGPIO_AHB_GPIODIR_REG(0,2) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN3: MGPIO_AHB_GPIODIR_REG(0,3) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN4: MGPIO_AHB_GPIODIR_REG(0,4) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN5: MGPIO_AHB_GPIODIR_REG(0,5) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN6: MGPIO_AHB_GPIODIR_REG(0,6) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN7: MGPIO_AHB_GPIODIR_REG(0,7) = copy_GPIOPinDirectionCfg; break;
                        default: break;
                    } break;
                }
                case GPIO_PORTD:{
                    switch(copy_GPIOPinCfg)
                    {
                        case GPIO_PIN0: MGPIO_AHB_GPIODIR_REG(0,0) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN1: MGPIO_AHB_GPIODIR_REG(0,1) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN2: MGPIO_AHB_GPIODIR_REG(0,2) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN3: MGPIO_AHB_GPIODIR_REG(0,3) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN4: MGPIO_AHB_GPIODIR_REG(0,4) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN5: MGPIO_AHB_GPIODIR_REG(0,5) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN6: MGPIO_AHB_GPIODIR_REG(0,6) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN7: MGPIO_AHB_GPIODIR_REG(0,7) = copy_GPIOPinDirectionCfg; break;
                        default: break;
                    } break;
                }
                case GPIO_PORTE:{
                    switch(copy_GPIOPinCfg)
                    {
                        case GPIO_PIN0: MGPIO_AHB_GPIODIR_REG(0,0) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN1: MGPIO_AHB_GPIODIR_REG(0,1) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN2: MGPIO_AHB_GPIODIR_REG(0,2) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN3: MGPIO_AHB_GPIODIR_REG(0,3) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN4: MGPIO_AHB_GPIODIR_REG(0,4) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN5: MGPIO_AHB_GPIODIR_REG(0,5) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN6: MGPIO_AHB_GPIODIR_REG(0,6) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN7: MGPIO_AHB_GPIODIR_REG(0,7) = copy_GPIOPinDirectionCfg; break;
                        default: break;
                    } break;
                }
                case GPIO_PORTF:{
                    switch(copy_GPIOPinCfg)
                    {
                        case GPIO_PIN0: MGPIO_AHB_GPIODIR_REG(0,0) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN1: MGPIO_AHB_GPIODIR_REG(0,1) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN2: MGPIO_AHB_GPIODIR_REG(0,2) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN3: MGPIO_AHB_GPIODIR_REG(0,3) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN4: MGPIO_AHB_GPIODIR_REG(0,4) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN5: MGPIO_AHB_GPIODIR_REG(0,5) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN6: MGPIO_AHB_GPIODIR_REG(0,6) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN7: MGPIO_AHB_GPIODIR_REG(0,7) = copy_GPIOPinDirectionCfg; break;
                        default: break;
                    } break;
                }
                default:
                {
                    break;
                }
            }break;
        }
        case GPIO_APB:{
            switch(copy_GPIOPortCfg)
            {
                case GPIO_PORTA: {
                    switch(copy_GPIOPinCfg)
                    {
                        case GPIO_PIN0: MGPIO_APB_GPIODIR_REG(0,0) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN1: MGPIO_APB_GPIODIR_REG(0,1) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN2: MGPIO_APB_GPIODIR_REG(0,2) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN3: MGPIO_APB_GPIODIR_REG(0,3) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN4: MGPIO_APB_GPIODIR_REG(0,4) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN5: MGPIO_APB_GPIODIR_REG(0,5) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN6: MGPIO_APB_GPIODIR_REG(0,6) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN7: MGPIO_APB_GPIODIR_REG(0,7) = copy_GPIOPinDirectionCfg; break;
                        default: break;
                    } break;
                }
                case GPIO_PORTB:{
                    switch(copy_GPIOPinCfg)
                    {
                        case GPIO_PIN0: MGPIO_APB_GPIODIR_REG(0,0) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN1: MGPIO_APB_GPIODIR_REG(0,1) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN2: MGPIO_APB_GPIODIR_REG(0,2) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN3: MGPIO_APB_GPIODIR_REG(0,3) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN4: MGPIO_APB_GPIODIR_REG(0,4) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN5: MGPIO_APB_GPIODIR_REG(0,5) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN6: MGPIO_APB_GPIODIR_REG(0,6) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN7: MGPIO_APB_GPIODIR_REG(0,7) = copy_GPIOPinDirectionCfg; break;
                        default: break;
                    } break;
                }
                case GPIO_PORTC:{
                    switch(copy_GPIOPinCfg)
                    {
                        case GPIO_PIN0: MGPIO_APB_GPIODIR_REG(0,0) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN1: MGPIO_APB_GPIODIR_REG(0,1) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN2: MGPIO_APB_GPIODIR_REG(0,2) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN3: MGPIO_APB_GPIODIR_REG(0,3) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN4: MGPIO_APB_GPIODIR_REG(0,4) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN5: MGPIO_APB_GPIODIR_REG(0,5) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN6: MGPIO_APB_GPIODIR_REG(0,6) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN7: MGPIO_APB_GPIODIR_REG(0,7) = copy_GPIOPinDirectionCfg; break;
                        default: break;
                    } break;
                }
                case GPIO_PORTD:{
                    switch(copy_GPIOPinCfg)
                    {
                        case GPIO_PIN0: MGPIO_APB_GPIODIR_REG(0,0) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN1: MGPIO_APB_GPIODIR_REG(0,1) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN2: MGPIO_APB_GPIODIR_REG(0,2) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN3: MGPIO_APB_GPIODIR_REG(0,3) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN4: MGPIO_APB_GPIODIR_REG(0,4) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN5: MGPIO_APB_GPIODIR_REG(0,5) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN6: MGPIO_APB_GPIODIR_REG(0,6) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN7: MGPIO_APB_GPIODIR_REG(0,7) = copy_GPIOPinDirectionCfg; break;
                        default: break;
                    } break;
                }
                case GPIO_PORTE:{
                    switch(copy_GPIOPinCfg)
                    {
                        case GPIO_PIN0: MGPIO_APB_GPIODIR_REG(0,0) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN1: MGPIO_APB_GPIODIR_REG(0,1) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN2: MGPIO_APB_GPIODIR_REG(0,2) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN3: MGPIO_APB_GPIODIR_REG(0,3) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN4: MGPIO_APB_GPIODIR_REG(0,4) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN5: MGPIO_APB_GPIODIR_REG(0,5) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN6: MGPIO_APB_GPIODIR_REG(0,6) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN7: MGPIO_APB_GPIODIR_REG(0,7) = copy_GPIOPinDirectionCfg; break;
                        default: break;
                    } break;
                }
                case GPIO_PORTF:{
                    switch(copy_GPIOPinCfg)
                    {
                        case GPIO_PIN0: MGPIO_APB_GPIODIR_REG(0,0) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN1: MGPIO_APB_GPIODIR_REG(0,1) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN2: MGPIO_APB_GPIODIR_REG(0,2) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN3: MGPIO_APB_GPIODIR_REG(0,3) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN4: MGPIO_APB_GPIODIR_REG(0,4) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN5: MGPIO_APB_GPIODIR_REG(0,5) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN6: MGPIO_APB_GPIODIR_REG(0,6) = copy_GPIOPinDirectionCfg; break;
                        case GPIO_PIN7: MGPIO_APB_GPIODIR_REG(0,7) = copy_GPIOPinDirectionCfg; break;
                        default: break;
                    } break;
                }
                default:
                {
                    break;
                }
            }break;
        }
        default:
        {
            break;
        }
    }
}

/*
void MGPIO_vInit(Dt_GPIOPortNum_E                   copy_GPIOPortCfg                    ,\
                 Dt_GPIOPinNum_E                    copy_GPIOPinCfg                     ,\
                 Dt_GPIOPinDirectionCfg_E           copy_GPIOPinDirectionCfg            ,\
                 Dt_GPIOPinDriveStrenghCfg_E        copy_GPIOPinDriveStrenghCfg         ,\
                 Dt_GPIOPinPullUpDownCfg_E          copy_GPIOPinPullUpDownCfg           ,\
                 Dt_GPIOPinOpenDrainPushPullCfg_E   copy_GPIOPinOpenDrainPushPullCfg    ,\
                 Dt_GPIOPinAlternateFunCfg_E        copy_GPIOPinAlternateFunCfg         ,\
                 Dt_GPIOPinDigitalEnableCfg_E       copy_GPIOPinDigitalEnableCfg        )
{
    Dt_GPIOSinglePinInitConfig_Bits_S local_GPIO_Config = {
        .PortSelect         =   copy_GPIOPortCfg                    ,
        .PinSelect          =   copy_GPIOPinCfg                     ,
        .PinDirection       =   copy_GPIOPinDirectionCfg            ,
        .PinOutputCurrent   =   copy_GPIOPinDriveStrenghCfg         ,
        .PinInternalAttach  =   copy_GPIOPinPullUpDownCfg           ,
        .PinOutputType      =   copy_GPIOPinOpenDrainPushPullCfg    ,
        .PinALF_EN          =   copy_GPIOPinAlternateFunCfg         ,
        .PinDigitalEn       =   copy_GPIOPinDigitalEnableCfg
    };

}
*/


