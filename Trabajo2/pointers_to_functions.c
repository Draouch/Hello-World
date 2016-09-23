#include <stdio.h>

void print1(){
	printf("Hola mundo\n");
}

void print2(int x){
	printf("El numero es: %d\n", x);
}

int print3(int x){
	printf("2 + %d = %d", x, 2 + x);
	return 2 + x;
}

int main() {
	
	/*void (*funcion1)();
	funcion1 = &print1;
	(*funcion1)();*/
	
	
	/*void (*funcion2)(int);
	funcion2 = &print2;
	(*funcion2)(4);*/
	
	
	int(*funcion3)(int);
	funcion3 = &print3;
	(*funcion3)(2);
	
	return 0;
}
