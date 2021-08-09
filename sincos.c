#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

double getNumber(char stringIn []);
void getSin(double firstNumber, double secondNumber, double increment);
void getCos(double firstNumber, double secondNumber, double increment);
void printSin(double radians);
void printCos(double radians);

int main (void)
{
	//int flag = 0;
	double firstNumber = getNumber("first");	
	double secondNumber = getNumber("second");	
	double increment = getNumber("increment");
	 
    getSin(firstNumber, secondNumber, increment);  	
    getCos(firstNumber, secondNumber, increment);

 return 0;
}

double getNumber(char stringIn [])
{
	double number;
	printf("Input your %s number:\n", stringIn);
    scanf("%lf", &number);
	return number;
}

void getResult(double firstNumber, double secondNumber, double increment)
{
	for(double i = firstNumber; i <= secondNumber; i+= increment){
   double radians = i;
   
	printSin(radians);
	}
}

void getCos(double firstNumber, double secondNumber, double increment)
{
	for(double i = firstNumber; i <= secondNumber; i+= increment){
   double radians = i;   
	printCos(radians);
	}
}

void printSin(double radians)
{
	printf("Argument: %f radians ", radians);
    printf ("sin  : %.20f \n\n", sin(radians) );
}

void printCos(double radians)
{
	printf ("\n");
	printf("Argument: %f radians ", radians);
    printf ("cos  : %.20f \n\n", cos (radians) );
}


