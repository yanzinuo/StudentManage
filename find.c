//����ѧ����¼����
#include "student.h"
void find()
{
    char str[15];
    int i,flag=0;//flag�Ǳ�־λ�������ж�ѧ���Ƿ��ҵ���1Ϊ�ҵ�
    printf("������Ҫ���ҵ�ѧ��ѧ�ţ�");
    scanf("%s",str);
    for(i=0;i<stu_num;i++)
        if(strcmp(str,stu[i].num)==0)
        {
            printf("ѧ��ѧ��\t����\t����\t����\t��ѧ\tӢ��\t�ܷ�\tƽ����\n");
            printf("%-16s\t%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",stu[i].num,
            stu[i].name,stu[i].age,stu[i].c,stu[i].math,stu[i].en,stu[i].sum,
            stu[i].ave);
            flag=1;
        } 
        if(flag==0)
            printf("û���ҵ�����������ѧ��\n"); 
} 
