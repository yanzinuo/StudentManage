//���ı���ʽ���ļ��ж�ȡѧ����¼����
#include "student.h"

void load_txt()
{
    FILE *fp;
    char fname[20];
    int i=0;
    printf("�������ļ������磺stu.txt��:");
    scanf("%s",fname);
    if((fp=fopen(fname,"r"))==NULL)
    {
        printf("���ܴ��ļ����ļ���ȡʧ�ܣ�\n");
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
    printf("���ļ��гɹ���ȡ%d����¼��\n",i);
    fclose(fp);
} 












