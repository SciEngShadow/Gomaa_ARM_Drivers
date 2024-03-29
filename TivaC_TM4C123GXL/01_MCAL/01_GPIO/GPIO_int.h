#ifndef _GPIO_INT_H_
#define _GPIO_INT_H_

#include "../../00_LIB/00_STD_TYPES/std_types.h"
#include "GPIO_priv.h"
#include "../../00_LIB/01_BIT_MATH/bit_math.h"

/*
void 
(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8Mode  );

void MGPIO_voidSetPinOutputType(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8OutPutType  );

void MGPIO_voidSetPinOutSpeed(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u32 Copy_u32OutSpeed);

void MGPIO_voidSetPullType(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u32 Copy_u32PullType );

u8 MGPIO_u8ReadData(u8 copy_u8PORT ,u8 copy_u8PIN);

void MGPIO_voidWriteData(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8State);

void MGPIO_voidPinTog(u8 Copy_u8PortName ,u8 Copy_u8PinNum);

void MGPIO_voidPinLock(u8 Copy_u8PortNum ,u8 Copy_u8PinNum );

void MGPIO_voidSetPinAltFn( u8 Copy_u8PortNum ,u8 Copy_u8PinNum, u8 Copy_u8ALF );

void MGPIO_voidPortOutputOneByte(u8 Copy_u8Port, u8 Copy_u8Data, u8 Copy_u8StartBit);

void MGPIO_voidWriteDataDIR(u8 Copy_u8PortName ,u8 Copy_u8PinNum ,u8 Copy_u8State);
*/
void MGPIO_vSetPinMode(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                       Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                       Dt_GPIOBusCfg_E              copy_GPIOBusCfg          ,\
                       Dt_GPIOPinDirectionCfg_E     copy_GPIOPinDirectionCfg );

void MGPIO_vSetPinOutputType(Dt_GPIOPortNum_E                   copy_GPIOPortCfg         ,\
                             Dt_GPIOPinNum_E                    copy_GPIOPinCfg          ,\
                             Dt_GPIOBusCfg_E                    copy_GPIOBusCfg          ,\
                             Dt_GPIOPinOpenDrainPushPullCfg_E   copy_GPIOPinOpenDrainPushPullCfg);

void MGPIO_vSetPullType(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                        Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                        Dt_GPIOBusCfg_E              copy_GPIOBusCfg          ,\
                        Dt_GPIOPinPullUpDownCfg_E    copy_GPIOPinPullUpDownCfg);

void MGPIO_vSetDriveStrenghType(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                                Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                                Dt_GPIOBusCfg_E              copy_GPIOBusCfg          ,\
                                Dt_GPIOPinDriveStrenghCfg_E  copy_GPIOPinDriveStrenghCfg);

void MGPIO_vSetDigitalPinEnableType(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                                    Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                                    Dt_GPIOBusCfg_E              copy_GPIOBusCfg          ,\
                                    Dt_GPIOPinDigitalEnableCfg_E copy_GPIOPinDigitalEnableCfg);


void MGPIO_vSetPinAltFn(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                        Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                        Dt_GPIOBusCfg_E              copy_GPIOBusCfg          ,\
                        Dt_GPIOPinAlternateFunCfg_E  opy_GPIOPinAlternateFunCfg);
                       

void MGPIO_vInit(Dt_GPIOPortNum_E                   copy_GPIOPortCfg                    ,\
                 Dt_GPIOPinNum_E                    copy_GPIOPinCfg                     ,\
                 Dt_GPIOBusCfg_E                    copy_GPIOBusCfg                     ,\
                 Dt_GPIOPinLockCfg_E                copy_GPIOPinLockCfg                 ,\
                 Dt_GPIOPinDirectionCfg_E           copy_GPIOPinDirectionCfg            ,\
                 Dt_GPIOPinDriveStrenghCfg_E        copy_GPIOPinDriveStrenghCfg         ,\
                 Dt_GPIOPinPullUpDownCfg_E          copy_GPIOPinPullUpDownCfg           ,\
                 Dt_GPIOPinOpenDrainPushPullCfg_E   copy_GPIOPinOpenDrainPushPullCfg    ,\
                 Dt_GPIOPinAlternateFunCfg_E        copy_GPIOPinAlternateFunCfg         ,\
                 Dt_GPIOPinDigitalEnableCfg_E       copy_GPIOPinDigitalEnableCfg        );


