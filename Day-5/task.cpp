#include <stdio.h>

int main() {
    int n, mark, sum = 0;
    
    printf("  enter the number of subjects: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("enter the grde   %d: ", i + 1);
        scanf("%d", &mark);
        sum += mark;
    }

    printf(" total  = %d\n", sum);

    if (sum >= 90) {
        printf("exelent \n");
    } else if (sum >= 75) {
        printf("very good\n");
    } else if (sum >= 60) {
        printf("good \n");
    } else if (sum >= 50) {
        printf("D \n");
    } else {
        printf("F\n");
    }

    return 0;
}
