
double getSin(double sinCosNumber);
double getCos(double sinCosNumber);
unsigned long long int factorial(unsigned long long int n);
double findMinAfterTwoPi(double number);
const int numberDegree = 10;
const double twoPi = 6.28;

double getSin(double sinCosNumber)
{
	double sin = 0;
	double j= 1;
	double n = 1;
	int k = 0;
	double result = sinCosNumber;
	double powResult;
	double arrayFactorial [numberDegree];
	
	for(int i = 0; i < numberDegree; i++, j+=2){
		
		arrayFactorial[i] = ((double)(factorial( j )));		
        //printf("Input your %.20f\n", arrayFactorial[i]);
	}	
	
	sinCosNumber = findMinAfterTwoPi(sinCosNumber);

	for(int i = 1; i < numberDegree; i++, n++, k++) {
		
    result *= (sinCosNumber * sinCosNumber);
	
	powResult *= (-1.0 * 1.0);
	
	if( i == 1 ) {
		powResult = 1;
		result = sinCosNumber;
	}
		
	sin += powResult * result / arrayFactorial[k];
	
	}	
	return sin;
}

double getCos(double sinCosNumber)
{
	double cos = 0;
	double j= 0;
	double n = 0;   	
	double result = 1;
	double powResult;
	double arrayFactorial [numberDegree];
	
	for(int i = 0; i < numberDegree; i++, j+=2){
		
		arrayFactorial[i] = ((double)(factorial( j )));	
        		
	}	
	
    sinCosNumber = findMinAfterTwoPi(sinCosNumber);
	
	for(int i = 0; i < numberDegree; i++, n++) {
	
	result *= (sinCosNumber * sinCosNumber);
	
	powResult *= (-1.0 * 1.0);
		
	if( i == 0 ) {
		powResult = 1;
	    result = 1;
	}
		
	cos += powResult * result / arrayFactorial[i];
	 	
	}	
	
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

double findMinAfterTwoPi(double sinCosNumber) { 	   
   
   double number = sinCosNumber / twoPi;
   double result = sinCosNumber - (twoPi * (int)number);
      
   return result;
}