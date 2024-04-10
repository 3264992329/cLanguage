#include <stdio.h>
#include <stdlib.h>
int M,N;
int T;
int zh[52][52];

//µ∫”Ï 
void land(int i,int j){
	if(i<=M+1&&i>=0&&j<=N+1&&j>=0){
		if(zh[i][j]==1){
  			zh[i][j]=2;
  			
  			land(i-1,j);
  			land(i,j-1);
  			land(i+1,j);
  			land(i,j+1);
		  }
	}
}
//∫£ÀÆ
void sea(int i,int j){
	if(i>=0&&i<=M+1&&j>=0&&j<=N+1){
		if(zh[i][j]==0){
			zh[i][j]=3;
			sea(i-1,j);
			sea(i,j-1);
			sea(i-1,j-1);
			sea(i+1,j);
			sea(i,j+1);
			sea(i+1,j+1);
			sea(i-1,j+1);
			sea(i+1,j-1);
		}
	}
}
 
int main(int argc, char *argv[])
{
  scanf("%d",&T);
  for(int m=0;m<T;m++){
  	scanf("%d %d",&M,&N);
  	for(int i=0;i<=N+2;i++){
  		zh[0][i]=0;
  		zh[M+1][i]=0;
	  }
	  for(int i=1;i<M+1;i++){
	  	zh[i][0]=0;
	  	zh[i][N+1]=0;
	  }
	  
  	  
        for(int i=1;i<M+1;i++){
  	        for(int j=1;j<N+1;j++){
  		        scanf("%1d",&zh[i][j]);
	  }
  }
  
  sea(0,0);
  int all=0;
  for(int i=0;i<M+2;i++){
  	for(int j=0;j<N+2;j++){
  		if(zh[i][j]==1&&zh[i-1][j]==3){
  			land(i,j);
  			all++;
		  }
	  }
  } 
  printf("%d\n",all);
  
}
return 0;
}
