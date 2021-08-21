#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>
#include "SinCosResult.h"
#include <time.h>

double getNumber(char stringIn []);
double * getResult (int count, double *ptrArray, double firstNumber, double secondNumber, double increment, double (*ptrMathFunc)(double firNumber));
void printResult(int count, double ptrArray [], char string [], double firstNumber, double secondNumber, double increment);
double findMinAfterTwoPi(double number);


int main (void)
{
	double firstNumber = getNumber("first");	
	double secondNumber = getNumber("second");
	double increment = getNumber("increment");

	int arrayLength = (((secondNumber - firstNumber) / (increment)) + 1);
	printf("arrayLength: %d\n", arrayLength);
	double array[arrayLength];
	double *ptrArray = array;
	printf ("\n");
	
    time_t start, end;
	time (&start);

    for(int i =0; i < 100; i++) {
	ptrArray = getResult(arrayLength, ptrArray, firstNumber, secondNumber, increment, getSin);  
	//printResult(arrayLength, ptrArray, "sin", firstNumber, secondNumber, increment);
	//ptrArray = getResult(arrayLength, ptrArray, firstNumber, secondNumber, increment, sin);  
	//printResult(arrayLength, ptrArray, "mathSin", firstNumber, secondNumber, increment);
    //printf ("\n");	
	ptrArray = getResult(arrayLength, ptrArray, firstNumber, secondNumber, increment, getCos);  
	//printResult(arrayLength, ptrArray, "cos", firstNumber, secondNumber, increment);
	//ptrArray = getResult(arrayLength, ptrArray, firstNumber, secondNumber, increment, cos);  
	//printResult(arrayLength, ptrArray, "mathCos", firstNumber, secondNumber, increment);
	}
	
	time (&end);
	printf ("%f\n", difftime(end, start));
	
 return 0;
}

double getNumber(char stringIn [])
{
	double number;
	printf("Input your %s number:\n", stringIn);
    scanf("%lf", &number);

	return number;
}

double * getResult (int count, double *ptrArray, double firstNumber, double secondNumber, 
double increment, double (*ptrMathFunc)(double firNumber))
{	
	for(int i=0; i< count; i++)
	{
		ptrArray[i] = ptrMathFunc(firstNumber);
		
		firstNumber+=increment;		
	}
	
	return ptrArray;
}

void printResult(int count, double ptrArray [], char string [], double firstNumber, 
double secondNumber, double increment)
{
	for(int i = 0; i < count; i++)
	{
		printf("Argument: %f radians ", firstNumber);
	    printf ("%s: %.20f\n",string, ptrArray [i]);
		firstNumber+=increment;				
		
	}	
}









