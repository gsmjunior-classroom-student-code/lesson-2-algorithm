#include <stdio.h>

int main()
{
    int a, b, R, N;
    int x, y;
    int i;
    int count = 0;

    scanf("%d %d %d", &a, &b, &R);
    scanf("%d", &N);

    for(i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &y);
        if((x-a)*(x-a) + (y-b)*(y-b) >= R*R)
        {
            printf("silent\n");
        }
        else
        {
            printf("noisy\n");
        }
    }

    return 0;    
}