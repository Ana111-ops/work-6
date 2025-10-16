#define _CRT_SECURE_NO_DEPRECATE 
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "RUS");

	int x;

	puts("введите шестизначное число:");
	scanf("%d", &x);
	
	int a1 =  x / 100000;           // первая цифра
	int a2 = (x / 10000) % 10;     // вторая цифра
	int a3 = (x / 1000) % 10;      // третья цифра
	int a4 = (x / 100) % 10;       // четвертая цифра
	int a5 = (x / 10) % 10;        // пятая цифра
	int a6 = x % 10;               // шестая цифра

	if (a1 + a2 + a3 == a4 + a5 + a6) {
		printf("число счастливое");
	}
	else {
		printf("число несчастливое");
	}

	return 0;
}