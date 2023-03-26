#ifndef _SYS_CTRL_PRIV_H_
#define _SYS_CTRL_PRIV_H_

#include "../../00_LIB/00_STD_TYPES/std_types.h"

/****************************************************************/
/*Clck Select Cfg*/
typedef enum{	
	SYS_CLK_MOSC_DIV1  = 4U   	, SYS_CLK_MOSC_DIV2  = 12U  	, SYS_CLK_MOSC_DIV3  = 20U  	, SYS_CLK_MOSC_DIV4  = 28U  	,
	SYS_CLK_MOSC_DIV5  = 36U  	, SYS_CLK_MOSC_DIV6  = 44U  	, SYS_CLK_MOSC_DIV7  = 52U  	, SYS_CLK_MOSC_DIV8  = 60U  	, 
	SYS_CLK_MOSC_DIV9  = 68U  	, SYS_CLK_MOSC_DIV10 = 76U  	, SYS_CLK_MOSC_DIV11 = 84U  	, SYS_CLK_MOSC_DIV12 = 92U  	,
	SYS_CLK_MOSC_DIV13 = 100U 	, SYS_CLK_MOSC_DIV14 = 108U 	, SYS_CLK_MOSC_DIV15 = 116U 	, SYS_CLK_MOSC_DIV16 = 124U 	,
	
	SYS_CLK_PIOSC_DIV1  = 5U	, SYS_CLK_PIOSC_DIV2  = 13U		, SYS_CLK_PIOSC_DIV3  = 21U		, SYS_CLK_PIOSC_DIV4  = 29U		, 
	SYS_CLK_PIOSC_DIV5  = 37U	, SYS_CLK_PIOSC_DIV6  = 45U		, SYS_CLK_PIOSC_DIV7  = 53U		, SYS_CLK_PIOSC_DIV8  = 61U		,
	SYS_CLK_PIOSC_DIV9  = 69U	, SYS_CLK_PIOSC_DIV10 = 77U		, SYS_CLK_PIOSC_DIV11 = 85U		, SYS_CLK_PIOSC_DIV12 = 93U		,
	SYS_CLK_PIOSC_DIV13 = 101U	, SYS_CLK_PIOSC_DIV14 = 109U	, SYS_CLK_PIOSC_DIV15 = 117U	, SYS_CLK_PIOSC_DIV16 = 125U	,
	
	SYS_CLK_PIOSCQ_DIV1  = 6U	, SYS_CLK_PIOSCQ_DIV2  = 14U	, SYS_CLK_PIOSCQ_DIV3  = 22U	, SYS_CLK_PIOSCQ_DIV4  = 30U	, 
	SYS_CLK_PIOSCQ_DIV5  = 38U	, SYS_CLK_PIOSCQ_DIV6  = 46U	, SYS_CLK_PIOSCQ_DIV7  = 54U	, SYS_CLK_PIOSCQ_DIV8  = 62U	,
	SYS_CLK_PIOSCQ_DIV9  = 70U	, SYS_CLK_PIOSCQ_DIV10 = 78U	, SYS_CLK_PIOSCQ_DIV11 = 86U	, SYS_CLK_PIOSCQ_DIV12 = 94U	, 
	SYS_CLK_PIOSCQ_DIV13 = 102U	, SYS_CLK_PIOSCQ_DIV14 = 110U	, SYS_CLK_PIOSCQ_DIV15 = 118U	, SYS_CLK_PIOSCQ_DIV16 = 126U	,
	
	SYS_CLK_LFIOSC_DIV1  = 7U	, SYS_CLK_LFIOSC_DIV2  = 15U	, SYS_CLK_LFIOSC_DIV3  = 23U	, SYS_CLK_LFIOSC_DIV4  = 31U	,
	SYS_CLK_LFIOSC_DIV5  = 39U	, SYS_CLK_LFIOSC_DIV6  = 47U	, SYS_CLK_LFIOSC_DIV7  = 55U	, SYS_CLK_LFIOSC_DIV8  = 63U	,
	SYS_CLK_LFIOSC_DIV9  = 71U	, SYS_CLK_LFIOSC_DIV10 = 79U	, SYS_CLK_LFIOSC_DIV11 = 87U	, SYS_CLK_LFIOSC_DIV12 = 95U	,
	SYS_CLK_LFIOSC_DIV13 = 103U	, SYS_CLK_LFIOSC_DIV14 = 111U	, SYS_CLK_LFIOSC_DIV15 = 119U	, SYS_CLK_LFIOSC_DIV16 = 127U	
}Dt_SysClckSelectCfg_E;

