#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 12; //format specifier %d
    int x = 22;
    char initial_name = "d"; //format specifier %c
    float my_grade = 92.2; //format specifier %f
    float y = 123.456789;

    printf("age: %d \n", age);
    printf("initial letter of the name: %c \n", initial_name);
    printf("My Grade: %f \n", my_grade);
    printf("My Grade with specific number of decimal %.2f \n",my_grade);
    return 0;
}
