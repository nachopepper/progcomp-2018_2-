#include<stdio.h>

int main(){
	
	int numero,i,suma=0;
	
	scanf("%d",&numero);
	
	
	if(numero<=0){
	
	for(i=numero;i<=1;i++){
		suma+=i;
	}
	printf("%d",suma);
	
	}
	
	else
	{
	
	
	for(i=1;i<=numero;i++){
		suma+=i;
	}
	printf("%d",suma);	
}
	
	
	
	return 0;
	
}
