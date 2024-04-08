#include <iostream>
using namespace std;
int main()
{
  // 请在此输入您的代码
  unsigned long long  N=2021041820210418;
  long long  i,j,k,sum=0;
  for(i=1;i*i*i<=N;i++)     //注意每个for循环的终止条件！！
    if(N%i==0)
      for(j=i;i*j*j<=N;j++)    //j=i+1就不对了，必须是j=i
       if(N/i%j==0){
         k=N/i/j;
        if(i==j||i==k||j==k)sum+=3;
      
       else if(i==j&&i==k)sum++;//3个相同
       else sum+=6;}
      
    
  
  cout<<sum;
  return 0;
}
