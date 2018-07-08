//
//  main.cpp
//  student
//
//  Created by wyb on 2018/6/25.
//  Copyright © 2018年 wyb. All rights reserved.
//

#include<iostream>
#include<string>
#include<cstring>
using namespace std;
int c=0;
struct player
{
    string name;
    string sex;
    string Program;
    string form;
    string Class;
    string tel;
    int id;
    double score[10];
    double min;
    double max;
    double sum;
    double average;
};
struct rater
{
    string name;
    string sex;
    string tel;
};

void inputs(player *s)
{
    int n;
    cout<<"请输入参赛者人数"<<endl;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"请输入编号:"<<endl;
        cin>>s[i].id;
        cout<<"请输入姓名："<<endl;
        cin>>s[i].name;
        cout<<"请输入性别："<<endl;
        cin>>s[i].sex;
        cout<<"请输入节目名称："<<endl;
        cin>>s[i].Program;
        cout<<"请输入表演形式："<<endl;
        cin>>s[i].form;
        cout<<"请输入班级："<<endl;
        cin>>s[i].Class;
        cout<<"请输入电话号:"<<endl;
        cin>>s[i].tel;
        c++;
    }
}
void outputs(player *s)
{
    int i;
    for(i=0;i<c;i++)
    {
        cout<<"参赛者编号:";
        cout<<s[i].id<<endl;
        cout<<"姓名是：";
        cout<<s[i].name<<endl;
        cout<<"性别：";
        cout<<s[i].sex<<endl;
        cout<<"节目名称：";
        cout<<s[i].Program<<endl;
        cout<<"表演形式：";
        cout<<s[i].form<<endl;
        cout<<"班级：";
        cout<<s[i].Class<<endl;
        cout<<"电话号：";
        cout<<s[i].tel<<endl;
    }
}
void inputr(rater *r)
{
    int i;
    cout<<"请分别输入五位裁判信息:"<<endl;
    for(i=0;i<5;i++)
    {
        cout<<"请输入裁判姓名:"<<endl;
        cin>>r[i].name;
        cout<<"请输入裁判性别:"<<endl;
        cin>>r[i].sex;
        cout<<"请输入裁判电话:"<<endl;
        cin>>r[i].tel;
        
    }
    cout<<"裁判信息录入成功!"<<endl;
    
}
void outputr(rater *r)
{
    int i;
    for(i=0;i<5;i++)
    {
        cout<<"裁判姓名:";
        cout<<r[i].name<<endl;
        cout<<"性别:";
        cout<<r[i].sex<<endl;
        cout<<"电话号:";
        cout<<r[i].tel<<endl;
    }
    
}
void mark(player *s)
{
    int i,n;
    int flag=1;
    while (flag)
    {
        cout<<"请输入要评分的参赛者编号:"<<endl;
        cin>>n;
        if(n!=-1)
        {
            for (i=0; i<c;)
            {
                if (s[i].id!=n)
                {
                    i++;
                }
                else
                {
                    break;
                }
            }
        }
        else
        {
            cout<<"输入错误,请重新选择!"<<endl;
        }
        if(i>=c||n<=0)
        {
            cout<<"输入编码错误，请重新输入!"<<endl;
            
        }
        else
        {
            cout<<"请输入第一个裁判打的分数:";
            cin>>s[n-1].score[0];
            cout<<"请输入第二个裁判打的分数:";
            cin>>s[n-1].score[1];
            cout<<"请输入第三个裁判打的分数:";
            cin>>s[n-1].score[2];
            cout<<"请输入第四个裁判打的分数:";
            cin>>s[n-1].score[3];
            cout<<"请输入第五个裁判打的分数:";
            cin>>s[n-1].score[4];
            flag=0;
        }
    }
    cout<<"裁判评分成功!"<<endl;
}
int average(player *s)
{
    int i,j;
    for(i=0;i<c;i++)
    {
        s[i].max=s[i].score[0];
        s[i].min=s[i].score[0];
        for(j=0;j<5;j++)
        {
            if(s[i].score[j]>s[i].max)
            {
                s[i].max=s[i].score[j];
            }
            if(s[i].score[j]<s[i].min)
            {
                s[i].min=s[i].score[j];
            }
            s[i].sum+=s[i].score[j];
        }
        s[i].sum=s[i].sum - s[i].max - s[i].min;
        s[i].average = s[i].sum / 3;
    }
    cout<<"计算平均分成功!"<<endl;
    return 0;
}

