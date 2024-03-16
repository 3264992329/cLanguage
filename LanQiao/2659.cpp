#include<stdio.h>
#include<stdbool.h>

int a[501][501];
int s[501][501];
	
bool con(int x1,int y1,int x2,int y2,long long k){
	int h=s[x2][y2]-s[x1-1][y2]-s[x2][y1-1]+s[x1-1][y1-1];
	return (h<=k);
}

int main(){
	int n,m,sum=0;
	int k;
	scanf("%d %d %d",&n,&m,&k);
	
	 //录入二维数组 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	//录入二维数组前缀和 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			s[i][j]=s[i-1][j]+s[i][j-1]+a[i][j]-s[i-1][j-1]; 
		}
	}
	
	//左上坐标 
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			 //右上坐标
			 for(int o=i;o<n;o++){
			 	for(int l=j;l<m;l++){
			 		
			 		if(con(i,j,o,l,k)){
			 			sum++;
					 }else{
					 	break;
					 }
					 
				 }
			 } 
		}
	}
	
	printf("%d",sum); 
	return 0;
}
