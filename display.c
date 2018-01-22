//显示学生记录函数
#include "student.h"
void dispay()
{
    int i;
    if(stu_num == 0)
    {
        printf(" \n\t学生信息为空！");
        return; 
    }
    printf("学生学号\t姓名\t年龄\tC 语言\t数学\t英语\t总分\t平均分\n");
    for(i=0;i<stu_num;i++)
        printf("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",stu[i].num,stu[i].name,
        stu[i].age,stu[i].c,stu[i].math,stu[i].en);
} 
