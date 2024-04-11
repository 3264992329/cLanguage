#include<stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int k;
	char s[999999];
	char c1,c2;
	int sum=0,cut=0;
	scanf("%d\n",&k);
	scanf("%s %c %c",&s,&c1,&c2);
	
	int t=strlen(s);
	for(int i=0,j=k-1;i<t;i++,j++){
		if(s[i]==c1){cut++;}
		if(s[j]==c2){sum+=cut;}
	}
	printf("%d",sum);
	return 0;
}
