//修改学生记录函数
#include "student.c"

void modify()
{
    char str[15];
    int i,m,flag=0;//flag是标志位，用于判断学生是否找到，1为找到 
    printf("请输入要修改的学生学号："); 
    scanf("%s",str);
    for(i=0;i<stu_num;i++)//查找该学生 
        if(strcmp(str,stu[i].num)==0)//已找到 
        {
            flag=1;
            //先显示该学生的信息
            printf("学生学号\t姓名\t年龄\tC 语言\t数学\t英语\t总分\t平均分\n");
            printf("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",stu[i].num,stu[i].name,
            stu[i].age,stu[i].c,stu[i].math,stu[i].en);
            printf("确认修改该学生的信息吗？（y/n）:");
            m=getche();
            if(m=='y'||m=='Y')//在修改 
            {
                printf("\n 请重新输入该学生的信息\n");
                printf("\n请输入学号："); 
                scanf("%s",stu[i].num);
                printf("请输入姓名：");
                scanf("%d",stu[i].name);
                printf("请输入年龄：");
                scanf("%d",stu[i].age);
                printf("请输入C语言成绩：");
                scanf("%d",stu[i].c);
                printf("请输入数学成绩：");
                scanf("%d",stu[i].math);
                printf("请输入英语成绩：");
                scanf("%d",stu[i].en);
                stu[i].sum=stu[i].c+stu[i].math+stu[i].en;
                stu[i].ave=(float)stu[i].sum/3; 
            }
        } 
        if(flag==0)
            printf("没有找到符合条件的学生\n");
} 
























