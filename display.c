//��ʾѧ����¼����
#include "student.h"
void dispay()
{
    int i;
    if(stu_num == 0)
    {
        printf(" \n\tѧ����ϢΪ�գ�");
        return; 
    }
    printf("ѧ��ѧ��\t����\t����\tC ����\t��ѧ\tӢ��\t�ܷ�\tƽ����\n");
    for(i=0;i<stu_num;i++)
        printf("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",stu[i].num,stu[i].name,
        stu[i].age,stu[i].c,stu[i].math,stu[i].en);
} 
