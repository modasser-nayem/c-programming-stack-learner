#include <stdio.h>

int main(void){

    char ch = 'T';
    int r = (int)ch + 100;
    printf("%c %d %x\n", ch, ch, ch);
    printf("Result: %d\n", r);

    //float f = r;
    printf("Float: %f\n", (float)r);

    float a = 4.5f;
    float b = 5.3f;
    float c = 6.2f;

    int result = a + b + c;
    printf("Total (No conversion): %d\n", result);

    int result2 = (int)a + (int)b + (int)c;
    printf("Total : %d\n", result2);
    

    return 0;
}

// gcc type-conversion.c -o type-conversion && ./type-conversion

