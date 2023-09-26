/*
1.Verificar que se pueda multiplicar: mismas columnas-mismos rengolnes
2. Declarar el tamaño correcto del resultado
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int i,j,n, k;
	srand(time(NULL));
	
	printf("Ingrese la longitud de la matriz: ");
	scanf("%d", &n);
	
	int A[n][n], B[n][n], C[n][n];
	
	printf("Matriz A: \n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			A[i][j]=rand()%(9+1-1)+1;
			printf("%d", A[i][j]);
			
	printf("Matriz B: \n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			B[i][j]=rand()%(9+1-1)+1;
			printf("%d", B[i][j]);
			
	printf("Matriz C: \n");
	for(i=0;i<n;i++){
		for (j=0;j<n;j++){
			B[i][j]=rand()%(9+1-1)+1;
			printf("%d", B[i][j]);

