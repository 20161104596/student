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
int main()
{
    struct player s[100];
    struct rater r[100];
    input(s);
    input(r);
    output(s);
    output(r);
}
