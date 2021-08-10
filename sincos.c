#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

double getNumber(char stringIn []);
double * getResult(double firstNumber, double secondNumber, double increment, char (*string), double (*ptrMathFunc)(double));
//void printResult(double radians, char (*string));
void printResult(double radians);


int main (void)
{
	

	double firstNumber = getNumber("first");	
	double secondNumber = getNumber("second");	
	double increment = getNumber("increment");
	 	
		
	
	double *ptrArray = getResult(firstNumber, secondNumber, increment, "sin", sin);  
	printResult( *ptrArray);
    printf ("\n");	
	
    getResult(firstNumber, secondNumber, increment, "cos", cos);
	
 return 0;
}

double getNumber(char stringIn [])
{
	double number;
	printf("Input your %s number:\n", stringIn);
    scanf("%lf", &number);
	return number;
}

double * getResult(double firstNumber, double secondNumber, double increment, char * string, double (*ptrMathFunc)(double))
{
	int arrayLength = secondNumber - firstNumber;
	double array[arrayLength];
	double *ptrArray = array;
	int j = 0;
	for(double i = firstNumber; i <= secondNumber; i+= increment){
		
		array[j] = ptrMathFunc(i);
		j++;
   //double result =ptrMathFunc(i);
   
   //printResult(result, string);
   
	}
	return ptrArray;
}

//void printResult(double radians, char (*string))
//{
//	printf ("\n");
//	printf("Argument: %f radians    ", radians);
 //   printf ("%s : %.20f", string, radians);
//}

void printResult(double radians)
{
	printf ("\n");
	printf("Argument: %f radians    ", radians);
    printf ("%.20f", radians);
}
