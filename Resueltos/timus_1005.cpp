#include<stdio.h>

int main(){
	
	int n,arreglo[n],resta[n],i,j,aux;
	
	scanf("%d",&n);
	
	
	for(i=0;i<n;i++){
		
		scanf("%d",&arreglo[i]);
		
		
	}
	
	for(i=0;i<n;i++){
		
		if(arreglo[i]<arreglo[i+1]){
			resta[i]=0;
			resta[i]=arreglo[i+1]-arreglo[i];
		}
		else{	
				resta[i]=0;
				resta[i]=arreglo[i]-arreglo[i+1];
		}
		
	}
	
	

	
	
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			
			if(resta[i]>resta[i+1]){
				
				aux=resta[i];
				resta[i]=resta[i+1];
				resta[i+1]=aux;
				
				
				
			}
			
			
			
			
		}
		
		
	}
	
	
	
	printf("%d",resta[0]);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
