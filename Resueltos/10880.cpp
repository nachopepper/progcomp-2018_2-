#include<stdio.h>
#include<math.h>
int main(){            //codigo copiado
	int n;	
	scanf("%d",&n);
	for(int t=1;t<=n;t++){
		int C,R;
		scanf("%d%d",&C,&R);
		int amount=C-R;		
		int i,index,m[10000]={0};
		int sq=sqrt((double)amount);
		index=0;
		printf("Case #%d:",t);
		for(i=1;i<=sq;i++)
			if(amount%i==0){
				if(i>R)
					printf(" %d",i);
				if(amount/i>R)
					m[index++]=amount/i;
			}
		if(m[index-1]*m[index-1]==amount)
			i=index-1-1;
		else
			i=index-1;
		for(;i>=0;i--)
			printf(" %d",m[i]);
		if(C==R)
			printf(" 0"); 
		putchar('\n');
	}
	return 0;
}
