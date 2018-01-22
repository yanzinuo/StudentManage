//删除学生记录函数
#include "student.h"
void del()
{
    char str[15],m;
    int i,j,flag=0;//flag是标志位，用于判断学生是否找到，1为找到 
    printf("请输入要删除的学生学号：");
    scanf("%s",str);
    for(i=0;i<stu_num;i++)//查找该学生 
        if(strcmp(str,stu[i].num)==0)//已找到 
        {
            //先显示该学生的信息
            printf("学生学号\t姓名\t年龄\tC 语言\t数学\t英语\t总分\t平均分\n");
            printf("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",stu[i].num,stu[i].name,
            stu[i].age,stu[i].c,stu[i].math,stu[i].en,stu[i].sum,stu[i].ave);
            printf("确认删除该学生的信息吗？（y/n）:");
            m=getche();
            if(m=='y'||m=='Y');
            {
                stu_num--;//学生总人数减一 
                //将该学生后面的几率前移一格
                for(j=i;j<stu_num;j++)
                    stu[j]=stu[j+1];
                printf("\n记录删除成功！\n"); 
            } 
            flag=1;
        }
        if(flag==0)
           printf("没有找到符合条件的学生学号\n");
     
}
 
