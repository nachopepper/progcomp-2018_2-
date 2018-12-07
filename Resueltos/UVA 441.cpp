#include <cstdio>
using namespace std;
/*Codigo copiado*/

/*
El problema nos dice cuantas maneras podemos imprimer 6 numeros,numeros ordenados para usar backtracking permutation,
generamos lasposible permutaciones ordenadas en 6 numeros.
Primero chequeamos la posision del numero 6, si se puede imprimos esos 6 numeros,
si no se puede se aumenta el indice en 1*/

int main() {
	int k, S[12], count = 0;
	while (scanf("%d", &k), k) {
		if (count++)
			printf("\n");
		for (int i = 0; i < k; i++)
			scanf("%d", &S[i]);

		for (int a = 0; a < k - 5; a++)
			for (int b = a + 1; b < k - 4; b++)
				for (int c = b + 1; c < k - 3; c++)
					for (int d = c + 1; d < k - 2; d++)
						for (int e = d + 1; e < k - 1; e++)
							for (int f = e + 1; f < k; f++)
								printf("%d %d %d %d %d %d\n", S[a], S[b], S[c],
										S[d], S[e], S[f]);
	}

	return 0;
}
