#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;
int sum;//�ܶ� 
char var[10],ini[10],oper[100];//��������ʼ�� operation ����
char a1[100],a2[100],a3[100],a4[100],a5[100],a6[100],a7[100],a8[100],a9[100],a10[100];
int trans(char str[])
{
    if(strcmp("��",str)==0)return 0;
    if(strcmp("һ",str)==0)return 1;
    if(strcmp("��",str)==0)return 2;
    if(strcmp("��",str)==0)return 3;
    if(strcmp("��",str)==0)return 4;
    if(strcmp("��",str)==0)return 5;
    if(strcmp("��",str)==0)return 6;
    if(strcmp("��",str)==0)return 7;
    if(strcmp("��",str)==0)return 8;
    if(strcmp("��",str)==0)return 9;
    if(strcmp("ʮ",str)==0)return 10;
}
void deal_add(char str[])
{
    if(strcmp(" ���� һ",str)==0)sum+=1;
    if(strcmp(" ���� ��",str)==0)sum+=2;
    if(strcmp(" ���� ��",str)==0)sum+=3;
    if(strcmp(" ���� ��",str)==0)sum+=4;
    if(strcmp(" ���� ��",str)==0)sum+=5;
    if(strcmp(" ���� ��",str)==0)sum+=6;
    if(strcmp(" ���� ��",str)==0)sum+=7;
    if(strcmp(" ���� ��",str)==0)sum+=8;
    if(strcmp(" ���� ��",str)==0)sum+=9;
    if(strcmp(" ���� ʮ",str)==0)sum+=10;
}
void deal_minus(char str[])
{
    if(strcmp(" ���� һ",str)==0)sum-=1;
    if(strcmp(" ���� ��",str)==0)sum-=2;
    if(strcmp(" ���� ��",str)==0)sum-=3;
    if(strcmp(" ���� ��",str)==0)sum-=4;
    if(strcmp(" ���� ��",str)==0)sum-=5;
    if(strcmp(" ���� ��",str)==0)sum-=6;
    if(strcmp(" ���� ��",str)==0)sum-=7;
    if(strcmp(" ���� ��",str)==0)sum-=8;
    if(strcmp(" ���� ��",str)==0)sum-=9;
    if(strcmp(" ���� ʮ",str)==0)sum-=10;
}
void output(int x)
{
    if(x==0)cout<<"��";  
    if(x==1)cout<<"һ";  
    if(x==2)cout<<"��";  
    if(x==3)cout<<"��";  
    if(x==4)cout<<"��";  
    if(x==5)cout<<"��";  
    if(x==6)cout<<"��";  
    if(x==7)cout<<"��";  
    if(x==8)cout<<"��";  
    if(x==9)cout<<"��";  
    if(x==10)cout<<"ʮ"; 
} 

int main()
{
    for(int i=0;i<2;i++)cin>>var;//��������� 
    for(int j=0;j<2;j++)cin>>ini;//�����ʼֵ    
    sum=trans(ini);//����ʼֵת��Ϊ���֣���ֵ���ܶ 
    for(;;)
    {
        cin>>var;//ͨ��cin����������������ո�ֹͣ 
        gets(oper);//ͨ��gets�������������������ǰ���һ���ո������Ϸ��ļӼ������ַ���ǰ���пո� 
        deal_add(oper);//��
        deal_minus(oper);//�� 
        if(strcmp("����",var)==0)break;//�����롰������ʱ�˳� 
    }
    if(sum<=10)output(sum);
    if(sum>10)
    {
        int ten_position=sum/10;
        if(ten_position==1)cout<<"ʮ";
        else{
            output(ten_position);
            cout<<"ʮ";
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
