#include<stdio.h>

typedef struct{
	int Ti;
	int Di;
	int Li;
	int La;
}Play;
int main(){
	int t=0;
	int T,N;
	
	
	//Â¼ÈëÊý¾Ý 
	Play plays[11];
	scanf("%d",&T);
	for(int i=0;i<T;i++){
		scanf("%d",&N);
		for(int j=0;j<N;j++){
			scanf("%d %d %d",&plays[j].Ti,&plays[j].Di,&plays[j].Li);
			plays[j].La=plays[j].Ti+plays[j].Di;
		}
		
		//Ã°ÅÝÅÅÐò 
		for(int k=0;k<N-1;k++){
			for(int r=0;r<N-1-k;r++){
				if(plays[r].La>plays[r+1].La){
					Play temp=plays[r];
					plays[r]=plays[r+1];
					plays[r+1]=temp;
				}
			}
		}
		
		for(int m=0;m<N;m++){
			if(t>plays[m].La){
				printf("NO\n");
				t=0;
				return 0;
			}else{
				t=plays[m].Ti+plays[m].Li;
			}
		}
		printf("YES\n");
		t=0;
	}
	return 0;
}
