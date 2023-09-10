#include <stdio.h>

int main()
{
    int max, min;
    int input;

    // Windows에서는 Ctrl + Z, Linux에서는 Ctrl + D를 누르면 EOF를 입력할 수 있다.
    while(scanf("%d", &input) != EOF)
    {
        if(input == 0)
        {
            break;
        }

        else {
            if(input > max)
            {
                max = input;
            }
            if(input < min)
            {
                min = input;
            }
        }
    }

    printf("%d %d", max, min);
    return 0;
}