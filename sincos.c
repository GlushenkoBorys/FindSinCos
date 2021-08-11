#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

double getNumber(char stringIn []);
double * getResult (double *ptrArray, double firstNumber, double secondNumber, double increment, char string [], double (*ptrMathFunc)(double));
void printResult(double ptrArray [], char string [], int count);


int main (void)
{

	double firstNumber = getNumber("first");	
	double secondNumber = getNumber("second");	
	double increment = getNumber("increment");

	int arrayLength = ((secondNumber - firstNumber) + 1.0 ) / increment;
	double array[arrayLength];
	double *ptrArray = array;
	 		
	ptrArray = getResult(ptrArray, firstNumber, secondNumber, increment, "sin", sin);  
	printResult( ptrArray, "sin", arrayLength);
    printf ("\n");	
	ptrArray = getResult(ptrArray, firstNumber, secondNumber, increment, "sin", cos);  
	printResult( ptrArray, "cos", arrayLength);
	
 return 0;
}

double getNumber(char stringIn [])
{
	double number;
	printf("Input your %s number:\n", stringIn);
    scanf("%lf", &number);
	return number;
}

double * getResult (double *ptrArray, double firstNumber, double secondNumber, double increment, char string [], double (*ptrMathFunc)(double))
{
	int j = 0;
	for(double i = firstNumber; i <= secondNumber; i+= increment){
		
		ptrArray[j] = ptrMathFunc(i);
		j++;
	}
	return ptrArray;
}

void printResult(double ptrArray [], char string [], int count)
{
	for (int i = 0; i < count; i++){

		printf("Argument: %f radians    ",  ptrArray [i]);
	    printf ("%s: %.20f\n",string, ptrArray [i]);
	}	
}
