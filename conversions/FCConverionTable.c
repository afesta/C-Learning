#include <stdio.h>

//This program prints out a conversion table for 0-300 degrees celsius to fahrenheit

int main(){
	
	double fahr, cel;
	int lower, upper, step;
	
	//lower limit, upper limit, step size
	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while(fahr <= upper){
		cel = 5*(fahr-32)/9;
		printf("%d\t%d\n",fahr, cel);
		fahr+=step;
	}
	
	return 0;
}

