#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

double getNumber(char stringIn []);
void getResult(double firstNumber, double secondNumber, double increment, int flag);


int main (void)
{
	int sin = 1;
	int cos = 2;
	double firstNumber = getNumber("first");	
	double secondNumber = getNumber("second");	
	double increment = getNumber("increment");
	 
    getResult(firstNumber, secondNumber, increment, sin);  
    printf ("\n");	
    getResult(firstNumber, secondNumber, increment, cos);
	
 return 0;
}

double getNumber(char stringIn [])
{
	double number;
	printf("Input your %s number:\n", stringIn);
    scanf("%lf", &number);
	return number;
}

void getResult(double firstNumber, double secondNumber, double increment, int flag)
{
	for(double i = firstNumber; i <= secondNumber; i+= increment){
   double radians = i;
   
   if(flag == 1)
   {
    printf("Argument: %f radians    ", radians);
    printf ("sin  : %.20f\n", sin(radians) );
   }
   
   if(flag == 2)
   {
    printf("Argument: %f radians    ", radians);
    printf("cos  : %.20f\n", cos (radians) );
   }
   
	}	
}

