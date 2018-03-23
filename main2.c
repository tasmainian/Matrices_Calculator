#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matvec.h"
#include "matmat.h"
#include "checkres.h"
#include "dot.h"
#include "fillrand.h"

int main(){
	//Only one value necessary b/c m=n=p
	int m;

	//incrementing m by 1 and running matrix functions until Seg fault
	for (m = 580; ;m++){
		//All are square matrices
		double A[m*m], B[m*m], C[m*m];

		//filling random values
		fill_random(m, m, m, A, B );

		//calculated C
		matrix_times_matrix(m, m, m, A, B, C);
		
		//printing the value of m each time so last output prior to error will print
		printf("%d \n", m);

		check_result(m, m, m, A, B, C);
	}
	return 0;

}
