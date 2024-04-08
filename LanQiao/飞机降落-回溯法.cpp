#include<stdio.h>
#include<stdlib.h>
#define N 11 
int n,T;

struct plane{
	long long t,d,l; 
}p[N]; 

int max(long long a,long long b){
	return (a>b)?a:b; 
} 

int a[N]; //0代表flase,1代表true 

int dfs(long time,int u){//u代表现在已经降落的飞机 
	if(u>=n){
		return 1;
	}
	for(int i=0;i<n;i++){

		if(!a[i]){
			a[i]=1;
			if(p[i].t+p[i].d<time){
				a[i]=0;
				return 0;
			}
			long long t=max(p[i].t,time)+p[i].l;
			if(dfs(t,u+1)){
				return 1;
			}
			a[i]=0;
		}
	}
	return 0;
}

int main(int argc, char *argv[]){
	scanf("%d",&T); 
	for(int i=0;i<T;i++){
		scanf("%d",&n);
		for(int j=0;j<n;j++){
			scanf("%lld %lld %lld",&p[j].t,&p[j].d,&p[j].l);
		}
		if(dfs(0,0)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		for(int m=0;m<n;m++){
			a[m]=0;
		}
	}
	return 0; 
} 
