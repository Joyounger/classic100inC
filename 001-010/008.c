//题目：输出9*9口诀。
//程序分析：分行与列考虑，共9行9列，i控制行，j控制列。


#include "stdio.h"
main()
{
　int i,j,result;
　printf("\n");
　for (i=1;i<10;i++)
　　{ for(j=1;j<10;j++)
　　　　{
　　　　　result=i*j;
　　　　　printf("%d*%d=%-3d",i,j,result); /*-3d表示左对齐，占3位*/
　　　　}
　　　printf("\n");/*每一行后换行*/
　　}
}