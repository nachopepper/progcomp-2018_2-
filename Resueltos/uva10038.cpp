/*Codigo copiado de internet*/
#include<stdio.h>
  /*El problema nos pide que al restar 2 numeros de una secuencia, el resultado en valor absoluto, nos debe dar una secuencia
						Ejemplo 4 1 3 2 = 4-1=3, 1-3=2, 3-2=1 secuencia 3 2 1
						si la suma de los numero es menor al numero N ingresado
						se le suma 1
						en caso de que el numero del arreglo sea 0
						entonces el numero es Not jolly
						caso contrario Jolly
						*/    
int main() {
	int n, A[3001], i;
	while(scanf("%d", &n) == 1) {
		for(i = 0; i < n; i++)
			scanf("%d", &A[i]);
			int mark[3001] = {0}, flag = 0;
		for(i = 1; i < n; i++) {
			if(abs(A[i] - A[i-1]) < n)
				mark[abs(A[i] - A[i-1])]++;
		}
		for(i = 1; i < n; i++)
			if(mark[i] == 0)
				flag = 1;
		if(flag)
			printf("Not jolly\n");
		else
			printf("Jolly\n");
	}
    return 0;
}
