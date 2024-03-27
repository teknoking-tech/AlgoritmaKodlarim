#include <stdio.h>
//furkan yorgun 2020717019
int main() {
    int i, n, t1 = 1, t2 = 2, nextTerm;
        printf("kacinci terime kadar yazdirmak istiyosunuz: ");
            scanf("%d", &n);
                   printf("Fibonacci Serileri: ");

                for (i = 1; i <= n; ++i) {
             printf("%d, ", t1);
          nextTerm = t1 + t2;
        t1 = t2;
       t2 =nextTerm ;
    }

    return 0;
}
