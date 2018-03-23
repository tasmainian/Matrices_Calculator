#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void fill_random(int m, int n, int p, double A[], double B[]){

	//Inputting random numbers between 0-1 into A and B matrices
	srand( time(NULL) );
	for (int i=0; i<(m*n); i++){
		A[i] = drand48();
	}
	for (int i=0; i<(n*p); i++){
		B[i] = drand48();
	}
}
