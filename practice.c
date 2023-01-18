#include <stdio.h>

int main(void)
{
    int num, count;
    scanf("%d", &num);

    for(count = 2; count < num; count++)
    {
        if(num % count == 0)
        {
            break;
        }
    }

    if(count == num)
    {
        printf("素数です。\n");
    }
    else
    {
        printf("素数ではありません。\n");
    }

    return 0;
}
