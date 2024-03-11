#include<stdio.h>
#include<string.h>

int main() {
	int sum = 0;

	int k;
	char s[9999];
	char c1, c2;
	printf("请输入长度k:");
	scanf("%d",&k);
	

	printf("请输入字符串:");
	scanf("%s", s);
	int n = strlen(s);

	printf("请输入开头字符c1:");
	getchar();
	scanf("%c", &c1);
	printf("请输入结尾字符c2:");
	getchar();
	scanf("%c", &c2);
	

	for (int i=0; i <=n; i++) {
		if (s[i] == c1) {
				int ksum=0;
			for (int j=i; j<=n; j++) {
				ksum++;
				if (s[j] == c2 && ksum >= k) {
					sum++;
				}
			}
		}
	}
	printf("%d", sum);
	return 0;
}
