#include <stdio.h>
#include <stdlib.h>
#include<PIC18F4550.h>

void main(void)
{
int i;
int source[5] = {0x0A,0x0B,0x0C,0x0D,0x0E};
int dest[5] = {0x01,0x02,0x03,0x04,0x05};
int temp[5] = {0x00,0x00,0x00,0x00,0x00};

for(i = 0; i < 5; i++)
{
temp[i] = dest[i];
dest[i] = source[i];

source[i] = temp[i];
}
TRISB = 0;
TRISD = 0;
for(i = 0; i < 5; i++)
{
PORTB = source[i];
PORTD = dest[i];
for(int n =0; n < 200; n++)
{
for(int j =0; j < 500; j++)
{
}
}
}
return ;
}
