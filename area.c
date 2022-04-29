#include<stdio.h>
#include<math.h>
int main(){
   int choice;
   printf("***MAIN MENU***\n");
   printf("1.To find area of Triangle\n");
   printf("2.To find area of Square\n");
   printf("3.To find area of Circle\n");
   printf("4.To find area of Rectangle\n");
   printf("5.To find area of Parallelogram\n");
   scanf("%d",&choice);
   switch(choice) {
      case 1: {
         int a,b,c;
         float s,area;
         printf("Enter all the three sides of triangle\n");
         scanf("%d%d %d",&a,&b,&c);
         s=(float)(a+b+c)/2;
         area=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
         printf("Area of Triangle is %.2f\n",area);
         break;
      }
      case 2: {
         float side,area;
         printf("Enter Any one Sides of Square\n");
         scanf("%f",&side);
         area=(float)side*side;
         printf("Area of Square is %.2f\n",area);
         break;
      }
      case 3: {
         float radius,area;
         printf("Enter Radius of Circle\n");
         scanf("%f",&radius);
         area=(float)3.14159*radius*radius;
         printf("Area of Circle %.2f\n",area);
         break;
      }
      case 4: {
         float len,breadth,area;
         printf("Enter Length and Breadth of Rectangle\n");
         scanf("%f %f",&len,&breadth);
         area=(float)len*breadth;
         printf("Area of Rectangle is %.2f\n",area);
         break;
      }
      case 5: {
         float base,height,area;
         printf("Enter base and height of Parallelogram\n");
         scanf("%f %f",&base,&height);
         area=(float)base*height;
         printf("Enter area of Parallelogram is %.2f\n",area);
         break;
      }
      default: {
         printf("Invalid Choice\n");
         break;
      }
   }
}
