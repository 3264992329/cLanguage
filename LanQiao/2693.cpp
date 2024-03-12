#include<stdio.h>
int main(){
	int max=0;
	int sum=0;
	int n,m;
	//n张卡牌为一套,有m张空白牌 
	printf("%d,%d",&n,&m);
	//输入牌i有ai张
	int a[n],b[n];
	for(int i=0;i<n){
		scanf("%d",&a[i]);
	} 
	//输入每一类牌最多有几张手写牌
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]); 
	} 
	
	//对每一种牌的数量进行从小到大的排序 
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
				
				int p=b[i];
				b[i]=b[j];
				b[j]=t;
			}
		}
	}
	
	
	
	
} 
