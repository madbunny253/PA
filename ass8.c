/*
 * File:   timercounter.c
 * Author: ADITYA
 *
 * Created on 31 May, 2023, 3:24 PM
 */


#include <xc.h>
#include <pic18f4550.h>
#include <stdlib.h>

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
    TRISB=0x00;
    TRISD=0x00;
    T0CON=0x48;
    TMR0L=0x00;
    
    int count;
    
    while(1)
    {
        TMR0ON=1;
        delay();
        while(TMR0IF==0);
        
        PORTD=0xFF;
        count++;
        delay();
        
        TMR0ON=0;
        TMR0IF=0;
        
        PORTD=0x00;
        PORTB=count;
    }
}
