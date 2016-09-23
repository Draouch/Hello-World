#include <stdio.h>

int main(){
	
	int a = 1;
	
	int *ptr = &a;             /* puntero a un entero */
	
	int **bisptr = &ptr;       /* puntero a puntero a un entero */
	
	printf("%d", *ptr);        /* imprime el valor de a */
	
	printf("\n%d", **bisptr);  /* imprime el valor de a */
	
	printf("\n%d", *bisptr);   /* imprime la direccion de a */
	
	printf("\n%d", ptr);   /* imprime la direccion de a */
	
	return 0;         
}
