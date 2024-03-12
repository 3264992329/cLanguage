#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a[n];
	for(int i=0;i<n;i++){
		a[i]=0;
	}
	
	if(n==1){
		printf("1\n");
	}
	else{
		int l=0,r=n-1;
	int t=2*n-2;
	while(l<=r){
		a[l++]=t;
		a[r--]=t;
		t=t-2;
	}
	}
	
	
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
	return 0;
}
