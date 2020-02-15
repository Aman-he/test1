#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int sum;//总额 
char var[10],ini[10],oper[100];//变量，初始化 operation 运算
char a1[100],a2[100],a3[100],a4[100],a5[100],a6[100],a7[100],a8[100],a9[100],a10[100];
int trans(char str[])
{
    if(strcmp("零",str)==0)return 0;
    if(strcmp("一",str)==0)return 1;
    if(strcmp("二",str)==0)return 2;
    if(strcmp("三",str)==0)return 3;
    if(strcmp("四",str)==0)return 4;
    if(strcmp("五",str)==0)return 5;
    if(strcmp("六",str)==0)return 6;
    if(strcmp("七",str)==0)return 7;
    if(strcmp("八",str)==0)return 8;
    if(strcmp("九",str)==0)return 9;
    if(strcmp("十",str)==0)return 10;
}
void deal_add(char str[])
{
    if(strcmp(" 增加 一",str)==0)sum+=1;
    if(strcmp(" 增加 二",str)==0)sum+=2;
    if(strcmp(" 增加 三",str)==0)sum+=3;
    if(strcmp(" 增加 四",str)==0)sum+=4;
    if(strcmp(" 增加 五",str)==0)sum+=5;
    if(strcmp(" 增加 六",str)==0)sum+=6;
    if(strcmp(" 增加 七",str)==0)sum+=7;
    if(strcmp(" 增加 八",str)==0)sum+=8;
    if(strcmp(" 增加 九",str)==0)sum+=9;
    if(strcmp(" 增加 十",str)==0)sum+=10;
}
void deal_minus(char str[])
{
    if(strcmp(" 减少 一",str)==0)sum-=1;
    if(strcmp(" 减少 二",str)==0)sum-=2;
    if(strcmp(" 减少 三",str)==0)sum-=3;
    if(strcmp(" 减少 四",str)==0)sum-=4;
    if(strcmp(" 减少 五",str)==0)sum-=5;
    if(strcmp(" 减少 六",str)==0)sum-=6;
    if(strcmp(" 减少 七",str)==0)sum-=7;
    if(strcmp(" 减少 八",str)==0)sum-=8;
    if(strcmp(" 减少 九",str)==0)sum-=9;
    if(strcmp(" 减少 十",str)==0)sum-=10;
}
void output(int x)
{
    if(x==0)cout<<"零";  
    if(x==1)cout<<"一";  
    if(x==2)cout<<"二";  
    if(x==3)cout<<"三";  
    if(x==4)cout<<"四";  
    if(x==5)cout<<"五";  
    if(x==6)cout<<"六";  
    if(x==7)cout<<"七";  
    if(x==8)cout<<"八";  
    if(x==9)cout<<"九";  
    if(x==10)cout<<"十"; 
} 

int main()
{
    for(int i=0;i<2;i++)cin>>var;//读入变量名 
    for(int j=0;j<2;j++)cin>>ini;//读入初始值    
    sum=trans(ini);//将初始值转换为数字，赋值给总额。 
    for(;;)
    {
        cin>>var;//通过cin读入变量名，遇到空格停止 
        gets(oper);//通过gets读入计算操作，但会读入前面的一个空格，所以上方的加减函数字符串前面有空格 
        deal_add(oper);//加
        deal_minus(oper);//减 
        if(strcmp("看看",var)==0)break;//当读入“看看”时退出 
    }
    if(sum<=10)output(sum);
    if(sum>10)
    {
        int ten_position=sum/10;
        if(ten_position==1)cout<<"十";
        else{
            output(ten_position);
            cout<<"十";
        }
        output(sum%10);
    }
    scanf("%s %s %s %s %s %s %s %s %s %s",a1,a2,a3,a4,a5,a6,a7,a8,a9,a10);
    int num=trans(a4);
        
    int len=strlen(a7);
    int len1=strlen(a10);
    if(sum>num)
        for (int i1=1;i1<len-1; i1+=2) 
        {
            printf("%c%c",a7[i1],a7[i1+1]);
        }
    else
        for (int i2=1;i2<len1-1;i2+=2) 
        {
            printf("%c%c",a10[i2],a10[i2+1]);
        }
    return 0;
}
