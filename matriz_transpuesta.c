#include <stdio.h>

void imprimir_arreglo(int a[]);


int main(){
	int mx[2][3] = {
	                 {2, 3, 4},
					 {5, 9, 7}
				   };
    
    int m = sizeof(mx)/sizeof(mx[0]); // numero de renglones de mx
    int n = sizeof(mx[0])/sizeof(mx[0][0]);  // numero de columnas de mx
    int c, r;
    
    int mxt[n][m];
    
    for(c = 0; c <= n-1; c++){
    	for(r = 0; r <= m-1; r++){
    		mxt[c][r] = mx[r][c];
    		printf(" %d ",mxt[c][r]);
   		}
   		printf("\n");
	}
	
}



void imprimir_arreglo(int a[]){
		int i;
		int longitud = sizeof(a)/sizeof(a[0]);
		
		for(i=0; i<=longitud-1; i++)
			 printf("%d  ",a[i]);
}
	















