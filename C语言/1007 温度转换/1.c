#include <stdio.h>
#include <math.h>
int main()
{
    double c,f;
    scanf("%lf",&f);
    c = (5 * (f - 32))/9;
    printf("%.2lf\n",c);
    return 0;
}
