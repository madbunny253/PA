#include <xc.h>
#include <pic18f4550.h>
#include <stdlib.h>
void todelay(void)
{
    T0CON=0x08;
    TMR0H=0x35;
    TMR0L=0x00;
      TMR0ON=1;
    while(TMR0IF==0);
    TMR0ON=0;
    TMR0IF=0;
}
void main(void) {
TRISD=0;
while(1){
PORTD=0x55;
todelay();

PORTD=0xAA;
todelay();
}
}


#include<pic18f4550.h>
#include<xc.h>

void delay()
{
    int i,j;
    
    for(i=0;i<200;i++)
    {
        for(j=0;j<500;j++)
        {
            
        }
    }
}

void main(void)
{
    TRISD=0x00;
    
    while(1)
    {
        PORTD=0x55;
        delay();
        PORTD=0xAA;
        delay();
    }
    
    return;
}
