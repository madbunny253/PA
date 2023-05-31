#include <xc.h>
#include<stdlib.h>
#include<pic18f4550.h>
void main(void)
{
int i,j,temp;
int array[] = {0x04,0x01,0x02,0x05,0x03};
for(i = 0 ; i < 5 ; i++ )
{
for(j = i + 1 ; j < 5 ; j++)
{
if(array[i] > array[j])
{
temp = array[i];
array[i] = array[j];
array[j] = temp;
}
}
}
TRISD=0;
for(i=0; i <= 5; i++)
{
PORTD = array[i];

for(int n = 0; n < 200; n++)
{
for(int j = 0; j < 500; j++)
{
}
}
}
return;
}
