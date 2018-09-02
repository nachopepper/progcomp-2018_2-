#include<stdio.h>


int main(){    //Profe, este codigo es 99% mio el problema que tuve fue
				//que al enviarlo al juez virtual me daba Runtime error (access violation)
				//asique google una solucion que de echo me aparecio en c++ donde el arreglo venia dado como
				// arreglo[101], cuando yo lo tenia como arreglo[numero] y asi solucione el problema
				 	
	
	int numero,arreglo[101],aux,i,suma=0,j;
	
	
	
	scanf("%d",&numero);
	
	
	for(i=0;i<numero;i++){
		
		scanf("%d",&arreglo[i]);
	}
	
	
    for(j=1; j<numero; j++)
        for(i=numero-1; i>=j; i--)
        {
            if(arreglo[i-1]>arreglo[i])
            {
                aux=arreglo[i-1];
                arreglo[i-1]=arreglo[i];
                arreglo[i]=aux;

            }
        }
        
        

        for(i=0;2*i<numero; i++)
        {
            suma+=(arreglo[i]+2)/2;
        }
        
        printf("%d\n",suma);
	
	
	return 0;
}
