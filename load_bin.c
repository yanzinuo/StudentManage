//�Զ����Ʒ�ʽ���ļ��ж�ȡѧ����¼����
#include "student.h"

void load_bin()
{
    FILE *fp;
    char fname[20];
    int i=0;//��ȡ�ļ�¼
    printf("�������ļ�������stu.dat��:");
    scanf("%s",fname);
    if((fp=fopen(fname,"rb"))==NULL)
    {
        printf("���ܴ��ļ����ļ���ȡʧ�ܣ�\n");
        return;
    } 
    while(!feof(fp))
    {
        fread(&stu[i],sizeof(struct stu_type),1,fp);
        i++;
    }
    stu_num=i-1;//�����һ�Σ����i-1 
    printf("���ļ��гɹ���ȡ%d����¼!\n",stu_num);
    fclose(fp);
} 










