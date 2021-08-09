#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

double getNumber(char stringIn []);
void getResult(double firstNumber, double secondNumber, double increment, void (*printSin)(double));
void func ( void (*f)(int) );
void printSin(double radians);
void printCos(double radians);

int main (void)
{
	double firstNumber = getNumber("first");	
	double secondNumber = getNumber("second");	
	double increment = getNumber("increment");
	 
    getResult(firstNumber, secondNumber, increment, printSin);  
    printf ("\n");	
    getResult(firstNumber, secondNumber, increment, printCos);
	
 return 0;
}

double getNumber(char stringIn [])
{
	double number;
	printf("Input your %s number:\n", stringIn);
    scanf("%lf", &number);
	return number;
}

void getResult(double firstNumber, double secondNumber, double increment, void (*function)(double))
{
	for(double i = firstNumber; i <= secondNumber; i+= increment){
   double radians = i;
   
   function(radians);
   
	}
}

void printSin(double radians)
{
	printf ("\n");
	printf("Argument: %f radians    ", radians);
    printf ("sin  : %.20f", sin(radians) );
}

void printCos(double radians)
{
	printf ("\n");
	printf("Argument: %f radians    ", radians);
    printf ("cos  : %.20f", cos (radians) );
}


