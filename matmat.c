#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matvec.h"

void matrix_times_matrix(int m, int n, int p, double A[], double B[], double C[]){
	//Initializing counters and place holding arrays
	double temp[n];
	double y[m];

	//Placing the columns of B in temporary arrays
	for (int j = 0; j < p; j++){

		for (int k=0; k<n; k++){
			temp[k] = B[j+(k*p)];
		}

		//Calling matvec.c function to calculate array for that column
		matrix_times_vector(m, n, A, temp, y); 

		//Storing each column of C[] vector
		for (int k=0; k<m; k++){
			C[j+(k*p)] = y[k];
		}
	}
}

