#include<lpc21xx.h> 
int main()
{ 
  long int delay ;  
  //IO0DIR = 0x003c3c00; // Configure P0.10 to P0.13 //and P0.18 to P0.21 as Output 
  IO0DIR= 0x023c3c00 ;		//0011 1100	0011 1100 0000 0000      10-11	
	while(1) {
		IO0CLR = 0x02003c00 ; // CLEAR (0) 
		IO0SET = 0x003c0000 ; // SET (1)

		for (delay=0 ; delay<5000000 ; delay++) ; 
		IO0SET = 0x02003c00 ; // SET (1) 
		IO0CLR = 0x003c0000 ; // CLEAR (0)
		for (delay=0 ; delay<5000000 ; delay++) ; 
	}
} 
