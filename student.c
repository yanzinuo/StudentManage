#include"student.h"

void main()
{
    int menu_choose();  //�˵��������� 
    while(1)
    {
        int choice=menu_choose();//���ò˵����� 
        switch(choice)
        {
            case 1: add();     break;   //���ѧ����Ϣ 
            case 2: display(); break;   //��ʾѧ����Ϣ 
            case 3: modify();  break;   //�޸�ѧ����Ϣ 
            case 4: del();     break;   //ɾ��ѧ����Ϣ 
            case 5: find();    break;   //����ѧ����Ϣ 
            case 6: compute(); break;   //ͳ�Ʋ�������������߷ֺ�ƽ���� 
            case 7: sort();    break;   //�ܷ���λ 
            case 8: save_txt();break;   //���ݱ��浽�ļ�(�ı���ʽ) 
            case 9: load_txt();break;   //���ļ��ж�ȡ���ݣ��ı���ʽ�� 
            case 10:save_bin();break;   //���ݱ��浽�ļ��������Ʒ�ʽ�� 
            case 11:load_bin();break;   //���ļ��ж������ݣ������Ʒ�ʽ�� 
            case 12:exit(0);            //�˳����� 
        }
    }
}

int menu_choose()
{
    int choice;
    printf("\n                  ��ӭʹ��ѧ������ϵͳ\n");
    printf("--------------------------------------\n");
    printf("1.���ѧ����Ϣ             2.��ʾѧ����Ϣ\n");
    printf("3.�޸�ѧ����Ϣ             4.ɾ��ѧ����Ϣ\n");
    printf("5.����ѧ����Ϣ             6.ͳ�Ʋ�������������߷ֺ�ƽ����\n");
    printf("7.�ܷ�����                 8.�������ļ����ı���ʽ��\n");
    printf("9.���ı����루�ı���ʽ��   10.�������ļ��������Ʒ�ʽ��\n");
    printf("11.���ļ����루�����Ʒ�ʽ��12.�˳�����\n");
    printf("--------------------------------------\n");
    printf("��ѡ����ģ�飬��������1-12");
    
    while(1)
    {
        scanf("%d",&choice);
        if(choice>=1 && choice<=12)
            break;
        else
            printf("�������ֲ���ȷ");    
            
    }
    return choice;
}



























