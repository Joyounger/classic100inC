//题目：宏#define命令练习(2)


#include "stdio.h"
#define exchange(a,b)
{ \ /*宏定义中允许包含两道衣裳命令的情形，此时必须在最右边加上"\"*/
　int t;\
　t=a;\
　a=b;\
　b=t;\
}
void main(void)
{
int x=10;
int y=20;
printf("x=%d; y=%d\n",x,y);
exchange(x,y);
printf("x=%d; y=%d\n",x,y);
}