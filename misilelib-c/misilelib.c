#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int int_input(char printstr[]) {
    int retval;
    printf("%s", printstr);
    scanf("%d", &retval);
    return retval;
}

float float_input(char printstr[]) {
    float retval;
    printf("%s", printstr);
    scanf("%f", &retval);
    return retval;
}

double double_input(char printstr[]) {
    double retval;
    printf("%s", printstr);
    scanf("%lf", &retval);
    return retval;
}

// you need to free buffer after using return value of this function!!!, it's real important!!!
char* multiplechars(char printstr[], int size) {
    char* buffer;
    buffer = (char*)malloc(sizeof(char) * size);
    printf("%s", printstr);
    fgets(buffer, size, stdin);
    return buffer;
}

bool compare_strs(char char1[], char char2[]) {
    return strcmp(char1, char2) == 0;
}

char* split (char buf[]) {
    int i = 0;
    char *p = strtok(buf, "/");
    char *array[sizeof(p)];

    while (p != NULL){
        array[i++] = p;
        p = strtok(NULL, "/");
    }

    return p;
}
