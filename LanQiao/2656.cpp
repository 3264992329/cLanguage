#include<stdio.h>
int main(){
	int a,b,n;
	int day=0;
	int sum=0;
	scanf("%d %d %d",&a,&b,&n);
	while(sum<n){
		if(day%7<=5&&day%7>0||day==0){
			sum=sum+a;
		}else{
		sum=sum+b;
		}
		day++; 
	}
	printf("%d",day);
	
	return 0;
}
