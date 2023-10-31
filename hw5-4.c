
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
main()
{
int H=0,M=0;
scanf("%d%d",&H,&M);
assert (H>=0&&H<=12&&M>=00&&M<=59);
float angle,angle_H,angle_M;
angle_H=(float)(30*H)+(float)(0.5*M);
angle_M=(float)(6*M);

if(angle_H>angle_M)
    angle=angle_H-angle_M;
else
    angle=angle_M-angle_H;
if(angle>180)
    angle=360-angle;

printf("%.3f",angle);


}
