#include<stdio.h>
int main ()
{
  int a = 1; //  4 bytes 1 byte = 8 bites
  float b = 2.5;
    char c = 'A';  // 1 byte


    // checking size of data types
    // depends on system architecture

    printf("size of in : %zu bytes\n", sizeof(a));
    printf("size of float : %zu bytes\n", sizeof(b));
    printf("size of char : %zu bytes\n", sizeof(c));



    int age = 20;
float pi = 3.14f;
double dbl = 9.876;
char ch = 'A';
char name[] = "Hassan";
unsigned int marks = 95;
int num = 255;

printf("Age = %d\n", age);
printf("Pi = %f\n", pi);
printf("Value = %f\n", dbl);      // double in printf uses %f
printf("Character = %c\n", ch);
printf("Name = %s\n", name);
printf("Marks = %u\n", marks);
printf("Hexadecimal = %x\n", num);
printf("Battery = 80%%\n");

return 0;

}