#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j,n,suma1=0, suma2=0;
	srand(time(NULL));
	
	printf("Ingrese la longitud de la matriz: ");
	scanf("%d", &n);
	
	int A[n][n];
	printf("Matriz A: \n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			A[i][j]=rand()%(9+1-1)+1;
			printf("%d", A[i][j]);
			if(i==j)
				suma1+=A[i][j];
	}
		printf("\n");
	}
		printf("Matriz A transpuesta: \n");
		for(i=0;i<n;i++){
			for (j=0;j<n;j++){
			printf("%d", A[j][i]);
			if(i==j)
				suma2+=A[j][i];
		}
		printf("\n");
	}
	
	printf("La suma de la diagonal de la Matriz A es %d", suma1);
	printf("\nLa suma de la diagonal de la Matriz A transpuesta es %d", suma2);
	return 0;
}
