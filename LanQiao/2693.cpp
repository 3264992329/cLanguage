#include<stdio.h>
int main(){
	int max=0;
	int sum=0;
	int n,m;
	//n�ſ���Ϊһ��,��m�ſհ��� 
	printf("%d,%d",&n,&m);
	//������i��ai��
	int a[n],b[n];
	for(int i=0;i<n){
		scanf("%d",&a[i]);
	} 
	//����ÿһ��������м�����д��
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]); 
	} 
	
	//��ÿһ���Ƶ��������д�С��������� 
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
