#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matvec.h"
#include "matmat.h"
#include "checkres.h"
#include "dot.h"
#include "fillrand.h"

int main(){
	int m, n, p;

	//Enter m, n, p
	printf("Enter m, n, p: ");
	scanf("%d%d%d", &m, &n, &p);

	double A[m*n], B[n*p], C[m*p];
	//Fill A and B with random numbers
	fill_random(m, n, p, A, B );

	//Compute C = A*B
	matrix_times_matrix(m, n, p, A, B, C);

	//Check the result
	check_result(m, n, p, A, B, C);
	return 0;
}
