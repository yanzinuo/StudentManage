//以文本方式从文件中读取学生记录函数
#include "student.h"

void load_txt()
{
    FILE *fp;
    char fname[20];
    int i=0;
    printf("请输入文件名（如：stu.txt）:");
    scanf("%s",fname);
    if((fp=fopen(fname,"r"))==NULL)
    {
        printf("不能打开文件，文件读取失败！\n");
        return;
    }
    while(!feof(fp))
    {
        fscanf(fp,"%s %s %d %d %d %d %d %f\n",stu[i].num,stu[i].name,
            &stu[i].age,&stu[i].c,&stu[i].math,&stu[i].en,&stu[i].sum,
            stu[i].ave);
        i++;
    }
    stu_num=i;
    printf("从文件中成功读取%d条记录！\n",i);
    fclose(fp);
} 












