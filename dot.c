#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double dotproduct(int n, double x[], double y[]){

	double sum = 0.0; //Initializing value to return

	for (int i = 0; i < n; i++){
		double product = x[i]*y[i]; //multiplying the corresponding array values

		sum += product; //adding the products to the total sum
	}
	return sum; //returning the value
}


