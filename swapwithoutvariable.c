#include<stdio.h>
int main() {
    int a,b;
    printf("enter value of a:");
    scanf("%d",&a);
    printf("emter value of b:");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("swapped value of a is %d \n",a);
    printf("swapped value of b is %d \n",b);
    return 0;
    

}