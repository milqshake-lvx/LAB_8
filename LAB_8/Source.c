#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, ".UTF-8");
    task_1();
    task_2();

    return 0;
}

int task_2() {
    //Индивидуальный вариант 10: Подсчитать количество чисел, которые при делении на 7 дают остаток 0 или 1
    int n, m;
    int s = 0;
    int k = 0;
    int state;

    printf("input start stop: ");
    scanf("%d %d", &n, &m);

    for (int i = m; i >= n; i--) {
        if ((i % 7 == 0) || (i%7 == 1) ? 1 : 0) {
            printf("выполнено %d раз\n", ++k);
            s += i;
        }
    }

    printf("Количество чисел: %d ", k);
    printf("Сумма: %d ", s);

    return 0;
}


int task_1() {
    int n; char c1, c2; 
    printf("input 'int char char': "); 
    scanf("%d %c %c", &n, &c1, &c2);

    putchar('+');
    for (int i = 1; i <= n; i++) {
        printf("%c!", i <= n / 2 ? c1 : c2);
    }
    putchar('+');
    printf("\n------------------------------------------------\n");
    return 0;
}