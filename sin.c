#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>


double getNumber(char stringIn []);
double getSin(double sinCosNumber, int numberDegree);
double getCos(double sinCosNumber, int numberDegree);
int factorial(int n);

int main (void)
{
   double sinCosNumber = getNumber("sinCosNumber");
   int numberDegree = getNumber("degree");
   
   double result = getSin(sinCosNumber, numberDegree);
   printf ("result %.20f\n", result);
   printf ("sin  : %.20f \n", sin(sinCosNumber) );
   result = getCos(sinCosNumber, numberDegree);
   printf ("result %.20f\n", result);
   printf ("cos  : %.20f \n", cos(sinCosNumber) );

return 0;
}

double getNumber(char stringIn [])
{
	double number;
	printf("Input your %s number:\n", stringIn);
    scanf("%lf", &number);

	return number;
}

double getSin(double sinCosNumber, int numberDegree)
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

double getCos(double sinCosNumber, int numberDegree)
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

int factorial(int n)
{
    if (n == 1 || n == 0){
	   return 1;
	}
	   else {   
	   n = n * factorial(n - 1);
	   return n;
	   }
}