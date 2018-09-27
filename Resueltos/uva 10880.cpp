#include <stdio.h>  //solucion sacada de internet

int main() {
	int t, n, Case = 0;
	scanf("%d", &t);	//nos pide las cantidad de casos t, y la vamos dismunuyendo hasta llegaar a 0
	while(t--) {
		scanf("%d", &n);  //aca nos piden denuevo n casos
		int max = 0, c;
		while(n--) {
			scanf("%d", &c); //aca anotamos los digitos para el caso dado en n
			if(max < c)
				max = c;	// si c es positivo, lo igualamos a max
		}
		printf("Case %d: %d\n", ++Case, max);
	}
    return 0;
}
       
    

