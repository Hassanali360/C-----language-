#include<stdio.h>
int main(){
    int a; 
    char name [] = "";
   
    
     printf("Enter a number: ");
       scanf("%d", &a);
       printf("You entered: %d\n", a);
        printf("Enter your name: ");
        scanf("%s", name);
       printf("Name is: %s\n", name);
    return 0;
}
