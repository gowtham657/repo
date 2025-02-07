#include <stdio.h>

int main() {
 int a,b,result,choice;
 scanf("%d%d",&a,&b);
 printf("enter the choice 1.add 2.sub 3.mul 4.div");
 scanf("%d",choice);
 switch(choice)
 {
    case 1:
    result=a+b;
    printf("the addition of %d and %d ",a ,b,result);
    case 2:
    result=a-b;
    printf("the subtraction of %d and %d ",a ,b,result);

    case 3:
    result=a*b;
    printf("the multiplication of %d and %d ",a ,b,result);

    case 4:
    result=a/b;
    printf("the division of %d and %d ",a ,b,result);

    default:
    printf("enter the valid choice ");
    break;
 }
return 0;

}