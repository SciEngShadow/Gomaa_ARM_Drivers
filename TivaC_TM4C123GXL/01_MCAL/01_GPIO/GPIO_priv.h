#ifndef _GPIO_PRIV_H_
#define _GPIO_PRIV_H_

#include "../../00_LIB/00_STD_TYPES/std_types.h"

typedef enum{
    PORTA_PIN0 = 0U 	, 	PORTA_PIN1 = 8U 	, PORTA_PIN2 = 16U 		, PORTA_PIN3 = 24U ,
    PORTA_PIN4 = 32U 	, 	PORTA_PIN5 = 40U 	, PORTA_PIN6 = 48U 		, PORTA_PIN7 = 56U ,

    PORTB_PIN0 = 1U 	,	PORTB_PIN1 = 9U 	, PORTB_PIN2 = 17U 		, PORTB_PIN3 = 25U ,
    PORTB_PIN4 = 33U 	, 	PORTB_PIN5 = 41U 	, PORTB_PIN6 = 49U 		, PORTB_PIN7 = 57U ,

    PORTC_PIN0 = 2U 	, 	PORTC_PIN1 = 10U 	, PORTC_PIN2 = 18U 		, PORTC_PIN3 = 26U ,
    PORTC_PIN4 = 34U 	, 	PORTC_PIN5 = 42U 	, PORTC_PIN6 = 50U 		, PORTC_PIN7 = 58U ,

    PORTD_PIN0 = 3U 	, 	PORTD_PIN1 = 11U 	, PORTD_PIN2 = 19U 		, PORTD_PIN3 = 27U ,
    PORTD_PIN4 = 35U 	, 	PORTD_PIN5 = 43U 	, PORTD_PIN6 = 51U 		, PORTD_PIN7 = 59U ,

    PORTE_PIN0 = 4U 	, 	PORTE_PIN1 = 12U 	, PORTE_PIN2 = 20U 		, PORTE_PIN3 = 28U ,
    PORTE_PIN4 = 36U 	, 	PORTE_PIN5 = 44U 	, PORTE_PIN6 = 52U 		, PORTE_PIN7 = 60U ,

    PORTF_PIN0 = 5U 	, 	PORTF_PIN1 = 13U 	, PORTF_PIN2 = 21U 		, PORTF_PIN3 = 29U ,
    PORTF_PIN4 = 37U 	, 	PORTF_PIN5 = 45U 	, PORTF_PIN6 = 53U 		, PORTF_PIN7 = 61U
}Dt_GPIOPortPinCfg_E;

/*****************************************************/
typedef struct{
    uint8 PortNum                       :3; /*000 -> 101*/
    uint8 PinNum                        :3; /*000 -> 111*/
    uint8 Reserved                      :2;
}Dt_GPIOPortPinSet_Bits_S;

typedef union{
    uint8 						        All;
	Dt_GPIOPortPinSet_Bits_S 	        Bits;
}Dt_GPIOPortPinSet_U;
/*****************************************************/

/*****************************************************/
typedef struct{
    uint8 PinMode                       :2;
    uint8 PinLeveValue                  :1;
    uint8 PinDirection                  :4;
    uint8 PinInternalAttach             :1;
    uint8 PinOutputCurrent              :1;
}Dt_GPIOPinInitConfig_Bits_S;

typedef union{
    uint8 						        All;
	Dt_GPIOPinInitConfig_Bits_S 	    Bits;
}Dt_GPIOPinInitConfig_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 DATA      :8    ;
    uint32 RESERVER_2:16   ;
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
}Dt_GPIOPCellID3_REG_Pins_S;

typedef union {
    uint32 						    All;
	Dt_GPIOPCellID3_REG_Pins_S	    Pin;
}Dt_GPIOPCellID3_REG_U;
/*****************************************************/


#define GPIO_PORTA_AHB_BASE_ADDRESS     0x40058000
#define GPIO_PORTB_AHB_BASE_ADDRESS     0x40059000
#define GPIO_PORTC_AHB_BASE_ADDRESS     0x4005A000
#define GPIO_PORTD_AHB_BASE_ADDRESS     0x4005B000
#define GPIO_PORTE_AHB_BASE_ADDRESS     0x4005C000
#define GPIO_PORTF_AHB_BASE_ADDRESS     0x4005D000

#define GPIO_PORTA_APB_BASE_ADDRESS     0x40005000
#define GPIO_PORTB_APB_BASE_ADDRESS     0x40006000
#define GPIO_PORTC_APB_BASE_ADDRESS     0x40007000
#define GPIO_PORTD_APB_BASE_ADDRESS     0x40008000
#define GPIO_PORTE_APB_BASE_ADDRESS     0x40024000
#define GPIO_PORTF_APB_BASE_ADDRESS     0x40025000

#define GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET              0x404
#define GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET              0x500
#define GPIO_PORTx_IDENTIFICATION_BASE_ADDRESS_OFFSET     0xFD0


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


