#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "dot.h"

void matrix_times_vector(int m, int n, double A[], double x[], double y[]){

	double temp[n]; //Temporary array to hold rows of matrix
	int i = 0;

	//Storing each row as a vector for A[]
	for (int j = 0; j < m; j++){
		for (int k=0; k<n; k++){
			temp[k] = A[i];
			i++;
		}
		//Calling dot.c function and storing the return value as an array element
		y[j] = dotproduct(n, x, temp);
	}
}