void MGPIO_vWriteData(Dt_GPIOPortNum_E                   copy_GPIOPortCfg                    ,\
                      Dt_GPIOPinNum_E                    copy_GPIOPinCfg                     ,\
                      Dt_GPIOBusCfg_E                    copy_GPIOBusCfg                     ,\
                     // Dt_GPIOPinAddressOffsetCfg_E       copy_GPIOPinAddressOffsetCfg        ,
                      Dt_GPIOPinOutputStateCfg_E         copy_GPIOPinOutputStateCfg           );

void MGPIO_vInitOneByte(Dt_GPIOPortNum_E                   copy_GPIOPortCfg                    ,\
                        Dt_GPIOPinNum_E                    copy_GPIOPinCfg                     ,\
                        Dt_GPIOBusCfg_E                    copy_GPIOBusCfg                     ,\
                        Dt_GPIOPinLockCfg_E                copy_GPIOPinLockCfg                 ,\
                        Dt_GPIOPinDirectionCfg_E           copy_GPIOPinDirectionCfg            ,\
                        Dt_GPIOPinDriveStrenghCfg_E        copy_GPIOPinDriveStrenghCfg         ,\
                        Dt_GPIOPinPullUpDownCfg_E          copy_GPIOPinPullUpDownCfg           ,\
                        Dt_GPIOPinOpenDrainPushPullCfg_E   copy_GPIOPinOpenDrainPushPullCfg    ,\
                        Dt_GPIOPinAlternateFunCfg_E        copy_GPIOPinAlternateFunCfg         ,\
                        Dt_GPIOPinDigitalEnableCfg_E       copy_GPIOPinDigitalEnableCfg        );
                        
void MGPIO_vPortOutputOneByte(Dt_GPIOPortNum_E                   copy_GPIOPortCfg                    ,\
                              Dt_GPIOPinAddCfg_E                 copy_GPIOPinAddCfg                  ,\
                              Dt_GPIOBusCfg_E                    copy_GPIOBusCfg                     ,\
                              uint32                             copy_GPIOPinOutputStateCfg           );

void MGPIO_enumReadData(Dt_GPIOPortNum_E                   copy_GPIOPortCfg                    ,\
                        Dt_GPIOPinNum_E                    copy_GPIOPinCfg                     ,\
                        Dt_GPIOBusCfg_E                    copy_GPIOBusCfg                     ,\
                        uint8*                             copy_GPIOPinOutputRead               );

void MGPIO_enumReadDataOneByte(Dt_GPIOPortNum_E                   copy_GPIOPortCfg                    ,\
                                Dt_GPIOPinNum_E                    copy_GPIOPinCfg                     ,\
                                Dt_GPIOBusCfg_E                    copy_GPIOBusCfg                     ,\
                                uint8*                             copy_GPIOPinOutputRead               );

void MGPIO_vPinLock(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                    Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                    Dt_GPIOBusCfg_E              copy_GPIOBusCfg          ,\
                    Dt_GPIOPinLockCfg_E          copy_GPIOPinLockCfg      );

void MGPIO_vPinToggle(Dt_GPIOPortNum_E             copy_GPIOPortCfg         ,\
                      Dt_GPIOPinNum_E              copy_GPIOPinCfg          ,\
                      Dt_GPIOBusCfg_E              copy_GPIOBusCfg          );


void Delay(void);
#endif /*_GPIO_INT_H_*/