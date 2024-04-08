#include<stdio.h>

typedef struct{
	int A;
	int B; 
	int V; 
}mental; 

int main(){
	long long max=9999999999;
	long long min=0;
	int N;
	scanf("%d",&N);
	mental mentals[N]; 
	for(int i=0;i<N;i++){
		scanf("%d %d",&mentals[i].A,&mentals[i].B);
		mentals[i].V=mentals[i].A/mentals[i].B; 
		if(mentals[i].V<max){
			max=mentals[i].V; 
		}
		int temp=mentals[i].A/(mentals[i].B+1)+1;
		if(min<temp){
			min=temp;
		}
	} 
	printf("%lld %lld",min,max) ;
	return 0; 
} 
