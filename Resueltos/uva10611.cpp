#include <stdio.h>
#include <vector>
#include <algorithm>


using namespace std;


int main() {								//Codigo Copiado de internet
    int n, Q, x, i;									
    int A[50005];
    while(scanf("%d", &n) == 1) {				/* lo que el algoritmo hace basicamente es una busqueda binaria utilizando vectores*/
    	for(i = 0; i < n; i++)
            scanf("%d", &A[i]);
        vector<int> v(A, A+n);
        vector<int>::iterator low, up;
        scanf("%d", &Q);
        while(Q--) {    
            scanf("%d", &x);
            low = lower_bound(v.begin(), v.end(), x);  /*Compara las alturas para devolver la mayor*/
            up  = upper_bound(v.begin(), v.end(), x);
            if(low-v.begin() == 0)						/*En caso de que no las encuentre devuelve una X*/				
                printf("X ");	
            else
                printf("%d ", *--low);
            if(up-v.begin() == n)
                printf("X\n");
            else
                printf("%d\n", *up);
        }
    }
    return 0;
}
