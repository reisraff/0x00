#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool flag1 = false;
bool flag2 = false;

void func1(int num1, int num2) {
    if (156 == num1 && 300 == num2) {
        flag1 = true;
        puts("gotcha func1");
    }
}

void func2(int num1, int num2, int num3) {
    if (flag1 && !num1 && 13 == num2 && (num1 + num2) == num3) {
        flag2 = true;
        puts("gotcha func2");
    }
}

void flag(int num1) {
    if (flag1 && flag2 && (num1 - flag1) == flag2) {
        puts("flag{gotcha!}");
        exit(0);
    }
}

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
