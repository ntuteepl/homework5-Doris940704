#include <stdio.h>
#include <stdlib.h>

int main()
{
int call_min=0;
double call_pay=0;
scanf("%d",&call_min);
if(call_min<=800)
   call_pay=0.9*call_min;
if(call_min>800&&call_min<1500)
   call_pay=(0.9*call_min)*0.9;
if(call_min>=1500)
   call_pay=(0.9*call_min)*0.79;

printf("%.1f",call_pay);

}

