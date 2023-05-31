#include <xc.h>
#include<stdlib.h>
#include<pic18f4550.h>

void main(void)
{
int x,y,div;
x=0x04;
y=0x05;
div=0x00;

mul=x/y;

TRISD=0;
PORTD=div;
return;
}
