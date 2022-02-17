#include <stdio.h>
#include "function1.h"
#include "function2.h"
#include "function3.h"
#include "function4.h"
#include "function5.h"
#define NROWSA 8
#define NCOLUMNSA 8




int main(void){
	double A, B, AT, AAT;
	B = readMatrix();
	printf("Matrix A: %d\n", &printMatrix(B, 8, 8));
	A = printMatrix(B, 8, 8);
	printf("Matrix A^T: %d\n", transpose(A[0][0], 8, 8));
	AT = transpose(A[0][0], 8, 8);
	printf("Matrix A*A^T: %d\n", multiplyMatrix(A, AT, double *r, 8, 8));
	AAT = multiplyMatrix(A, AT, double *r, 8, 8);
	printf("Fronorm of A: %d\n", FronormMatrix(AAT, 8, 8));
return 0;}
