#ifndef _BIT_MATH_H_
#define _BIT_MATH_H_

#define SET_BIT(Reg,Bit) Reg|=(1<<Bit);
#define CLR_BIT(Reg,Bit) Reg&=~(1<<Bit);
#define TOG_BIT(Reg,Bit) Reg^=(1<<Bit);
#define GET_BIT(Reg,Bit) 1&(Reg>>Bit);

#endif /*_BIT_MATH_H_*/