/*GPIO Enable Ctrl Cfg*/
typedef enum{
	ENABLE_AHB_GPIO_PORTA = 24U		, ENABLE_AHB_GPIO_PORTB = 25U	 , ENABLE_AHB_GPIO_PORTC = 26U		,
	ENABLE_AHB_GPIO_PORTD = 27U		, ENABLE_AHB_GPIO_PORTE = 28U	 , ENABLE_AHB_GPIO_PORTF = 29U		,
	
	ENABLE_APB_GPIO_PORTA = 16U		, ENABLE_APB_GPIO_PORTB = 17U	 , ENABLE_APB_GPIO_PORTC = 18U		, 
	ENABLE_APB_GPIO_PORTD = 19U		, ENABLE_APB_GPIO_PORTE = 20U	 , ENABLE_APB_GPIO_PORTF = 21U		,
	
	DISABLE_AHB_GPIO_PORTA = 8U		, DISABLE_AHB_GPIO_PORTB = 9U	 , DISABLE_AHB_GPIO_PORTC = 10U		,	
	DISABLE_AHB_GPIO_PORTD = 11U	, DISABLE_AHB_GPIO_PORTE = 12U	 , DISABLE_AHB_GPIO_PORTF = 13U		,	
	
	DISABLE_APB_GPIO_PORTA = 0U 	, DISABLE_APB_GPIO_PORTB = 1U 	 , DISABLE_APB_GPIO_PORTC = 2U 		,
	DISABLE_APB_GPIO_PORTD = 3U 	, DISABLE_APB_GPIO_PORTE = 4U 	 , DISABLE_APB_GPIO_PORTF = 5U 	
}Dt_GPIOClckEnableCfg_E;
/****************************************************************/

/***************************** RCC ******************************/
#define SYS_CTRL_BASE_ADDRESS           0x400FE000U
#define RCG_PR_CTRL_REG_BASE_ADDRESS    SYS_CTRL_BASE_ADDRESS+0x600U
#define RCG_CTRL_REG_BASE_ADDRESS       SYS_CTRL_BASE_ADDRESS+0x100U
#define RCC_REG_BASE_ADDRESS            SYS_CTRL_BASE_ADDRESS+0x060U
#define RCC2_REG_BASE_ADDRESS           SYS_CTRL_BASE_ADDRESS+0x070U
#define GPIOHBCTL_REG_BASE_ADDRESS      SYS_CTRL_BASE_ADDRESS+0x06CU

#define SYSCTL_ALTCLK_PIOSC 0x3U

typedef enum{
    PORTA_VAL    ,
    PORTB_VAL    ,
    PORTC_VAL    ,
    PORTD_VAL    ,
    PORTE_VAL    ,
    PORTF_VAL 
}Dt_PORT_VAL_E;

/*****************************************************/
typedef struct{
    uint8 ClkSlct_OSCSRC       :2;
    uint8 Pll_EnCtrl_BYPASS    :1;
    uint8 Prescaler_SYSDIV     :4;
    uint8 Reserved             :1;
}Dt_ClkInitConfig_Bits_S;

typedef union{
    uint8 						All;
	Dt_ClkInitConfig_Bits_S 	Bits;
}Dt_ClkInitConfig_U;
/*****************************************************/

/*****************************************************/
typedef struct{
    uint8 PortSlct             :3;
    uint8 BusSlct              :1;
    uint8 ClckEnCtrl           :1;
    uint8 Reserved             :3;
}Dt_GPIOClkEnable_Bits_S;

typedef union{
    uint8 						All;
	Dt_GPIOClkEnable_Bits_S 	Bits;
}Dt_GPIOClkEnable_U;
/*****************************************************/

/*****************************************************/
typedef struct{
    uint32 GPIO_PORTA:1   ;
    uint32 GPIO_PORTB:1   ;
    uint32 GPIO_PORTC:1   ;
    uint32 GPIO_PORTD:1   ;
    uint32 GPIO_PORTE:1   ;
    uint32 GPIO_PORTF:1   ;
    uint32 RESERVER_1:26  ;
}Dt_RCGCGPIO_REG_Pins_S;

