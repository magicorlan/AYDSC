#include <stdio.h>


int f(int a);
int f2(int a, int b);
void imprime_arreglo(int a[]);
void funcion_rama2();

# programa principal
int main(){
	printf("Hola mundo");
	
	int i = 0;
	while(i < 10){
		i++;
	}
	

	printf("11111111111");
	printf("****************************");

	
	for(i=0; i < 10; i++){
			printf("\nhola");
	}
	return 0;
}



int f(int a){
	return a*a;
}

int f2(int a, int b){
	return a+b;
}


void imprime_arreglo(int a[]){
    int i, longitud =  sizeof(a)/sizeof(a[0]);

    printf(“\n”);
    for(i = 0; i < longitud; i++)
        printf(“ %d ”,a[i]);
}



void funcion_rama2(){
	printf("\nEsta es la funcion rama2");
}



