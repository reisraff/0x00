#include <stdio.h>

void vuln() {
    char buffer[160];

    printf("Enter your buffer: ");
    gets(buffer);
}

int main() {
    vuln();

    puts("not this time");

    return 1;
}
