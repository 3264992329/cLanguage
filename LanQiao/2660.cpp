#include<stdio.h>
#define max 10000001
#define mod 1000000007
int a[max];
int main(){
	int n;
	scanf("%d",&n);
	a[1]=1;
	a[2]=2;
	a[3]=5;
	for(int i=4;i<=n;i++){
		a[i]=(2*a[i-1]%mod+a[i-3]%mod)%mod;
	}
	printf("%d",a[n]);
	return 0;
} 
