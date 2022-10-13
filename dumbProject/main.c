#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int input, base, number, var1, ostatak1,var2, ostatak2, var3, ostatak3, var4, ostatak4, var5, ostatak5, finalNumber;
void main() {
	scanf("%d", &input);

	base = input % 10;
	number = input / 10;

	var1 = number / base;
	ostatak1 = number % base;

	var2 = var1 / base;
	ostatak2 = var1 % base;

	var3 = var2 / base;
	ostatak3 = var2 % base;

	var4 = var3 / base;
	ostatak4 = var3 % base;

	var5 = var4 / base;
	ostatak5 = var4 % base;

	finalNumber = ostatak5 * 10000 + ostatak4 * 1000 + ostatak3 * 100 + ostatak2 * 10 + ostatak1;
	(base == 3 || base == 4 || base == 5) ? printf("%d", finalNumber) : printf("Pogresan unos!");
	return;
}