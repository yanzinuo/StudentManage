#include<conio.h> //getche()���õ� 
#include<stdlib.h>//exit()�õ� 
#include<string.h>//stremp()�õ� 

struct stu_type 
{
    char num[15];//ѧ�� 
    char name[10];//���� 
    int age;//���� 
    int c;//C���Է��� 
    int math;//��ѧ���� 
    int en;//Ӣ����� 
    int sum;//�ܷ� 
    float ave;//ƽ���� 
};

extern int stu_num;//������ѧ������ 
extern struct stu_type stu[];//ѧ������ 

void add();
void display();
void modify();
void del();
void find();
void compute();
void sort();
void save_txt();
void load_txt();
void save_bin();
void load_bin(); 
