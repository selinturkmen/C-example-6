#include <function3.h>
#include <stdio.h>


void transpose(int A[int i][int j], int nrows, int ncols){
	int transpose[i][j];
	for (int i =0; i<nrows; ++i)
	for (int j =0; j<ncols; ++j){
		transpose [j][i] = A[i][j];}
	printf("A^T:\n");
	for (int i =0; i<ncols; ++i)
    for (int j =0; j<nrows; ++j){
		printf("%d ", transpose [i][j]);
		if (j == nrows-1)
			printf("\n");
	}}
