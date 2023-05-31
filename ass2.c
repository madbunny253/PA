#include <xc.h>
#include<stdio.h>
#include<PIC18F4550.h>

void main(void) {
    
    int i,sum;
    int a[]={0x02,0x02,0x03,0x01};
    sum=0x00;
    
    for(i=0;i<4;i++)
    {
        sum=sum+a[i];
        
    }
    
    TRISD=0;
    PORTD=sum;
    
    return;
}
