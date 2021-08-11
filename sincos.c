#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

double getNumber(char stringIn []);
double * getResult (double *ptrArray, double firstNumber, double secondNumber, double increment, double (*ptrMathFunc)(double));
void printResult(double ptrArray [], char string [], double firstNumber, double secondNumber, double increment);


int main (void)
{

	double firstNumber = getNumber("first");	
	double secondNumber = getNumber("second");	
	double increment = getNumber("increment");

	int arrayLength = ((secondNumber - firstNumber) + 1.0 ) / increment;
	double array[arrayLength];
	double *ptrArray = array;
	 		
	ptrArray = getResult(ptrArray, firstNumber, secondNumber, increment, sin);  
	printResult( ptrArray, "sin", firstNumber, secondNumber, increment);
    printf ("\n");	
	ptrArray = getResult(ptrArray, firstNumber, secondNumber, increment, cos);  
	printResult( ptrArray, "cos", firstNumber, secondNumber, increment);
	
 return 0;
}

double getNumber(char stringIn [])
{
	double number;
	printf("Input your %s number:\n", stringIn);
    scanf("%lf", &number);
	return number;
}

double * getResult (double *ptrArray, double firstNumber, double secondNumber, double increment, double (*ptrMathFunc)(double))
{
	int j = 0;
	for(double i = firstNumber; i <= secondNumber; i+= increment){
		
		ptrArray[j] = ptrMathFunc(i);
		j++;
	}
	return ptrArray;
}

void printResult(double ptrArray [], char string [], double firstNumber, double secondNumber, double increment)
{
	int j = 0;
	for (double i = firstNumber; i <= secondNumber; i+= increment){

		printf("Argument: %f radians    ", i);
	    printf ("%s: %.20f\n",string, ptrArray [j]);
		j++;
	}	
}
