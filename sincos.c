#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

double getNumber(char stringIn []);
double * getResult (int count, double *ptrArray, double firstNumber, double secondNumber, double increment, double (*ptrMathFunc)(double));
void printResult(int count, double ptrArray [], char string [], double firstNumber, double secondNumber, double increment);


int main (void)
{
	double firstNumber = getNumber("first");	
	double secondNumber = getNumber("second");	
	double increment = getNumber("increment");

	int arrayLength = (((secondNumber - firstNumber) / (increment)) + 1);
	
	printf("this %d:\n", arrayLength);

	double array[arrayLength];
	double *ptrArray = array;
	printf ("\n");
	 		
	ptrArray = getResult(arrayLength, ptrArray, firstNumber, secondNumber, increment, sin);  
	printResult(arrayLength, ptrArray, "sin", firstNumber, secondNumber, increment);
    printf ("\n");	
	ptrArray = getResult(arrayLength, ptrArray, firstNumber, secondNumber, increment, cos);  
	printResult(arrayLength, ptrArray, "cos", firstNumber, secondNumber, increment);
	
 return 0;
}

double getNumber(char stringIn [])
{
	double number;
	printf("Input your %s number:\n", stringIn);
    scanf("%lf", &number);
	return number;
}

double * getResult (int count, double *ptrArray, double firstNumber, 
double secondNumber, double increment, double (*ptrMathFunc)(double))
{
	int j = 0;
	for(double i = firstNumber ; ; i+= increment, j++){
		
		if (j == count)
					break;
		
		ptrArray[j] = ptrMathFunc(i);		
	}
	return ptrArray;
}

void printResult(int count, double ptrArray [], char string [], double firstNumber, 
double secondNumber, double increment)
{
	int j = 0;
	for (double i = firstNumber; ; i+= increment, j++){
		
        if (j == count)
					break;
		
		printf("Argument: %f radians    ", i);
	    printf ("%s: %.20f\n",string, ptrArray [j]);		
	}	
}
