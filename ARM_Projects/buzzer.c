#include<lpc21xx.h>
// buzzer is connect on P0.25
int main()
{	long int i ; 
	IO0DIR = 0x00003c00 | (1<<25);
	while(1)
	{	IO0CLR =  (1<<10) ;//Led1
		IO0CLR =  (1<<25) ; // buzzer
		for (i=0;i<3000000;i++);
		IO0SET =  (1<<10) ;//Led1
		IO0SET =  (1<<25) ; // buzzer
		for (i=0;i<3000000;i++);

		IO0CLR =  (1<<11) ;//Led1
		IO0CLR =  (1<<25) ; // buzzer
		for (i=0;i<3000000;i++);
		IO0SET =  (1<<11) ;//Led1
		IO0SET =  (1<<25) ; // buzzer
		for (i=0;i<3000000;i++);
	}
}
/*
IO0SET =  0x00000c00;	IO0CLR =  0x00003000;
		IO0CLR =  0x02000000;
		for (i=0;i<3000000;i++);
		IO0CLR =  0x00000c00; 	IO0SET =  0x00003000; 
		IO0SET =  0x02000000;	
		for (i=0;i<3000000;i++);*/

