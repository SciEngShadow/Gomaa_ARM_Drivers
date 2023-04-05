#ifndef _GPIO_PRIV_H_
#define _GPIO_PRIV_H_

#include "../../00_LIB/00_STD_TYPES/std_types.h"

typedef enum{
    GPIO_PORTA, GPIO_PORTB, GPIO_PORTC,
    GPIO_PORTD, GPIO_PORTE, GPIO_PORTF
}Dt_GPIOPortNum_E;

typedef enum{
    GPIO_PIN0,  GPIO_PIN1,  GPIO_PIN2,
    GPIO_PIN3,  GPIO_PIN4,  GPIO_PIN5,
    GPIO_PIN6,  GPIO_PIN7
}Dt_GPIOPinNum_E;

typedef enum{
    GPIO_PIN_PULLUP_EN   = 0U 	, 	GPIO_PIN_PULLUP_DIS   = 1U 	,
    GPIO_PIN_PULLDOWN_EN = 2U 	, 	GPIO_PIN_PULLDOWN_DIS = 3U
}Dt_GPIOPinPullUpDownCfg_E;

typedef enum{
    GPIO_APB   = 0U   ,
    GPIO_AHB   = 1U
}Dt_GPIOBusCfg_E;

typedef enum{
    GPIO_PIN_INPUT   = 0U   ,
    GPIO_PIN_OUTPUT  = 1U
}Dt_GPIOPinDirectionCfg_E;

typedef enum{
    GPIO_PIN_R2RDIS   = 0U 	, 	GPIO_PIN_R2REN   = 1U 	,
    GPIO_PIN_R4RDIS   = 2U 	, 	GPIO_PIN_R4REN   = 3U   ,
    GPIO_PIN_R8RDIS   = 4U 	, 	GPIO_PIN_R8REN   = 5U
}Dt_GPIOPinDriveStrenghCfg_E;

typedef enum{
    GPIO_PIN_PUSHPULL    = 0U   ,
    GPIO_PIN_OPENDRAIN   = 1U
}Dt_GPIOPinOpenDrainPushPullCfg_E;

typedef enum{
    GPIO_PIN_D_DIS   = 0U   ,
    GPIO_PIN_D_EN    = 1U
}Dt_GPIOPinDigitalEnableCfg_E;

typedef enum{
    GPIO_PIN_ALF_DIS    = 0U    ,
    GPIO_PIN_ALF_EN     = 1U
}Dt_GPIOPinAlternateFunCfg_E;

typedef enum{
    GPIO_PIN_OUTPUT_STATE_LOW    = 0U    ,
    GPIO_PIN_OUTPUT_STATE_HIGH   = 1U
}Dt_GPIOPinOutputStateCfg_E;

typedef enum{
    GPIO_PIN0_ADD_OFFSET    = 0x004U    ,
    GPIO_PIN1_ADD_OFFSET    = 0x008U    ,
    GPIO_PIN2_ADD_OFFSET    = 0x010U    ,
    GPIO_PIN3_ADD_OFFSET    = 0x020U    ,
    GPIO_PIN4_ADD_OFFSET    = 0x040U    ,
    GPIO_PIN5_ADD_OFFSET    = 0x080U    ,
    GPIO_PIN6_ADD_OFFSET    = 0x100U    ,
    GPIO_PIN7_ADD_OFFSET    = 0x200U    
}Dt_GPIOPinAddressOffsetCfg_E;

/*****************************************************/

typedef struct{
    uint16 PortSelect                    :3;
    uint16 PinSelect                     :3;
    uint16 PinDirection                  :1;
    uint16 PinOutputCurrent              :3;
    uint16 PinInternalAttach             :2;
    uint16 PinOutputType                 :1;
    uint16 PinDigitalEn                  :1;
    uint16 PinALF_EN                     :1;      
}Dt_GPIOSinglePinInitConfig_Bits_S;

typedef union{
    uint16 						            All;
	Dt_GPIOSinglePinInitConfig_Bits_S 	    Bits;
}Dt_GPIOSinglePinInitConfig_U;
/*****************************************************/

/***************************************************00000000000000000000000000**/

typedef struct{
    uint8 PortPinSelectStart                       :1;
    uint8 PortPinSelecttEnd                       :1;
    uint8 PinLeveValue                  :1;
    uint8 PinDirection                  :1;
    uint8 PinInternalAttach             :1;
    uint8 PinOutputCurrent              :1;
}Dt_GPIOMultiPinsInitConfig_Bits_S;

typedef union{
    uint8 						            All;
	Dt_GPIOMultiPinsInitConfig_Bits_S 	    Bits;
}Dt_GPIOMultiPinsInitConfig_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_MGPIO_PORTx_Data_REG_Pins_S;

