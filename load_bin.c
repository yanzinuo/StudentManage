//以二进制方式从文件中读取学生记录函数
#include "student.h"

void load_bin()
{
    FILE *fp;
    char fname[20];
    int i=0;//读取的记录
    printf("请输入文件名（如stu.dat）:");
    scanf("%s",fname);
    if((fp=fopen(fname,"rb"))==NULL)
    {
        printf("不能打开文件，文件读取失败！\n");
        return;
    } 
    while(!feof(fp))
    {
        fread(&stu[i],sizeof(struct stu_type),1,fp);
        i++;
    }
    stu_num=i-1;//多读了一次，因此i-1 
    printf("从文件中成功读取%d调记录!\n",stu_num);
    fclose(fp);
} 










