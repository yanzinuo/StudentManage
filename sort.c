//ѧ���ܷ��ɸߵ������� 
#include"student.h"

void sort()
{
    int i,j;
    struct stu_type temp;
    for(i=1;i<=stu_num;i++)
        for(j=0;j<stu_num-i;j++)
            if(stu[j].sum<stu[j+1].sum)
            {
                temp=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=temp;
            }
    printf("���������£�\n");
    printf("����\tѧ��ѧ��\t����\t����\tC����\t��ѧ\tӢ��\t�ܷ�\tƽ����\n");
    for(i=0;i<stu_num;i++)
        printf("%d\t%-16s\t%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",i+1,stu[i].num,
            stu[i].name,stu[i].age,stu[i].c,stu[i].math,stu[i].en,stu[i].sum,
            stu[i].ave);    
}

