#include <stdio.h>
#include <math.h>
 
double buf[128 * 1024];
int main()
{
    int i = 0;
    unsigned long long n; // 64 bit, sin signo,porque no podemos calcular la raiz de un numero negativo
    while (scanf("%llu", &n) != EOF) {
        buf[i ++] = (double)sqrt(n * 1.0); // se van guardando las variables en el arreglo de arriba
    }
    for (; --i >= 0; ) {
        printf("%.4lf\n", buf[i]); // se imprimem las raices cuadradas en orden contrario al que se ingresaron
    }
    return 0;
}
