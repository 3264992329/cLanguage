#include<stdio.h>
#define mod 1000000007
#define max 100005
long long a[max];
long long b[max];
long long t[max];
int main(){
	//最高为N进制
	long long n;
	int ma,mb;
	scanf("%d",&n);
	//第一个数为ma位数
	scanf("%d",&ma);
	for(int i=1;i<=ma;i++){
		scanf("%lld",&a[i]);
	}
	
	// 第二个数为mb位数
	scanf("%d",&mb);
	for(int i=ma-mb+1;i<=ma;i++){
		scanf("%lld",&b[i]);
	}
	
	long long suma=0,sumb=0;
	int min=0;
	
	//t[]存储x进制 
	for(int i=ma;i>=1;i--){
		long long max_val=(a[i]>b[i])?a[i]:b[i];
		t[i]=((max_val+1)>2)?(max_val+1):2;
	}
	
	for(int i=1;i<=ma;i++){
		suma=(suma*t[i]+a[i])%mod;
		sumb=(sumb*t[i]+b[i])%mod;
	}
	
	printf("%lld\n",(suma-sumb+mod)%mod);
	
	return 0;
}
