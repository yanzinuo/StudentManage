#include"student.h"

void main()
{
    int menu_choose();  //菜单函数声明 
    while(1)
    {
        int choice=menu_choose();//调用菜单函数 
        switch(choice)
        {
            case 1: add();     break;   //添加学生信息 
            case 2: display(); break;   //显示学生信息 
            case 3: modify();  break;   //修改学生信息 
            case 4: del();     break;   //删除学生信息 
            case 5: find();    break;   //查找学生信息 
            case 6: compute(); break;   //统计不及格人数，最高分和平均分 
            case 7: sort();    break;   //总分排位 
            case 8: save_txt();break;   //数据保存到文件(文本方式) 
            case 9: load_txt();break;   //从文件中读取数据（文本方式） 
            case 10:save_bin();break;   //数据保存到文件（二进制方式） 
            case 11:load_bin();break;   //从文件中读入数据（二进制方式） 
            case 12:exit(0);            //退出程序 
        }
    }
}

int menu_choose()
{
    int choice;
    printf("\n                  欢迎使用学生管理系统\n");
    printf("--------------------------------------\n");
    printf("1.添加学生信息             2.显示学生信息\n");
    printf("3.修改学生信息             4.删除学生信息\n");
    printf("5.查找学生信息             6.统计不及格人数，最高分和平均分\n");
    printf("7.总分排序                 8.保存至文件（文本方式）\n");
    printf("9.从文本读入（文本方式）   10.保存至文件（二进制方式）\n");
    printf("11.从文件读入（二进制方式）12.退出程序\n");
    printf("--------------------------------------\n");
    printf("请选择功能模块，输入数字1-12");
    
    while(1)
    {
        scanf("%d",&choice);
        if(choice>=1 && choice<=12)
            break;
        else
            printf("输入数字不正确");    
            
    }
    return choice;
}



