typedef union {
    uint32 						            All;
	Dt_MGPIO_PORTx_Data_REG_Pins_S			Pin;
}Dt_MGPIO_PORTx_Data_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIODIR_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIODIR_REG_Pins_S	        Pin;
}Dt_GPIODIR_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOIS_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOIS_REG_Pins_S	        Pin;
}Dt_GPIOIS_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOIBE_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOIBE_REG_Pins_S	        Pin;
}Dt_GPIOIBE_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOIEV_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOIEV_REG_Pins_S	        Pin;
}Dt_GPIOIEV_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOIM_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOIM_REG_Pins_S	        Pin;
}Dt_GPIOIM_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIORIS_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIORIS_REG_Pins_S	        Pin;
}Dt_GPIORIS_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOMIS_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOMIS_REG_Pins_S	        Pin;
}Dt_GPIOMIS_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOICR_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOICR_REG_Pins_S	        Pin;
}Dt_GPIOICR_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOAFSEL_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOAFSEL_REG_Pins_S	        Pin;
}Dt_GPIOAFSEL_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIODR2R_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIODR2R_REG_Pins_S	        Pin;
}Dt_GPIODR2R_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIODR4R_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIODR4R_REG_Pins_S	        Pin;
}Dt_GPIODR4R_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIODR8R_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIODR8R_REG_Pins_S	        Pin;
}Dt_GPIODR8R_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOODR_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOODR_REG_Pins_S	        Pin;
}Dt_GPIOODR_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPUR_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPUR_REG_Pins_S	        Pin;
}Dt_GPIOPUR_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPDR_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPDR_REG_Pins_S	        Pin;
}Dt_GPIOPDR_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOSLR_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOSLR_REG_Pins_S	        Pin;
}Dt_GPIOSLR_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIODEN_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIODEN_REG_Pins_S	        Pin;
}Dt_GPIODEN_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOLOCK_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOLOCK_REG_Pins_S	        Pin;
}Dt_GPIOLOCK_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOCR_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOCR_REG_Pins_S	        Pin;
}Dt_GPIOCR_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOAMSEL_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOAMSEL_REG_Pins_S	        Pin;
}Dt_GPIOAMSEL_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PMC0:4;
    uint32 PMC1:4;
    uint32 PMC2:4;
    uint32 PMC3:4;
    uint32 PMC4:4;
    uint32 PMC5:4;
    uint32 PMC6:4;
    uint32 PMC7:4;
    uint32 RESERVER:24;
}Dt_GPIOPCTL_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPCTL_REG_Pins_S	        Pin;
}Dt_GPIOPCTL_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOADCCTL_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOADCCTL_REG_Pins_S	    Pin;
}Dt_GPIOADCCTL_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIODMACTL_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIODMACTL_REG_Pins_S	    Pin;
}Dt_GPIODMACTL_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPeriphID4_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPeriphID4_REG_Pins_S	    Pin;
}Dt_GPIOPeriphID4_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPeriphID5_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPeriphID5_REG_Pins_S	    Pin;
}Dt_GPIOPeriphID5_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPeriphID6_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPeriphID6_REG_Pins_S	    Pin;
}Dt_GPIOPeriphID6_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPeriphID7_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPeriphID7_REG_Pins_S	    Pin;
}Dt_GPIOPeriphID7_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPeriphID0_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPeriphID0_REG_Pins_S	    Pin;
}Dt_GPIOPeriphID0_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPeriphID1_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPeriphID1_REG_Pins_S	    Pin;
}Dt_GPIOPeriphID1_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPeriphID2_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPeriphID2_REG_Pins_S	    Pin;
}Dt_GPIOPeriphID2_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPeriphID3_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPeriphID3_REG_Pins_S	    Pin;
}Dt_GPIOPeriphID3_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPCellID0_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPCellID0_REG_Pins_S	    Pin;
}Dt_GPIOPCellID0_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPCellID1_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPCellID1_REG_Pins_S	    Pin;
}Dt_GPIOPCellID1_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPCellID2_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPCellID2_REG_Pins_S	    Pin;
}Dt_GPIOPCellID2_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 PIN0:1;
    uint32 PIN1:1;
    uint32 PIN2:1;
    uint32 PIN3:1;
    uint32 PIN4:1;
    uint32 PIN5:1;
    uint32 PIN6:1;
    uint32 PIN7:1;
    uint32 RESERVER:24;
}Dt_GPIOPCellID3_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPCellID3_REG_Pins_S	    Pin;
}Dt_GPIOPCellID3_REG_U;
/*****************************************************/

typedef struct {
    Dt_GPIODIR_REG_U 		GPIODIR       ; //400
    Dt_GPIOIS_REG_U 		GPIOIS        ; //404
    Dt_GPIOIBE_REG_U 		GPIOIBE       ; //408
    Dt_GPIOIEV_REG_U 		GPIOIEV       ; //40C
    Dt_GPIOIM_REG_U 		GPIOIM        ; //410
    Dt_GPIORIS_REG_U 		GPIORIS       ; //414
    Dt_GPIOMIS_REG_U 		GPIOMIS       ; //418
    Dt_GPIOICR_REG_U 		GPIOICR       ; //41C
    Dt_GPIOAFSEL_REG_U 		GPIOAFSEL     ; //420
}Dt_MGPIO_PORTx_CTRL1_MemMap_S;

