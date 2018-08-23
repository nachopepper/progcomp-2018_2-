#include<stdio.h>

void dispara(int harry,int larry){
	
	int restal=0,restah=0;
	restal=larry-1;
	restah=harry-1;
	
	printf("%d %d",restal,restah);
	
	
}

int main(){
	
	int x,y;
	scanf("%d %d",&x,&y);
	
	
	dispara(x,y);
		
	return 0;
	
	}
