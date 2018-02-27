#include<lpc21xx.h>
int main()
{	long int i ; 
	IO0DIR = 0x00003c00;
	while(1)
	{	IO0SET =  0x00000c00;	IO0CLR =  0x00003000;	
		for (i=0;i<3000000;i++);
		IO0CLR =  0x00000c00; 	IO0SET =  0x00003000; 
		for (i=0;i<3000000;i++);
	}
}
