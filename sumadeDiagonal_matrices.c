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
			A[i][j]=rand()%(9+1-1)+1; //es lo mismo a que 10
			printf("%d", A[i][j]);
			if(i==j)
				suma+=A[i][j];
		}
		printf("\n");
	}
	printf("La suma de la diagonal principal es: %d", suma);
	
	return 0;
}
