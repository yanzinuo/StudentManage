//�޸�ѧ����¼����
#include "student.c"

void modify()
{
    char str[15];
    int i,m,flag=0;//flag�Ǳ�־λ�������ж�ѧ���Ƿ��ҵ���1Ϊ�ҵ� 
    printf("������Ҫ�޸ĵ�ѧ��ѧ�ţ�"); 
    scanf("%s",str);
    for(i=0;i<stu_num;i++)//���Ҹ�ѧ�� 
        if(strcmp(str,stu[i].num)==0)//���ҵ� 
        {
            flag=1;
            //����ʾ��ѧ������Ϣ
            printf("ѧ��ѧ��\t����\t����\tC ����\t��ѧ\tӢ��\t�ܷ�\tƽ����\n");
            printf("%-16s%s\t%d\t%d\t%d\t%d\t%d\t%5.1f\n",stu[i].num,stu[i].name,
            stu[i].age,stu[i].c,stu[i].math,stu[i].en);
            printf("ȷ���޸ĸ�ѧ������Ϣ�𣿣�y/n��:");
            m=getche();
            if(m=='y'||m=='Y')//���޸� 
            {
                printf("\n �����������ѧ������Ϣ\n");
                printf("\n������ѧ�ţ�"); 
                scanf("%s",stu[i].num);
                printf("������������");
                scanf("%d",stu[i].name);
                printf("���������䣺");
                scanf("%d",stu[i].age);
                printf("������C���Գɼ���");
                scanf("%d",stu[i].c);
                printf("��������ѧ�ɼ���");
                scanf("%d",stu[i].math);
                printf("������Ӣ��ɼ���");
                scanf("%d",stu[i].en);
                stu[i].sum=stu[i].c+stu[i].math+stu[i].en;
                stu[i].ave=(float)stu[i].sum/3; 
            }
        } 
        if(flag==0)
            printf("û���ҵ�����������ѧ��\n");
} 
























