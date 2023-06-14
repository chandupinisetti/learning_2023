#include<stdio.h>
#include<conio.h>
int biggest_of_2(int,int);
int main(){
    int a,b;
    printf("\n Enter two numbers a and b: ");
    scanf("%d%d",&a,&b);
    biggest_of_2(a,b);
    getch();
    return 0;

}
int biggest_of_2(int a,int b)
{
    if(a>b)
    {
        printf("\n a is bigger than b");
    }
    else if(b>a)
    {
        printf("\n b is bigger than a");
    }
    else
        printf("\n Both are equal");

} 
