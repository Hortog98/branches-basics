#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int sqr(int n){
	int y;
	y=(n*n);
	return y;}
int cub(int n){
	int y;
	y=(n*n*n);
	return y;}
int main () {
	int x;
	printf("Vvedite chislo: ");
	scanf("%d",&x);
	x=cub(x);
	printf("\nCub %d",x);
system("pause");
}
