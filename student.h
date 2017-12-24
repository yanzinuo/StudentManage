#include<conio.h> //getche()里用到 
#include<stdlib.h>//exit()用到 
#include<string.h>//stremp()用到 

struct stu_type 
{
    char num[15];//学号 
    char name[10];//姓名 
    int age;//年龄 
    int c;//C语言分数 
    int math;//数学分数 
    int en;//英语分数 
    int sum;//总分 
    float ave;//平均分 
};

extern int stu_num;//已输入学生人数 
extern struct stu_type stu[];//学生数组 

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
