#ifndef _SYS_CTRL_INT_H
#define _SYS_CTRL_INT_H

#include "../../00_LIB/00_STD_TYPES/std_types.h"
#include "SYS_CTRL_priv.h"
/*
void MRCG_vInit(void);
void MRCG_vPrepheralEnableClock();
void MRCG_vPrepheralDisableClock();
*/

/*
void MRCG_voidEnableClock(BusId_t Copy_u8BusId, u8 Copy_u8PerId);
void MRCG_voidDisableClock(BusId_t Copy_u8BusId, u8 Copy_u8PerId);
void MRCG_voidInitSystemClk(void);
void MRCG_voidEnableSecuritySystem(void);
void MRCG_voidDisableSecuritySystem(void);
void MRCG_voidOutMCO_1(RCC_MCO1SrcName_t Copy_tMCO_1SRC );
void MRCG_voidOutMCO_1Pre(RCC_MCO1Pre_t Copy_tPreMco_1);
*/

//void MSYS_CTRL_vClkConfig(Dt_ClkConfig_U copy_Config);
//void MSYS_CTRL_vGPIOAHBEnable(uint32 ui32GPIOPeripheral);

void MSYS_CTRL_vSystemClkInit(Dt_SysClckSelectCfg_E Config);
void MSYS_CTRL_vGPIOClkEnableCtrl(Dt_GPIOClckEnableCfg_E Config);

#endif /*_SYS_CTRL_INIT_H*/