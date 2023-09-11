#include <stdio.h>

int main()
{
    int a, b, R, N;
    
    scanf("%d %d %d", &a, &b, &R);
    scanf("%d", &N);

    int x[N], y[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    int count = 0;
    for(int i = 0; i < N; i++)
    {
        if((x[i]-a)*(x[i]-a) + (y[i]-b)*(y[i]-b) >= R*R)
        {
            printf("silent\n");
        }
        else
        {
            printf("noisy\n");
        }

        count++;
    }

    return 0;    
}