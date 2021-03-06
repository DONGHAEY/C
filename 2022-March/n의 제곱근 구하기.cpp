#include <stdio.h>

double power(double a, int n)
{
    if (a == 0) { return 0; }
    int i = 0;
    double ret = 1;
    for (i = 0; i < n; i++)
    {
        ret *= a;
    }
    return ret;
}

double root(double a, int n, double precision)
{
    double ret = 1;
    while ((power(ret, n) - a) < -precision || (power(ret, n) - a) > precision)
    {
        ret = ret * (n - 1) / n + a / (n * power(ret, n - 1));
    }
    return ret;
}

int main()
{
    int a, n;
    scanf("%d %d", &a, &n);
    printf("%.4f\n", root(a, n, 0.0001));
    return 0;
}
