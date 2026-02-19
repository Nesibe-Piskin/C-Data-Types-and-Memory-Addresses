#include <stdio.h>

int main(){

    char character = 'C';
    int integer1 = 1;
    float real_number = 10.4f;
    long long large_integer = 989898989ll;

    printf ("The value of the character variable = %c, the address of the character variable= %u\n", character, &character);
    printf ("The value of the integer variable = %d, the address of the integer variable= %u\n", integer1, &integer1);
    printf ("The value of the variable real_number = %f, The address of the variable real_number= %u\n", real_number, &real_number);
    printf ("The value of the large_integer variable = %d, The address of the large_integer variable= %u\n", large_integer, &large_integer);

    return 0;

}