#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

double getNumber(char stringIn []);
void getSin(double firstNumber, double secondNumber, double increment);
void getCos(double firstNumber, double secondNumber, double increment);
void printSin(double glad);
void printCos(double glad);

int main (void)
{
	int flag = 0;
	double firstNumber = getNumber("first");	
	double secondNumber = getNumber("second");	
	double increment = getNumber("increment");
	 
    getSin(firstNumber, secondNumber, increment);  	
    //getCos(firstNumber, secondNumber, increment);

 return 0;
}

double getNumber(char stringIn [])
{
	double number;
	printf("Input your %s number:\n", stringIn);
    scanf("%lf", &number);
	return number;
}

void getSin(double firstNumber, double secondNumber, double increment)
{
	for(double i = firstNumber; i <= secondNumber; i+= increment){
   double glad = i;
   
	printSin(glad);
	}
}

//void getCos(double firstNumber, double secondNumber, double increment)
//{
//	for(double i = firstNumber; i <= secondNumber; i+= increment){
//   double glad = i;   
//	printCos(glad);
//	}
//}

void printSin(double glad)
{
	printf("Argument: %f radians ", glad);
    printf ("sin  : %.20f \n\n", sin(glad) );
}

void printCos(double glad)
{
	printf ("\n");
	printf("Argument: %f radians ", glad);
    printf ("cos  : %.20f \n\n", cos (glad) );
}


