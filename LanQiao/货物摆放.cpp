#include <iostream>
using namespace std;
int main()
{
  // ���ڴ��������Ĵ���
  unsigned long long  N=2021041820210418;
  long long  i,j,k,sum=0;
  for(i=1;i*i*i<=N;i++)     //ע��ÿ��forѭ������ֹ��������
    if(N%i==0)
      for(j=i;i*j*j<=N;j++)    //j=i+1�Ͳ����ˣ�������j=i
       if(N/i%j==0){
         k=N/i/j;
        if(i==j||i==k||j==k)sum+=3;
      
       else if(i==j&&i==k)sum++;//3����ͬ
       else sum+=6;}
      
    
  
  cout<<sum;
  return 0;
}
