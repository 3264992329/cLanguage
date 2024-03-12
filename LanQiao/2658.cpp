#include<stdio.h>
int main(){
	//最高为N进制
	sancf("%d",&n);
	//第一个数为ma位数
	scanf("%d",&ma);
	int a[ma];
	for(int i=0;i<ma;i++){
		scanf("%d",&a[i]);
	}
	
	// 第二个数为mb位数
	scanf("%d",&mb);
	int b[mb];
	for(int i=0;i<mb;i++){
		scanf("%d",&b[i]);
	}
	
	int suma=a[n-1],sumb=b[n-1];
	int min=0;
	
	int t=(ma<mb)?ma:mb;
	for(int i=2;i<=t;i++){
		
	}
	
}
