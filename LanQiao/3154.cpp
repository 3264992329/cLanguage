#include<stdio.h>
#include<string.h>

int main() {
	int sum = 0;

	int k;
	char s[9999];
	char c1, c2;
	printf("�����볤��k:");
	scanf("%d",&k);
	

	printf("�������ַ���:");
	scanf("%s", s);
	int n = strlen(s);

	printf("�����뿪ͷ�ַ�c1:");
	getchar();
	scanf("%c", &c1);
	printf("�������β�ַ�c2:");
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
