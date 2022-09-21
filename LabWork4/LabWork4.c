
#include<stdio.h>
#include<locale.h>
#define D 2.54
#define K 1.852
#define F 2.704
#define G 10

void homeworkper() {
	int A, B;
	setlocale(LC_ALL, "RUS");
	puts("Введите ширину прямоугольника ");
	scanf_s("(%d)", &A);
	printf("Ширина прямоугольника = %d \n теперь введите длинну", A);
	scanf_s("%d", &B);
	printf("Длинна прямоугольника = %d \n Периметр прямоугольникак = ", B, A * B * 2);

}
void homeworkkub() {
	setlocale(LC_ALL, "RUS");
	int L;
	puts("Введите длинну ребра куба");
	scanf("%d", &L);
	printf("Длинна ребра куба = %d \n Обьем куба = %d \n Площадь поверхности куба = %d", L, L * L * L, L * L * 6);
}
void homeworkGrav() {
	setlocale(LC_ALL, "RUS");
	int h, m;
	puts("Введите высоту с которой падает тело в метрах");
	scanf("%d", &h);
	printf("Высота с которой падает тело = %d \n Введите массу тела в килограммах", h);
	scanf("%d", &m);
	printf("Масса тела = %d \n Сила тяжести приложенная к этому телу = %d", m, m * G);

}
void homeworkRes() {
	setlocale(LC_ALL, "RUS");
	int r1, r2;
	puts("Введите сопротивление первого резистора");
	scanf("%d", &r1);
	printf("Сопротивление первого резистора = %d \n Теперь введите сопротивление второго резистора", r1);
	scanf("%d", &r2);
	printf("Сопротивление второго резистора = %d \n Общее сопротивление последовательно соединенных резисторов равно %d \n Общее сопротивление последовательно соединенных резисторов равно %d", r2, r1 + r2, (r1 * r2) / (r1 + r2));

}

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
	//dmtosm();
	//seamtokm();
	homeworkper();
	homeworkkub();
	homeworkGrav();
	homeworkRes();

}