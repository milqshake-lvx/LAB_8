#include <stdio.h>, <locale.h>

int main() {
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
