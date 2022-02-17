#include <function2.h>
#include <stdio.h>
#define MAT(M,C,I,J) (*((M)+(I)*(C)+(I)))

void printMatrix(const double *mat, int nrows, int ncols){
	for (int i =0; i<nrows; i++){
		for (int j=0; j<ncols; j++){
			printf("%.0lf\t", MAT(mat,ncols,i,j);}
			printf("\n");}
}
