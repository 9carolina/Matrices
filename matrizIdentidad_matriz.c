#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j,n,suma=0;
	
	srand(time(NULL));
	
	printf("Ingrese la longitud de la matriz: ");
	scanf("%d", &n);
	
	int A[n][n];
	printf("Matriz A: \n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			A[i][j]=0;
			if(i==j)
				A[i][j]=1;
			printf("%d ", A[i][j]);
		}
	printf("\n");
	}
	
	return 0;
}
