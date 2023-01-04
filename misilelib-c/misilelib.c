
#include <stdio.h>

char single_input(char* printstr) {
    printf("%s", printstr);
    return getchar();
}

int int_input(char* printstr) {
    int retval;
    printf("%s", printstr);
    scanf("%d", &retval);
    return retval;
}

float float_input(char* printstr) {
    float retval;
    printf("%s", printstr);
    scanf("%f", &retval);
    return retval;
}

double double_input(char* printstr) {
    double retval;
    printf("%s", printstr);
    scanf("%lf", &retval);
    return retval;
}

char multiplechars(char* printstr) {
    char retval;
    printf("%s", printstr);
    scanf("%s", &retval);
    return retval;
}