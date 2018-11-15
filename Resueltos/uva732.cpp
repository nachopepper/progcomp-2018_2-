/*Codigo copiado de internet...*/

#include <stdio.h>
#include <string.h>


/*Lee el input y requiere que el string
de salida escriba '['


for cada posible secuencia de push y po
    for cada push y pop en la secuencia
        if push
        	mete la letra en el stack
        	avanza a la siguiente letra
        	y envia una i al output
            
        else
        	si el stack esta vacio
        	limpia el output y sale
        	pop letra del stack
        	la abre en el string del output
        	abre la letra o en la secuencia del output
            
    if stack vacio y la secuencia coincide con el outpu
        imprime la secuencia del outpu
print "]"*/
char a[105], b[105], buf[105];
char stk[105], w[105];
int len, stkIdx;
void dfs(int idx, int i, int o) {
    if(i == len && o == len) {
        for(int j = 0; j < idx; j++) {
            if(j)   putchar(' ');
            putchar(w[j]);
        }
        puts("");
        return ;
    }
    if(i < len) {
        stk[stkIdx++] = a[i];
        w[idx] = 'i';
        dfs(idx+1, i+1, o);
        stkIdx--;
    }
    if(i > o) {
        if(stk[stkIdx-1] == b[o]) {
            w[idx] = 'o';
            stkIdx--;
            dfs(idx+1, i, o+1);
            stkIdx++;
            stk[stkIdx-1] = b[o];
        }
    }
}
int main() {
    while(gets(a)) {
        gets(b);
        puts("[");
        len = strlen(a), stkIdx = 0;
        if(strlen(a) == strlen(b))
            dfs(0,0,0);
        puts("]");
    }
    return 0;
}
