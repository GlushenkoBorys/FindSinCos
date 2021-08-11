#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

double getNumber(char stringIn []);
double *getResult(double firstNumber, double secondNumber, double increment, char (*string), double (*ptrMathFunc)(double));
//void printResult(double radians, char (*string));
void printResult(double ptrArray [], char string [], int count);

//int arrayLength;
int main (void)
{
	//int arrayLength;
	double firstNumber = getNumber("first");	
	double secondNumber = getNumber("second");	
	double increment = getNumber("increment");
	 		
	double*  ptrArray = getResult(firstNumber, secondNumber, increment, "sin", sin);  
	//printResult( ptrArray, "sin", arrayLength);
    printf ("\n");	
	
    //getResult(firstNumber, secondNumber, increment, "cos", cos);
	
 return 0;
}

double getNumber(char stringIn [])
{
	double number;
	printf("Input your %s number:\n", stringIn);
    scanf("%lf", &number);
	return number;
}

double * getResult (double firstNumber, double secondNumber, double increment, char string [], double (*ptrMathFunc)(double))
{
	int arrayLength = secondNumber - firstNumber + 1;
	double array[arrayLength];
	double *ptrArray = array;
	int j = 0;
	for(double i = firstNumber; i <= secondNumber; i+= increment){
		
		array[j] = ptrMathFunc(i);
		j++;
	}
	//return ptrArray;
    printResult(ptrArray, string, arrayLength);
}

void printResult(double ptrArray [], char string [], int count)
{
	for (int i = 0; i < count; i++){
		printf("Argument: %f radians    ",  ptrArray [i]);
	    printf ("%s: %.20f\n",string, ptrArray [i]);
	}
	//printf("Argument: %f radians    ",  radians);
    //printf ("%s: %.20f\n",string, radians);
	
}
