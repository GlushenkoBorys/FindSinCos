#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

double getSin(double sinCosNumber);
double getCos(double sinCosNumber);
long long int factorial(long long int n);
const int numberDegree = 30;
double getSin(double sinCosNumber)
{
	double sin = 0;
	double n = 1;

	for(int i = 0; i < numberDegree; i++, n++) {
		
	sin += (((pow((double)(-1),(double)(n + 1))) *
	(pow((double)sinCosNumber,(double)(2 * n - 1))))
	/ factorial(2 * n - 1));

	}	
	return sin;
}

double getCos(double sinCosNumber)
{
	double cos = 0;
	double n = 0;	

	for(int i = 0; i < numberDegree; i++, n++) {
		
	cos += (((pow((double)(-1),(double)(n))) *
	(pow((double)sinCosNumber,(double)(2 * n ))))
	/ (factorial(2 * n )));

	}	
	return cos;
}

long long int factorial(long long int n)
{
    if (n == 1 || n == 0){
	   return 1;
	}
	   else {   
	   n = n * factorial(n - 1);
	   return n;
	   }
}