#define MGPIO_AHB_PORTA_DATA_REG ( ( volatile Dt_MGPIO_PORTx_Data_REG_U* )  ( GPIO_PORTA_AHB_BASE_ADDRESS ) )
#define MGPIO_AHB_PORTB_DATA_REG ( ( volatile Dt_MGPIO_PORTx_Data_REG_U* )  ( GPIO_PORTA_AHB_BASE_ADDRESS ) )
#define MGPIO_AHB_PORTC_DATA_REG ( ( volatile Dt_MGPIO_PORTx_Data_REG_U* )  ( GPIO_PORTA_AHB_BASE_ADDRESS ) )
#define MGPIO_AHB_PORTD_DATA_REG ( ( volatile Dt_MGPIO_PORTx_Data_REG_U* )  ( GPIO_PORTA_AHB_BASE_ADDRESS ) )
#define MGPIO_AHB_PORTE_DATA_REG ( ( volatile Dt_MGPIO_PORTx_Data_REG_U* )  ( GPIO_PORTA_AHB_BASE_ADDRESS ) )
#define MGPIO_AHB_PORTF_DATA_REG ( ( volatile Dt_MGPIO_PORTx_Data_REG_U* )  ( GPIO_PORTA_AHB_BASE_ADDRESS ) )

#define MGPIO_APB_PORTA_DATA_REG ( ( volatile Dt_MGPIO_PORTx_Data_REG_U* )  ( GPIO_PORTA_APB_BASE_ADDRESS ) )
#define MGPIO_APB_PORTB_DATA_REG ( ( volatile Dt_MGPIO_PORTx_Data_REG_U* )  ( GPIO_PORTA_APB_BASE_ADDRESS ) )
#define MGPIO_APB_PORTC_DATA_REG ( ( volatile Dt_MGPIO_PORTx_Data_REG_U* )  ( GPIO_PORTA_APB_BASE_ADDRESS ) )
#define MGPIO_APB_PORTD_DATA_REG ( ( volatile Dt_MGPIO_PORTx_Data_REG_U* )  ( GPIO_PORTA_APB_BASE_ADDRESS ) )
#define MGPIO_APB_PORTE_DATA_REG ( ( volatile Dt_MGPIO_PORTx_Data_REG_U* )  ( GPIO_PORTA_APB_BASE_ADDRESS ) )
#define MGPIO_APB_PORTF_DATA_REG ( ( volatile Dt_MGPIO_PORTx_Data_REG_U* )  ( GPIO_PORTA_APB_BASE_ADDRESS ) )

#define MGPIO_AHB_PORTA_CTRL1_REG ( ( volatile Dt_MGPIO_PORTx_CTRL1_MemMap_S* )  ( GPIO_PORTA_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTB_CTRL1_REG ( ( volatile Dt_MGPIO_PORTx_CTRL1_MemMap_S* )  ( GPIO_PORTB_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTC_CTRL1_REG ( ( volatile Dt_MGPIO_PORTx_CTRL1_MemMap_S* )  ( GPIO_PORTC_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTD_CTRL1_REG ( ( volatile Dt_MGPIO_PORTx_CTRL1_MemMap_S* )  ( GPIO_PORTD_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTE_CTRL1_REG ( ( volatile Dt_MGPIO_PORTx_CTRL1_MemMap_S* )  ( GPIO_PORTE_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTF_CTRL1_REG ( ( volatile Dt_MGPIO_PORTx_CTRL1_MemMap_S* )  ( GPIO_PORTF_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET ) )

#define MGPIO_APB_PORTA_CTRL1_REG ( ( volatile Dt_MGPIO_PORTx_CTRL1_MemMap_S* )  ( GPIO_PORTA_APB_BASE_ADDRESS + GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTB_CTRL1_REG ( ( volatile Dt_MGPIO_PORTx_CTRL1_MemMap_S* )  ( GPIO_PORTB_APB_BASE_ADDRESS + GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTC_CTRL1_REG ( ( volatile Dt_MGPIO_PORTx_CTRL1_MemMap_S* )  ( GPIO_PORTC_APB_BASE_ADDRESS + GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTD_CTRL1_REG ( ( volatile Dt_MGPIO_PORTx_CTRL1_MemMap_S* )  ( GPIO_PORTD_APB_BASE_ADDRESS + GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTE_CTRL1_REG ( ( volatile Dt_MGPIO_PORTx_CTRL1_MemMap_S* )  ( GPIO_PORTE_APB_BASE_ADDRESS + GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTF_CTRL1_REG ( ( volatile Dt_MGPIO_PORTx_CTRL1_MemMap_S* )  ( GPIO_PORTF_APB_BASE_ADDRESS + GPIO_PORTx_CTRL1_BASE_ADDRESS_OFFSET ) )

