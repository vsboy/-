#include<iostream>
#include"LinkList.cpp"
using namespace std;
void main( )
{
  //����ʵ����������
 int r[ ]={1,1,2,2,4,5,5,7,8,8};
 LinkList <int> b(r,10);     //�������鴴��˳���
 cout<<"�����ĵ�����Ϊ��";
 b.PrintList();
 b.Insert(8,6);
 cout<<"ִ�в������������bΪ:"<<endl;
 cout<<b;             //�������������Ԫ��
 //b.Delrenode();//
 b.Purge(b.Gethead());//������һ����ѡһ
 cout<<"ִ��ɾ������������bΪ:"<<b<<endl;
}