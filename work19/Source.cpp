#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int word(char*arr) {
	int i = 0;
	int sumc = 0;
	int suma = 0;
	int sumt = 0;
	while (arr[i] != '\0') {
		if (arr[i] == 'c') {
			sumc++;
		}
		if (arr[i] == 'a') {
			suma++;
		}
		if (arr[i] == 't') {
			sumt++;
		}
		i++;
	}
	if (sumc < suma) {
		if (sumc < sumt) {
			return sumc;
		}
		else {
			return sumt;
		}
	}
	else {
		if (suma < sumt) {
			return suma;
		}
		else {
			return sumt;
		}
	}
}
int main() {
	char arr[10000];
	scanf("%s", arr);
	printf("cat : %d", word(arr));
	return 0;
}