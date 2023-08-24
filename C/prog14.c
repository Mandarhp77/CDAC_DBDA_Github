#include<stdio.h>
int main(){
    int choice;
    float radius, side, length, breadth, area, Height, Base;
    printf("Enter choices: 1 for circle, 2 for square, 3 for rectangle and 4 for Triangle: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("Enter the Radius");
            scanf("%f", &radius);
            area = 3.14*(radius*radius);
            printf("Area of Circle is%f", area);

        case 2:
            printf("Enter the side length");
            scanf("%f", &side);
            area = side*side;
            printf("Area of square is%f", area);

        case 3:
            printf("Enter the Length and Width");
            scanf("%f%f", &length, &breadth);
            area = length*breadth;
            printf("Area of Rectangle is%f", area);

        case 4:
            printf("Enter the Base and Height");
            scanf("%f%f", &Base, &Height);
            area = 0.5*Base*Height;
            printf("Area of Triangle is%f", area);

    }
}
