#include<stdio.h>


int main(){
	
	
	int numero,ejex,ejey,x,y,i;
	
	while(scanf("%d",&numero)==1 && numero){ //mientras sea verdad repetimos bucle
	
		scanf("%d %d",&ejex,&ejey);
		
		while(numero--){
			scanf("%d %d",&x,&y);
				if(x == ejex || y== ejey)
                printf("divisa");
                 else if(x< ejex && y > ejey)
                printf("NO");
            	else if(x > ejex && y > ejey)
            
                printf("NE");
                
                else if(x < ejex && y < ejey)
                printf("SO");
           
            
            else
                printf("SE");
			
			
			
			
			
			
		}
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
