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



/*void MGPIO_vInit(Dt_GPIOPortNum_E                   copy_GPIOPortCfg                    ,\
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