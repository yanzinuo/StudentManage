//ɾ��ѧ����¼����
#include "student.h"
void del()
{
    char str[15],m;
    int i,j,flag=0;//flag�Ǳ�־λ�������ж�ѧ���Ƿ��ҵ���1Ϊ�ҵ� 
    printf("������Ҫɾ����ѧ��ѧ�ţ�");
    scanf("%s",str);
    for(i=0;i<stu_num;i++)//���Ҹ�ѧ�� 
        if(strcmp(str,stu[i].num)==0)//���ҵ� 
        {
            //����ʾ��ѧ������Ϣ
            printf("ѧ��ѧ��\t����\t����\tC ����\t��ѧ\tӢ��\t�ܷ�\tƽ����\n");
            printf("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",stu[i].num,stu[i].name,
            stu[i].age,stu[i].c,stu[i].math,stu[i].en,stu[i].sum,stu[i].ave);
            printf("ȷ��ɾ����ѧ������Ϣ�𣿣�y/n��:");
            m=getche();
            if(m=='y'||m=='Y');
            {
                stu_num--;//ѧ����������һ 
                //����ѧ������ļ���ǰ��һ��
                for(j=i;j<stu_num;j++)
                    stu[j]=stu[j+1];
                printf("\n��¼ɾ���ɹ���\n"); 
            } 
            flag=1;
        }
        if(flag==0)
           printf("û���ҵ�����������ѧ��ѧ��\n");
     
}
 