typedef union{
    uint32 						All;
	Dt_RCGCGPIO_REG_Pins_S		Pin;
}Dt_RCGCGPIO_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 RESERVER_1:3   ;
    uint32 WDT0      :1   ;
    uint32 RESERVER_2:2   ;
    uint32 HIB       :1   ;
    uint32 RESERVER_3:1   ;
    uint32 MAXADC0SPD:2   ;
    uint32 MAXADC1SPD:2   ;
    uint32 RESERVER_4:4   ;
    uint32 ADC0      :1   ;
    uint32 ADC1      :1   ;
    uint32 RESERVER_5:2   ;
    uint32 PWM0      :1   ;
    uint32 RESERVER_6:3   ;
    uint32 CAN0      :1   ;
    uint32 CAN1      :1   ;
    uint32 RESERVER_7:2   ;
    uint32 WDT1      :1   ;
    uint32 RESERVER_8:3   ;
}Dt_RCGC0_REG_Pins_S;

typedef union {
    uint32 						All;
	Dt_RCGC0_REG_Pins_S			Pin;
}Dt_RCGC0_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 UART0      :1   ;
    uint32 UART1      :1   ;
    uint32 UART2      :1   ;
    uint32 RESERVER_1 :1   ;
    uint32 SSI0       :1   ;
    uint32 SSI1       :1   ;
    uint32 RESERVER_2 :2   ;
    uint32 QEI0       :1   ;
    uint32 QEI1       :1   ;
    uint32 RESERVER_3 :2   ;
    uint32 I2C0       :1   ;
    uint32 RESERVER_4 :1   ;
    uint32 I2C1       :1   ;
    uint32 RESERVER_5 :1   ;
    uint32 TIMER0     :1   ;
    uint32 TIMER1     :1   ;
    uint32 TIMER2     :1   ;
    uint32 TIMER3     :1   ;
    uint32 RESERVER_6 :4   ;
    uint32 COMP0      :1   ;
    uint32 COMP1      :1   ;
    uint32 RESERVER_7 :6   ;
}Dt_RCGC1_REG_Pins_S;

typedef union {
    uint32 						All;
	Dt_RCGC1_REG_Pins_S			Pin;
}Dt_RCGC1_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 GPIOA      :1   ;
    uint32 GPIOB      :1   ;
    uint32 GPIOC      :1   ;
    uint32 GPIOD      :1   ;
    uint32 GPIOE      :1   ;
    uint32 GPIOF      :1   ;
    uint32 RESERVER_1 :7   ;
    uint32 UDMA       :1   ;
    uint32 RESERVER_2 :2   ;
    uint32 USB0       :1   ;
    uint32 RESERVER_3 :15  ;
}Dt_RCGC2_REG_Pins_S;

typedef union {
    uint32 						All;
	Dt_RCGC2_REG_Pins_S			Pin;
}Dt_RCGC2_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 MOSCDIS      :1   ;
    uint32 RESERVER_1   :3   ;
    uint32 OSCSRC       :2   ;
    uint32 XTAL         :5   ;
    uint32 BYPASS       :1   ;
    uint32 RESERVER_2   :1   ;
    uint32 PWRDN        :1   ;
    uint32 RESERVER_3   :3   ;
    uint32 PWMDIV       :3   ;
    uint32 USEPWMDIV    :1   ;
    uint32 RESERVER_4   :1   ;
    uint32 USESYSDIV    :1   ;
    uint32 SYSDIV       :4   ;
    uint32 ACG          :1   ;
    uint32 RESERVER_5   :4   ;
}Dt_RCC_REG_Pins_S;

typedef union {
    uint32 						All;
	Dt_RCC_REG_Pins_S			Pin;
}Dt_RCC_REG_U;
/*****************************************************/

/*****************************************************/
typedef struct {
    uint32 RESERVER_1   :4   ;
    uint32 OSCSRC2      :3   ;
    uint32 RESERVER_2   :4   ;
    uint32 BYPASS2      :1   ;
    uint32 RESERVER_3   :1   ;
    uint32 PWRDN2       :1   ;
    uint32 USBPWRDN     :1   ;
    uint32 RESERVER_4   :7   ;
    uint32 SYSDIV2LSB   :1   ;
    uint32 SYSDIV2      :6   ;
    uint32 RESERVER_5   :1   ;
    uint32 DIV400       :1   ;
    uint32 USERCC2      :1   ;
}Dt_RCC2_REG_Pins_S;

