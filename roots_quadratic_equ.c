#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c;
    double x;
    double r1,r2,r;
    scanf("%lf %lf %lf",&a,&b,&c);
    x=(b*b)-4*a*c;
    if(x>0){
        r1=(-b+sqrt(x))/(2*a);
        r2=(-b-sqrt(x))/(2*a);
        printf("%.2lf %.2lf ",r1,r2);
    }
    else if(x==0){
        r1==r2==r;
        r=-b/(2*a);
        printf("%.2lf %.2lf ",r,r);
    }
    else{
        float i;
        r=-b/(2*a);
        i=sqrt(-x)/(2*a);
        printf("%.2lf+%.2lfi and %.2lf-%.2lfi ",r,i,r,i);
    }
}
