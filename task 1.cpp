#include <stdio.h>
int main() {
    float marks, income;

    printf("Enter marks percentage: ");
    scanf("%f", &marks);
	printf("Enter family income: ");
    scanf("%f", &income);

    if (marks >= 80 || income < 50000) {
        printf("Student qualifies for the scholarship.\n");
    } else {
        printf("Student does not qualify for the scholarship.\n");
    }

    }
