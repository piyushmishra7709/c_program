#include <stdio.h>

int result(int num)
{
    if (num <= 100)
    {
        printf("%d \n", num);
        result(num + 1);
    }
}
int main()
{
    int a = 1;
    result(a);
    return 0;
}
