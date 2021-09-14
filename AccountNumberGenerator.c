#include<stdio.h>
#include<time.h>
#include<string.h>

char  *accountNumberGeneration(int number){

   char prefixString[10];
   char middleString[20];
   char obtainedNumberString[50]; 
   int prefixNumber;
   int num;
   int obtainedNumber;
   
   
 if(number == 1){
		prefixNumber =  11; 
	}else if(number == 2){
		prefixNumber =  52; 
	}else if(number == 3){
		prefixNumber=  64; 
	}else if(number == 4){
		prefixNumber =  44; 
	}else if(number == 5){
		prefixNumber =  77; 
	}else if(number == 6){
		 prefixNumber =  66; 
	}else{
		
	}
	   
sprintf(prefixString, "%03d", prefixNumber);
sprintf(middleString, "%d",11075);
   
   strcat(prefixString,middleString);
    srand(time(0));
     num = rand()% 100 ;
    obtainedNumber = num * 999999;
		
    while(obtainedNumber <= 9999999){
     num = rand()%100;
      obtainedNumber = num * 999999;   	
	}
	
sprintf(obtainedNumberString, "%d",obtainedNumber);
   	 strcat(prefixString,obtainedNumberString);
   	    	 
   	return strdup(prefixString);
}

