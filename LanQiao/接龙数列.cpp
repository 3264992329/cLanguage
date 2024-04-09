#include <stdio.h>
#include <stdlib.h>

//计算首位数字 
int start(long long a){
	while(a>9){
		a=a/10;
	}
	return a; 
}

int main(int argc, char *argv[])
{
  int dp[10]={0};
  int n,all=0;
  scanf("%d",&n);
  long long a[n];
  long long first[n],end[n];
  //输入数据 
  for(int i=0;i<n;i++){
  	scanf("%lld",&a[i]);
  } 
  //记录数据首尾 
  for(int j=0;j<n;j++){
  	first[j]=start(a[j]);
  	end[j]=a[j]%10;
  }
  //动态规划
  int sum=0;
  for(int i=0;i<n;i++){
  	dp[end[i]]=(dp[first[i]]+1)>dp[end[i]]?(dp[first[i]]+1):dp[end[i]];
  	sum=sum>dp[end[i]]?sum:dp[end[i]];
  }
  printf("%d",n-sum);
  return 0;
}
