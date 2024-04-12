 #include<stdio.h>
 #include<string.h>
 int main(){
 	long n,k;
 	long a[999999];
 	long min=999999;
 	long temp;
 	scanf("%ld %ld",&n,&k);
 	for(int i=0;i<n;i++){
 		scanf("%ld",&a[i]);
	 }
	 
	for(long j=0;j<k;j++){
		long i;
		for(long i=0;i<n;i++){
		if(a[i]<min){
			min=a[i];
			temp=i;
		}
	}
	a[i-1]+=a[i];
	a[i+1]+=a[i];
	for(long m=i;m<n;m++){
		a[m]=a[m+1];
	}
	n--;
	}
	for(long i=0;i<n;i++){
		printf("%d",a[i]);
	}
	return 0;
 }
