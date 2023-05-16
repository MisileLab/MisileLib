#include <stdbool.h>

char single_input(char printstr[]);
int int_input(char printstr[]);
float float_input(char printstr[]);
double double_input(char printstr[]);

// you need to free buffer after using return value of this function!!!, it's real important!!!
char* multiplechars(char printstr[], int size);

bool compare_strs(char char1[], char char2[]);
char* split (char buf[]);
