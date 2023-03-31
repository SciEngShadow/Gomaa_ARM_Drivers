#include "SYS_CTRL_priv.h"
#include "SYS_CTRL_int.h"
#include "SYS_CTRL_cfg.h"

/*
void MRCC_voidEnableClock(BusId_t Copy_u8BusId, u8 Copy_u8PerId);
void MRCC_voidDisableClock(BusId_t Copy_u8BusId, u8 Copy_u8PerId);
void MRCC_voidInitSystemClk(void);
void MRCC_voidEnableSecuritySystem(void);
void MRCC_voidDisableSecuritySystem(void);
void MRCC_voidOutMCO_1(RCC_MCO1SrcName_t Copy_tMCO_1SRC );
void MRCC_voidOutMCO_1Pre(RCC_MCO1Pre_t Copy_tPreMco_1);
*/

/*
void MSYS_CTRL_vClkConfig(Dt_ClkConfig_U copy_Config)
{
#if CLK_SELECT == SYSCTL_ALTCLK_PIOSC
    MRCC->BYPASS = copy_Config.Pll_EnCtrl;
    MRCC->OSCSRC = copy_Config.ClkSlct;
#endif
}

void MSYS_CTRL_vGPIOAHBEnable(Dt_PORT_VAL_E copy_GPIOPeripheral)
{
    switch(copy_GPIOPeripheral)
    {
        case PORTA_VAL:
        case PORTB_VAL:
        case PORTC_VAL:
        case PORTD_VAL:
        case PORTE_VAL:
        case PORTF_VAL:
        default:
    }

}
*/

void MSYS_CTRL_vSystemClkInit(Dt_SysClckSelectCfg_E Config)
{
    Dt_ClkInitConfig_U Copy_Config = { .All = Config };

    MRCC->Pin.OSCSRC = Copy_Config.Bits.ClkSlct_OSCSRC;
    MRCC->Pin.BYPASS = Copy_Config.Bits.Pll_EnCtrl_BYPASS;
    MRCC->Pin.SYSDIV = Copy_Config.Bits.Prescaler_SYSDIV;
    
    /*PLL Config To be done*/
}

void MSYS_CTRL_vGPIOClkEnableCtrl(Dt_GPIOClckEnableCfg_E Config)
{   
    Dt_GPIOClkEnable_U Copy_Config = { .All = Config };
       /*APB Config to be done*/
    switch(Copy_Config.Bits.PortSlct)
    {
        case PORTA_VAL:
        {
            MGPIOHBCTL->Pin.PORTA                          = Copy_Config.Bits.BusSlct;
            MRCG_PrephralCtrl->RCGCGPIO_REG.Pin.GPIO_PORTA = Copy_Config.Bits.ClckEnCtrl;
            break;
        }
        case PORTB_VAL:
        {
            MGPIOHBCTL->Pin.PORTB                          = Copy_Config.Bits.BusSlct;
            MRCG_PrephralCtrl->RCGCGPIO_REG.Pin.GPIO_PORTB = Copy_Config.Bits.ClckEnCtrl;
            break;
        }
        case PORTC_VAL:
        {
            MGPIOHBCTL->Pin.PORTC                          = Copy_Config.Bits.BusSlct;
            MRCG_PrephralCtrl->RCGCGPIO_REG.Pin.GPIO_PORTC = Copy_Config.Bits.ClckEnCtrl;
            break;
        }
        case PORTD_VAL:
        {
            MGPIOHBCTL->Pin.PORTD                          = Copy_Config.Bits.BusSlct;
            MRCG_PrephralCtrl->RCGCGPIO_REG.Pin.GPIO_PORTD = Copy_Config.Bits.ClckEnCtrl;
            break;
        }
        case PORTE_VAL:
        {
            MGPIOHBCTL->Pin.PORTE                          = Copy_Config.Bits.BusSlct;
            MRCG_PrephralCtrl->RCGCGPIO_REG.Pin.GPIO_PORTE = Copy_Config.Bits.ClckEnCtrl;
            break;
        }
        case PORTF_VAL:
        {
            MGPIOHBCTL->Pin.PORTF                          = Copy_Config.Bits.BusSlct;
            MRCG_PrephralCtrl->RCGCGPIO_REG.Pin.GPIO_PORTF = Copy_Config.Bits.ClckEnCtrl;
            break;
        }
        default:
        {
            /*Do Nothing*/
        }
    }
}
