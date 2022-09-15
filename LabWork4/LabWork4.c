#include<stdio.h>
#include<locale.h>
#define D 2.54
#define K 1.852
#define F 2.704

void calc() {
	int num1, num2;
	puts("Введите число с клавиатуры");
	scanf("%d", &num1);
	printf("%-Введенное число %d", num1);
	puts("\nВведите второе число с клавиатуры");
	scanf("%d", &num2);
	printf("%-Введенное число %d", num2);
	printf("\nРезультат перемножения чисел равен %d", num1 * num2);
	printf("\nРезультат деления чисел равен %d", num1 / num2);
	printf("\nРезультат остаток от деления чисел равен %d", num1 % num2);
	printf("\nРезультат сложения чисел равен %d", num1 + num2);
	printf("\nРезультат вычитания чисел равен %d", num1 - num2);

}
void dmtosm() {
	int dym;
	float result;
	puts("Введите целое число дюймов для перевода в сантиметры");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d англиских дюймов – это %.1f см \n%d старолитовских дюймов – это %.1f см ", dym, result,dym, F*dym);;
}
void seamtokm() {
	int dym1;
	float result1;
	puts("Введите целое число Морских миль для перевода в километры");
	scanf("%d", &dym1);
	result1 = K * dym1 / 1000.;
	printf(" %d морских миль – это %9.9f километров", dym1, result1);
}


void main() {
	setlocale(LC_ALL, "RUS");
	//calc();
	dmtosm();
	//seamtokm();
}