typedef union {
    uint32 						All;
	Dt_RCC2_REG_Pins_S			Pin;
}Dt_RCC2_REG_U;
/*****************************************************/


/*****************************************************/
typedef struct {
    uint32 PORTA        :1   ;
    uint32 PORTB        :1   ;
    uint32 PORTC        :1   ;
    uint32 PORTD        :1   ;
    uint32 PORTE        :1   ;
    uint32 PORTF        :1   ;
    uint32 RESERVER_1   :26  ;
}Dt_GPIOHBCTL_REG_Pins_S;

typedef union {
    uint32 						All;
	Dt_GPIOHBCTL_REG_Pins_S		Pin;
}Dt_GPIOHBCTL_REG_U;
/*****************************************************/

typedef struct {
    uint32 RCGCWD_REG       ; //0x600
    uint32 RCGCTIMER_REG    ; //0x604
    Dt_RCGCGPIO_REG_U RCGCGPIO_REG     ; //0x608
    uint32 RCGCDMA_REG      ; //0x60C
    uint32 RESERVED_0_REG   ; //0x610
    uint32 RCGCHIB_REG      ; //0x614
    uint32 RCGCUART_REG     ; //0x618
    uint32 RCGCSSI_REG      ; //0x61C
    uint32 RCGCI2C_REG      ; //0x620
    uint32 RESERVED_1_REG   ; //0x624
    uint32 RCGCUSB_REG      ; //0x628
    uint32 RESERVED_2_REG   ; //0x62C
    uint32 RESERVED_3_REG   ; //0x630
    uint32 RCGCCAN_REG      ; //0x634
    uint32 RCGCADC_REG      ; //0x638
    uint32 RCGCACMP_REG     ; //0x63C
    uint32 RCGCPWM_REG      ; //0x640
    uint32 RCGCQEI_REG      ; //0x644
    uint32 RESERVED_4_REG   ; //0x648
    uint32 RESERVED_5_REG   ; //0x64C
    uint32 RESERVED_6_REG   ; //0x650
    uint32 RESERVED_7_REG   ; //0x654
    uint32 RCGCEEPROM_REG   ; //0x658
    uint32 RESERVED_8_REG   ; //0x65C
    uint32 RESERVED_9_REG   ; //0x660
    uint32 RESERVED_10_REG  ; //0x664
    uint32 RESERVED_11_REG  ; //0x668
    uint32 RESERVED_12_REG  ; //0x66C
    uint32 RESERVED_13_REG  ; //0x670
    uint32 RESERVED_14_REG  ; //0x674
    uint32 RESERVED_15_REG  ; //0x678
    uint32 RESERVED_16_REG  ; //0x67C
    uint32 RESERVED_17_REG  ; //0x680
    uint32 RESERVED_18_REG  ; //0x684
    uint32 RESERVED_19_REG  ; //0x688
    uint32 RCGCWTIMER_REG   ; //0x68C
}Dt_MRCG_PrephralCtrl_MemMap_S;

typedef struct {
    Dt_RCGC0_REG_U RCGC0    ; //0x100
    Dt_RCGC1_REG_U RCGC1    ; //0x104
    Dt_RCGC2_REG_U RCGC2    ; //0x108
}Dt_MRCG_Ctrl_MemMap_S;

/***************************** RCC ******************************/
#define MRCG_PrephralCtrl ( (volatile Dt_MRCG_PrephralCtrl_MemMap_S*   )  (RCG_PR_CTRL_REG_BASE_ADDRESS   ) )
#define MRCG_Ctrl         ( (volatile Dt_MRCG_Ctrl_MemMap_S*           )  (RCG_CTRL_REG_BASE_ADDRESS      ) )
#define MRCC              ( (volatile Dt_RCC_REG_U*                    )  (RCC_REG_BASE_ADDRESS           ) )
#define MRCC2             ( (volatile Dt_RCC2_REG_U*                   )  (RCC2_REG_BASE_ADDRESS          ) )
#define MGPIOHBCTL        ( (volatile Dt_GPIOHBCTL_REG_U*              )  (GPIOHBCTL_REG_BASE_ADDRESS     ) )

#endif /*_SYS_CTRL_PRIV_H_*/