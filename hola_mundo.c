#include <stdio.h>

int f(int a);

int f2(int a, int b);

int main(){
	printf("Hola mundo");
	
	int i = 0;
	while(i < 10){
		i++;
	}
	
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