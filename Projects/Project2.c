#include<stdio.h>
int main () {


    int choice;
    float length, width, radius, area;

    printf("choose the shap to calculate the area \n");
    printf("1.  Rectangle \n");
    printf("2. Circle \n");  
    printf("3. Square \n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice = 1){
        printf( "Enter Length  :" );
        scanf("%f", &length );
        printf( "Enter width  :" );
        scanf("%f", &width );
        area = length * width;
        printf("Area if rectangle is : %.2f\n", area);
    }
    else if(choice = 2){
        printf( "Enter radius  :" );
        scanf("%f", &radius );
        area = 3.14 * radius * radius;
        printf("Area of circle is : %.2f\n", area);
    }
    else if(choice = 3){
        printf( "Enter length of side  :" );
        scanf("%f", &length );
        area = length * length;
        printf("Area of square is : %.2f\n", area);
    }
    else{
        printf("Invalid choice! Please choose a valid shape.\n");
    }

    return 0;
}