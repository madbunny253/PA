/*
 * File:   buzzer.c
 * Author: ADITYA
 *
 * Created on 31 May, 2023, 5:33 PM
 */


#include <xc.h>
#include <pic18f4550.h>
#define buzzer LATAbits.LATA5

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

void timer1ISR()
{
    if(TMR1IF==1)
    {
        TMR1L=0x20;
        TMR1H=0xD1;
        
        buzzer=~buzzer;
        delay();
        
        TMR1IF=0;
    }
}

void main(void) 
{
    TRISAbits.TRISA5=0;
    T1CON=0x80;
    
    GIE=1; 
    PEIE=1;
    TMR1IE=1;
    TMR1IF=0;
    
    TMR1L=0x20;
    TMR1H=0xD1;
    TMR1ON=1;
    
    while(1);
}
