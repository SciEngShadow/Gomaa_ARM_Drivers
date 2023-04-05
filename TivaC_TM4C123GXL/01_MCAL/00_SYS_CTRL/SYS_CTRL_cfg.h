#ifndef _SYS_CTRL_CFG_H
#define _SYS_CTRL_CFG_H

#include "SYS_CTRL_priv.h"
#include "SYS_CTRL_int.h"

#define SYS_CLK_CFG                 SYS_CLK_PIOSC_DIV1

#define CLK_EN_CTRL_PORTA           ENABLE_AHB_GPIO_PORTA
#define CLK_EN_CTRL_PORTB           DISABLE_AHB_GPIO_PORTB
#define CLK_EN_CTRL_PORTC           DISABLE_AHB_GPIO_PORTC
#define CLK_EN_CTRL_PORTD           DISABLE_AHB_GPIO_PORTD
#define CLK_EN_CTRL_PORTE           DISABLE_AHB_GPIO_PORTE
#define CLK_EN_CTRL_PORTF           ENABLE_AHB_GPIO_PORTF


#endif /*_SYS_CTRL_CFG_H*/