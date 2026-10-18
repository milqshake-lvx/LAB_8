#include <stdio.h>, <locale.h>

int main() {
	//Вариант 20: Вычислите вещественное значение 1 + 1 / 2 + 1 / 3 + … + 1 / N для целого N, заданного пользователем
	double res = 0;
	int N;

	printf("input int: ");
	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		printf("%lf + 1/%d = ", res, i);
		printf("%lf\n", res += 1. / i);
	}
	printf("output: %lf", res);

	return 0;
}