#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <limits.h>
#include <stdlib.h>


long double getNumber(char stringIn []);
long double getSin(long double sinCosNumber, int numberDegree);
long double getCos(long double sinCosNumber, int numberDegree);
int factorial(int n);

int main (void)
{
   long double sinCosNumber = getNumber("sinCosNumber");
   int numberDegree = getNumber("numberDegree");

   long double result = getSin(sinCosNumber, numberDegree);
   printf ("result %.20f\n", result);
   printf ("sin  : %.20f \n", sin(sinCosNumber) );
   result = getCos(sinCosNumber, numberDegree);
   printf ("result %.20f\n", result);
   printf ("cos  : %.20f \n", cos(sinCosNumber) );

return 0;
}

long double getNumber(char stringIn [])
{
	long double number;
	printf("Input your %s number:\n", stringIn);
    scanf("%lf", &number);

	return number;
}

long double getSin(long double sinCosNumber, int numberDegree)
{
	long double sin = 0;
	long double n = 1;
	
	
	for(int i = 0; i < numberDegree; i++, n++) {
		
	sin += (((pow((long double)(-1),(long double)(n + 1))) *
	(pow((long double)sinCosNumber,(long double)(2 * n - 1))))
	/ (factorial(2 * n - 1)));

    //printf("Sin %f number:\n", (((pow((double)(-1),(double)(n + 1))) *
	//(pow((double)sinCosNumber,(double)(2 * n - 1))))
	/// factorial(2 * n - 1)));
	
	//printf("Sin1 %f number:\n", sin);
	
    

	}	
	return sin;
}

long double getCos(long double sinCosNumber, int numberDegree)
{
	long double cos = 0;
	long double n = 0;	

	for(int i = 0; i < numberDegree; i++, n++) {
		
	cos += (((pow((long double)(-1),(long double)(n))) *
	(pow((long double)sinCosNumber,(long double)(2 * n ))))
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