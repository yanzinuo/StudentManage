//ͳ��c���Բ�������������߷ֺ�ƽ���� 
#include "student.h"
void compute()
{
    int i,n=0,max=0,sum=0;//n��max��sum�ᱮ��Ӧ��������������߷ֺ��ܷ�
    for(i=0;i<stu_num;i++)
    {
        if(stu[i].c<60)
            n++;
        if(max<stu[i].c)
            max=stu[i].c;
        sum=sum+stu[i].c;
    } 
    printf("    C����ͳ�ƽ�����£�\n");
    printf("����������\t��߷�\tƽ����\n");
    printf("  %d      \t  %d  \t %5.2f\n",n,max,(float)sum/stu_num); 
} 
