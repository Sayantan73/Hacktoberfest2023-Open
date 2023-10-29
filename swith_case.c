#include<stdio.h>
int main ()
{
    int num;
    printf ("Enter your choisen number between 1 to 3 :\t");
    scanf("%d",&num);

    switch (num)
    {
    case 1:
        printf ("You have chosen 1\n");
        break;
    case 2:
        printf ("You have chosen 2\n");
        break;
    case 3:
        printf ("You have chosen 3\n");
        break;    
    
    default:
        printf ("You have a smart choice\n");
        break;

    }
    return 0;
}
