#include <stdio.h>
int main()
{
    int age;
    printf("enter your age as%d\n");
    scanf("%d",&age);
    printf("you have enter your age as %d\n",age);

    if(age>=18){
        printf("you can vote!");
    }

    else{
        printf("you cannot vote !");
    }
    return 0;
}