typedef struct {
    Dt_GPIODR2R_REG_U 		GPIODR2R      ; //500
    Dt_GPIODR4R_REG_U 		GPIODR4R      ; //504
    Dt_GPIODR8R_REG_U 		GPIODR8R      ; //508
    Dt_GPIOODR_REG_U 		GPIOODR       ; //50C
    Dt_GPIOPUR_REG_U 		GPIOPUR       ; //510
    Dt_GPIOPDR_REG_U 		GPIOPDR       ; //514
    Dt_GPIOSLR_REG_U 		GPIOSLR       ; //518
    Dt_GPIODEN_REG_U 		GPIODEN       ; //51C
    Dt_GPIOLOCK_REG_U 		GPIOLOCK      ; //520
    Dt_GPIOCR_REG_U 		GPIOCR        ; //524
    Dt_GPIOAMSEL_REG_U 		GPIOAMSEL     ; //528
    Dt_GPIOPCTL_REG_U 		GPIOPCTL      ; //52C
    Dt_GPIOADCCTL_REG_U 	GPIOADCCTL    ; //530
    Dt_GPIODMACTL_REG_U 	GPIODMACTL    ; //534
}Dt_MGPIO_PORTx_CTRL2_MemMap_S;

typedef struct {
    Dt_GPIOPeriphID4_REG_U 	GPIOPeriphID4 ; //FD0
    Dt_GPIOPeriphID5_REG_U 	GPIOPeriphID5 ; //FD4
    Dt_GPIOPeriphID6_REG_U 	GPIOPeriphID6 ; //FD8
    Dt_GPIOPeriphID7_REG_U 	GPIOPeriphID7 ; //FDC
    Dt_GPIOPeriphID0_REG_U 	GPIOPeriphID0 ; //FE0
    Dt_GPIOPeriphID1_REG_U 	GPIOPeriphID1 ; //FE4
    Dt_GPIOPeriphID2_REG_U 	GPIOPeriphID2 ; //FE8
    Dt_GPIOPeriphID3_REG_U 	GPIOPeriphID3 ; //FEC
    Dt_GPIOPCellID0_REG_U  	GPIOPCellID0  ; //FF0
    Dt_GPIOPCellID1_REG_U 	GPIOPCellID1  ; //FF4
    Dt_GPIOPCellID2_REG_U 	GPIOPCellID2  ; //FF8
    Dt_GPIOPCellID3_REG_U 	GPIOPCellID3  ; //FFC
}Dt_MGPIO_PORTx_CTRL3_MemMap_S;

#define GPIO_PORTx_BUSx_BASE_ADDRESS                       0x40004000U
#define GPIO_PORTx_BUSx_PORT_DIFFERENCE                    0x00001000U
#define GPIO_PORTx_BUSx_BUS_DIFFERENCE                     0x00054000U

#define GPIO_PORTx_DATA_BASE_ADDRESS_OFFSET                0x00000000U
#define GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET               0x00000400U
#define GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET               0x00000500U
#define GPIO_PORTx_IDENTIFICATION_BASE_ADDRESS_OFFSET      0x00000FD0U

#define MGPIO_DATA_REG(BUS_NUM,PORT_NUM,PIN_ADD_OFFSET)  ( ( volatile Dt_MGPIO_PORTx_Data_REG_U*     ) ( GPIO_PORTx_BUSx_BASE_ADDRESS + GPIO_PORTx_DATA_BASE_ADDRESS_OFFSET  + PIN_ADD_OFFSET + (PORT_NUM * GPIO_PORTx_BUSx_PORT_DIFFERENCE) + (BUS_NUM * GPIO_PORTx_BUSx_BUS_DIFFERENCE) ) )
#define MGPIO_CTRL1_REG(BUS_NUM,PORT_NUM) ( ( volatile Dt_MGPIO_PORTx_CTRL1_MemMap_S* )  ( GPIO_PORTx_BUSx_BASE_ADDRESS + GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET + (PORT_NUM * GPIO_PORTx_BUSx_PORT_DIFFERENCE) + (BUS_NUM * GPIO_PORTx_BUSx_BUS_DIFFERENCE) ) )
#define MGPIO_CTRL2_REG(BUS_NUM,PORT_NUM) ( ( volatile Dt_MGPIO_PORTx_CTRL2_MemMap_S* )  ( GPIO_PORTx_BUSx_BASE_ADDRESS + GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET + (PORT_NUM * GPIO_PORTx_BUSx_PORT_DIFFERENCE) + (BUS_NUM * GPIO_PORTx_BUSx_BUS_DIFFERENCE) ) )
#define MGPIO_CTRL3_REG(BUS_NUM,PORT_NUM) ( ( volatile Dt_MGPIO_PORTx_CTRL3_MemMap_S* )  ( GPIO_PORTx_BUSx_BASE_ADDRESS + GPIO_PORTx_IDENTIFICATION_BASE_ADDRESS_OFFSET + (PORT_NUM * GPIO_PORTx_BUSx_PORT_DIFFERENCE) + (BUS_NUM * GPIO_PORTx_BUSx_BUS_DIFFERENCE) ) )


#endif /*_GPIO_PRIV_H_*/