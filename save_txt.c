//���ı���ʽ����ѧ����¼���ļ��ĺ���
#include"student.h"

void save_txt()
{
    FILE *fp;
    char fname[20];
    int i;
    printf("�������ļ������磺stu.txt����");
    scanf("%s",fname);
    if((fp=fopen(fname,"w"))==NULL)
    {
        printf("���ܴ��ļ����ļ�����ʧ�ܣ�\n");
        return; 
    }
    for(i=0;i<stu_num;i++)
        fprintf(fp,"%s %s %d %d %d %d %d %5.2f\n",stu[i].num,stu[i].name,
            stu[i].age,stu[i].c,stu[i].math,stu[i].en,stu[i].sum,stu[i].ave);
    printf("�ļ�����ɹ���\n");
    fclose(fp);
} 
