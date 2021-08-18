#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>

double getSin(double sinCosNumber);
double getCos(double sinCosNumber);
unsigned long long int factorial(unsigned long long int n);
double findMinAfterTwoPi(double number);
const int numberDegree = 10;
const double twoPi = 6.28;

double getSin(double sinCosNumber)
{
	double sin = 0;
	double n = 1;
	
	sinCosNumber = findMinAfterTwoPi(sinCosNumber);

	for(int i = 0; i < numberDegree; i++, n++) {
		
	sin += ((pow((double)(-1),(double)(n + 1))) *
	(pow((double)sinCosNumber,(double)(2 * n - 1))))
	/ ((double)(factorial(2 * n - 1)));

	}	
	return sin;
}

double getCos(double sinCosNumber)
{
	double cos = 0;
	double n = 0;	
	
    sinCosNumber = findMinAfterTwoPi(sinCosNumber);

	for(int i = 0; i < numberDegree; i++, n++) {
		
	cos += ((pow((double)(-1),(double)(n))) *
	(pow((double)sinCosNumber,(double)(2 * n ))))
	/ ((double)(factorial(2 * n )));

	}	
	//
	return cos;
}

unsigned long long int factorial(unsigned long long int n)
{
    if (n == 1 || n == 0){
	   return 1;
	}
	   else {   
	   n = n * factorial(n - 1);
	   return n;
	   }
}

double findMinAfterTwoPi(double number) {
	
	if(number > twoPi) {	   
	 while( number > twoPi )
	 {
		 number -= twoPi;
	 }	   
   }
   return number;
}