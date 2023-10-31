#include <stdio.h>
#include <stdlib.h>

int main()
{
int work_time=0,hr_pay=0;
double month_pay=0;
scanf("%d%d",&work_time,&hr_pay);
if(work_time<=60)
   month_pay=work_time*hr_pay;
if(work_time>60&&work_time<=120)
   month_pay=work_time*hr_pay*1.33;
if(work_time>120)
   month_pay=work_time*hr_pay*1.66;

printf("%.1f",month_pay);

}

