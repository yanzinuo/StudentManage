//���ѧ����¼���� 
#include "student.h"
struct stu_type stu[100];
int stu_num=0;
void add()
{
    int i=stu_num;
    printf("˵������������ѧ����Ϣ���������ѧ��Ϊ0ʱ��ʾ�������\n");
    while(1)
    {
        printf("�������%d��ѧ������Ϣ",i+1);
        printf("������ѧ��");
        scanf("%s",stu[i].name);
        if(strcmp(stu[i].num,"0")==0)
            break;
        printf("����������:");
        scanf("%s",stu[i].name);
        printf("���������䣺");
        scanf("%d",&stu[i].age);
        printf("������C���Գɼ���");
        scanf("%d",&stu[i].c);
        printf("��������ѧ�ɼ�");
        scanf("%d",&stu[i].math);
        printf("������Ӣ��ɼ�");
        scanf("%d",&stu[i].en);;
        stu[i].sum=stu[i].c+stu[i].math+stu[i].en;
        stu[i].ave=( float)stu[i].sum/3;
        i++;         
    }
    stu_num=i;
    printf("�ܹ�������%d��ѧ������Ϣ\n",stu_num);
}







