int show(player *s,rater *r)
{
    int i;
    for(i=0;i<c;i++)
    {
        cout<<"参赛者姓名为:"<<s[i].name<<endl;
        cout<<"参赛者编号:"<<s[i].id<<endl;
        cout<<"参赛者性别:"<<s[i].sex<<endl;
        cout<<"节目名称:"<<s[i].Program<<endl;
        cout<<"节目类别:"<<s[i].form<<endl;
        cout<<"电话:"<<s[i].tel<<endl;
        cout<<"班级:"<<s[i].Class<<endl;
        cout<<"第一个评委"<<r[0].name<<"分数是:";
        cout<<s[i].score[0]<<endl;
        cout<<"第二个评委"<<r[1].name<<"分数是:";
        cout<<s[i].score[1]<<endl;
        cout<<"第三个评委"<<r[2].name<<"分数是:";
        cout<<s[i].score[2]<<endl;
        cout<<"第四个评委"<<r[3].name<<"分数是:";
        cout<<s[i].score[3]<<endl;
        cout<<"第五个评委"<<r[4].name<<"分数是:";
        cout<<s[i].score[4]<<endl;
        cout<<"去掉一个最低分为:";
        cout<<s[i].min<<endl;
        cout<<"去掉一个最高分为:";
        cout<<s[i].max<<endl;
        cout<<"所得的平均成绩是:";
        cout<<s[i].average<<endl;
    }
    return 0;
}

int input(player *s,rater *r)
{
    int MenuItem;
    cout<<"      ******输入菜单******       "<<endl;
    cout<<"    -----1.输入参赛者信息-----       "<<endl;
    cout<<"    -----2.输入裁判信息-----       "<<endl;
    do
    {
        cout<<"请输入选项(1-2:)"<<endl;
        cin>>MenuItem;
    }while(MenuItem<0||MenuItem>2);
    switch(MenuItem)
    {
        case 1:
            inputs(s);
            break;
        case 2:
            inputr(r);
            break;
    }
    return MenuItem;
}
int output(player *s,rater *r)
{
    int MenuItem;
    cout<<"      ******输出菜单******       "<<endl;
    cout<<"    -----1.输出参赛者信息-----       "<<endl;
    cout<<"    -----2.输出裁判信息-----       "<<endl;
    do
    {
        cout<<"请输入选项(1-2:)"<<endl;
        cin>>MenuItem;
    }while(MenuItem<0||MenuItem>2);
    switch(MenuItem)
    {
        case 1:
            outputs(s);
            break;
        case 2:
            outputr(r);
            break;
    }
    return MenuItem;
}
void sort(player *s)
{
    int i,j;
    struct player temp;
    for(i=0;i<c;i++)
    {
        for(j=0;j<c-i;j++)
        {
            if(s[j].average<s[j+1].average)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for(i=0;i<c;i++)
    {
        cout<<"编号:"<<s[i].id<<endl;
        cout<<"参赛者姓名为:"<<s[i].name<<endl;
        cout<<"所得的平均成绩是:";
        cout<<s[i].average<<endl;
    }
    cout<<"参赛者排序成功!"<<endl;
}
void read(player *s)//写入文件函数
{
    int i;
    FILE* fp;
    fp = fopen("//Users//wyb//Desktop//student//wyb.csv","w");
    if(fp == NULL)
        cout<<("The file is full!\n")<<endl;
    else
    {
        fprintf(fp,"学生编号,学生姓名,性别,节目名称,节目类别,电话,班级,第一位评委分数,第二位评委分数,第三位评委分数,第四位评委分数,第五位评委分数,总分,最高分,最低分,平均分,\n");
        for(i=0 ;i<c; i++)
        {
            fprintf(fp,"%d,%s,%s,%s,%s,%s,%s,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf\n",
                    s[i].id,s[i].name.c_str(),s[i].sex.c_str(),s[i].Program.c_str(),s[i].form.c_str(),s[i].tel.c_str(),s[i].Class.c_str(),s[i].score[0],s[i].score[1],s[i].score[2],s[i].score[3],s[i].score[4],s[i].sum,s[i].max,s[i].min,s[i].average);
        }
        cout<<("信息保存成功!\n")<<endl;
        fclose(fp);
    }
}
int menu_select()
{
    int MenuItem;
    cout<<"**********比赛打分系统**********"<<endl;
    cout<<"    -----1.输入信息-----      "<<endl;
    cout<<"    -----2.输出信息-----      "<<endl;
    cout<<"    -----3.裁判评分-----          "<<endl;
    cout<<"    -----4.计算裁判评分-----          "<<endl;
    cout<<"    -----5.显示裁判评分-----       "<<endl;
    cout<<"    -----6.按平均分排序-----       "<<endl;
    cout<<"    -----7.保存信息-----       "<<endl;
    cout<<"    -----8.退出系统-----       "<<endl;
    do
    {
        cout<<"请输入选项(0-8:)"<<endl;
        cin>>MenuItem;
    }while(MenuItem<0||MenuItem>9);
    return MenuItem;
}
int main()
{
    struct player s[100];
    struct rater r[100];
    while(1)
    {
        switch(menu_select())
        {
            case 1:
                input(s,r);
                break;
            case 2:
                output(s,r);
                break;
            case 3:
                mark(s);
                break;
            case 4:
                average(s);
                break;
            case 5:
                show(s,r);
                break;
            case 6:
                sort(s);
                break;
            case 7:
                read(s);
                break;
                
            case 8:
                cout<<"谢谢使用!"<<endl;
                return 0;
        }
    }
    return 0;
}
