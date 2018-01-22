//查找学生记录函数
#include "student.h"
void find()
{
    char str[15];
    int i,flag=0;//flag是标志位，用于判断学生是否找到，1为找到
    printf("请输入要查找的学生学号：");
    scanf("%s",str);
    for(i=0;i<stu_num;i++)
        if(strcmp(str,stu[i].num)==0)
        {
            printf("学生学号\t姓名\t年龄\t语言\t数学\t英语\t总分\t平均分\n");
            printf("%-16s\t%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",stu[i].num,
            stu[i].name,stu[i].age,stu[i].c,stu[i].math,stu[i].en,stu[i].sum,
            stu[i].ave);
            flag=1;
        } 
        if(flag==0)
            printf("没有找到符合条件的学生\n"); 
} 
