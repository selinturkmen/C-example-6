#include <function4.h>
#include <stdio.h>
#define MATH(M,C,I,J) (*((M)+(I)*(C)+(J)))


void multiplyMatrix(const double *A, const double *AT, double *r, int nrows,     int ncols){
	for (int(i =0; i<nrows; i++)
		for (int(j=0; j<ncols; j++){
			double sum = 0.0;
			for (int k=0; k<nrows; k++)
				sum+= MAT(A, nrows, i, k)* MAT(AT, nrows, k, j);
				MAT (r, ncols, i, j) = sum;
	return 0;
	}}
