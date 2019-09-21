#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "coeffs.h"


int main()
{
int a[2] [2];
char v[2] [2];
char  w[2] [2];

double **c,**d,**aug,**n,C;
float m1,m;
    c=loadtxt("./data/r.dat",2,1);
     d=loadtxt("./data/x.dat",2,1);
     aug=loadtxt("./data/z.dat",2,2);
     m1=(float) 4/5;
     m=sqrt(m1);
     n=loadtxt("./data/n.dat",2,1);
     //m= (float)sqrt(4/5);
     //e=a@aug@b
//print(e)
//e=72

//equation of hyperbola
//3(x*x)-4(y*y)=72
//finding slope
//y1=7*np.sqrt(3)
//y2=(m(24+18))/np.sqrt(24-18*(m**2))
//y1=y2






     printf("m=%f",m);
     printf("n=%f  %f",n[0][0],n[1][0]);
     C=7*sqrt(3);



    return 0;
}
