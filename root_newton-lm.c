#include<stdio.h>
#include<math.h>
float f(float x)
{
    return x*exp(x)-3;
}
float df (float x)
{
    return (x+1)*exp(x);
}
int main()
{
    float h, x0, x1, allerr=0.001;
    while (1)
    {
        h=f(x0)/df(x0);
        x1=x0-h;
        if (fabs(h) < allerr)
        {
            printf("After iterations, root = %8.6f\n",x1);
            return 0;
        }
        x0=x1;
}
}
