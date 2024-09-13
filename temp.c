#include<stdio.h>
#include<conio.h>
void main()
{
    int temp;
    printf("enter your body temperature.");
    scanf("%d",&temp);
    if(temp>37){
        printf("you have fever");
    }
    else{
        printf("you dont have fever");
    }
    getch();
}