#define MGPIO_AHB_PORTA_CTRL2_REG ( ( volatile Dt_MGPIO_PORTx_CTRL2_MemMap_S* )  ( GPIO_PORTA_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTB_CTRL2_REG ( ( volatile Dt_MGPIO_PORTx_CTRL2_MemMap_S* )  ( GPIO_PORTB_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTC_CTRL2_REG ( ( volatile Dt_MGPIO_PORTx_CTRL2_MemMap_S* )  ( GPIO_PORTC_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTD_CTRL2_REG ( ( volatile Dt_MGPIO_PORTx_CTRL2_MemMap_S* )  ( GPIO_PORTD_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTE_CTRL2_REG ( ( volatile Dt_MGPIO_PORTx_CTRL2_MemMap_S* )  ( GPIO_PORTE_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTF_CTRL2_REG ( ( volatile Dt_MGPIO_PORTx_CTRL2_MemMap_S* )  ( GPIO_PORTF_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET ) )

#define MGPIO_APB_PORTA_CTRL2_REG ( ( volatile Dt_MGPIO_PORTx_CTRL2_MemMap_S* )  ( GPIO_PORTA_APB_BASE_ADDRESS + GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTB_CTRL2_REG ( ( volatile Dt_MGPIO_PORTx_CTRL2_MemMap_S* )  ( GPIO_PORTB_APB_BASE_ADDRESS + GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTC_CTRL2_REG ( ( volatile Dt_MGPIO_PORTx_CTRL2_MemMap_S* )  ( GPIO_PORTC_APB_BASE_ADDRESS + GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTD_CTRL2_REG ( ( volatile Dt_MGPIO_PORTx_CTRL2_MemMap_S* )  ( GPIO_PORTD_APB_BASE_ADDRESS + GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTE_CTRL2_REG ( ( volatile Dt_MGPIO_PORTx_CTRL2_MemMap_S* )  ( GPIO_PORTE_APB_BASE_ADDRESS + GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTF_CTRL2_REG ( ( volatile Dt_MGPIO_PORTx_CTRL2_MemMap_S* )  ( GPIO_PORTF_APB_BASE_ADDRESS + GPIO_PORTx_CTRL2_BASE_ADDRESS_OFFSET ) )

#define MGPIO_AHB_PORTA_CTRL3_REG ( ( volatile Dt_MGPIO_PORTx_CTRL3_MemMap_S* )  ( GPIO_PORTA_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL3_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTB_CTRL3_REG ( ( volatile Dt_MGPIO_PORTx_CTRL3_MemMap_S* )  ( GPIO_PORTB_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL3_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTC_CTRL3_REG ( ( volatile Dt_MGPIO_PORTx_CTRL3_MemMap_S* )  ( GPIO_PORTC_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL3_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTD_CTRL3_REG ( ( volatile Dt_MGPIO_PORTx_CTRL3_MemMap_S* )  ( GPIO_PORTD_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL3_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTE_CTRL3_REG ( ( volatile Dt_MGPIO_PORTx_CTRL3_MemMap_S* )  ( GPIO_PORTE_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL3_BASE_ADDRESS_OFFSET ) )
#define MGPIO_AHB_PORTF_CTRL3_REG ( ( volatile Dt_MGPIO_PORTx_CTRL3_MemMap_S* )  ( GPIO_PORTF_AHB_BASE_ADDRESS + GPIO_PORTx_CTRL3_BASE_ADDRESS_OFFSET ) )

#define MGPIO_APB_PORTA_CTRL3_REG ( ( volatile Dt_MGPIO_PORTx_CTRL3_MemMap_S* )  ( GPIO_PORTA_APB_BASE_ADDRESS + GPIO_PORTx_CTRL3_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTB_CTRL3_REG ( ( volatile Dt_MGPIO_PORTx_CTRL3_MemMap_S* )  ( GPIO_PORTB_APB_BASE_ADDRESS + GPIO_PORTx_CTRL3_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTC_CTRL3_REG ( ( volatile Dt_MGPIO_PORTx_CTRL3_MemMap_S* )  ( GPIO_PORTC_APB_BASE_ADDRESS + GPIO_PORTx_CTRL3_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTD_CTRL3_REG ( ( volatile Dt_MGPIO_PORTx_CTRL3_MemMap_S* )  ( GPIO_PORTD_APB_BASE_ADDRESS + GPIO_PORTx_CTRL3_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTE_CTRL3_REG ( ( volatile Dt_MGPIO_PORTx_CTRL3_MemMap_S* )  ( GPIO_PORTE_APB_BASE_ADDRESS + GPIO_PORTx_CTRL3_BASE_ADDRESS_OFFSET ) )
#define MGPIO_APB_PORTF_CTRL3_REG ( ( volatile Dt_MGPIO_PORTx_CTRL3_MemMap_S* )  ( GPIO_PORTF_APB_BASE_ADDRESS + GPIO_PORTx_CTRL3_BASE_ADDRESS_OFFSET ) )


#endif /*_GPIO_PRIV_H_*/