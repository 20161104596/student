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
struct player
{
    string name;
    string sex;
    string Program;
    string form;
    string Class;
    string tel;
    int f;
    double score[10];
    double min;
    double max;
};
struct rater
{
    string name;
    string sex;
    string tel;
};
void input(player *s)
{
    int n;
    cout<<"请输入参赛者人数";
    cin>>n;
    s[0].f=0;
    for(int i=0; i<n; i++)
    {
        cout<<"请输入姓名：";
        cin>>s[i].name;
        cout<<"请输入性别：";
        cin>>s[i].sex;
        cout<<"请输入节目名称：";
        cin>>s[i].Program;
        cout<<"请输入表演形式：";
        cin>>s[i].form;
        cout<<"请输入班级：";
        cin>>s[i].Class;
        cout<<"请输入电话号:";
        cin>>s[i].tel;
        s[0].f++;
    }
}
void output(player *s)
{
    int i;
    for(i=0;i<=s[0].f;i++)
    {
    cout<<"第"<<i+1<<"学生";
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
void input(rater *r)
{
     int i;
    for(i=0; i<5; i++)
    {
        cout<<"请输入第"<<i+1<<"号裁判的姓名:";
        cin>>r[i].name;
        cout<<"请输入第"<<i+1<<"号裁判的性别:";
        cin>>r[i].sex;
        cout<<"请输入第"<<i+1<<"号裁判的电话号:";
        cin>>r[i].tel;
    }
}
void output(rater *r)
{
    int i;
    
    cout<<"第一个评委"<<r[0].name<<"的打分为：";
    cout<<"第二个评委"<<r[1].name<<"的打分为：";
    cout<<"第三个评委"<<r[2].name<<"的打分为：";
    cout<<"第四个评委"<<r[3].name<<"的打分为：";
    cout<<"第五个评委"<<r[4].name<<"的打分为：";
    cout<<"去掉一个最低成绩为：";
    cout<<"去掉一个最高成绩为：";
    cout<<"平均分是：";
}
int searchByNo(student *s,rater *r)//学号查询
{
    int a;
    int i;
    int flag=1;
    while(flag)
    {
        cout<<"请输出要查找的学生编号";
        cin>>a;
        
        for(i=0; i<s[0].f; )
        {
            if(s[i].no!=a)
            {
                i++;
            }
            else{
                break;
            }
        }
        if(i>=s[0].f||a<=0)
        {
            cout<<"该学生编号不存在"<<endl;
        }
        else
        {
            cout<<"编号为"<<s[i].no<<"的学生";
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
            cout<<"第一个评委"<<r[0].name<<"的打分为：";
            cout<<s[i].score[0]<<endl;
            cout<<"第二个评委"<<r[1].name<<"的打分为：";
            cout<<s[i].score[1]<<endl;
            cout<<"第三个评委"<<r[2].name<<"的打分为：";
            cout<<s[i].score[2]<<endl;
            cout<<"第四个评委"<<r[3].name<<"的打分为：";
            cout<<s[i].score[3]<<endl;
            cout<<"第五个评委"<<r[4].name<<"的打分为：";
            cout<<s[i].score[4]<<endl;
            cout<<"去掉一个最低成绩为：";
            cout<<s[i].min<<endl;
            cout<<"去掉一个最高成绩为：";
            cout<<s[i].max<<endl;
            cout<<"平均分是：";
            cout<<s[i].avg<<endl;
            flag=0;
        }
        
    }
    return 0;
}
int main()
{
    struct player s[100];
    struct rater r[100];
    input(s);
    input(r);
    output(s);
    output(r);
}
