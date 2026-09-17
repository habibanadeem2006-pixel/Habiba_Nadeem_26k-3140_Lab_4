#include <stdio.h>
int main() {
    char name[100];

    printf("Enter student's full name: ");
    fgets(name, sizeof(name), stdin);
	puts("Student name is:");
    puts(name);

}
