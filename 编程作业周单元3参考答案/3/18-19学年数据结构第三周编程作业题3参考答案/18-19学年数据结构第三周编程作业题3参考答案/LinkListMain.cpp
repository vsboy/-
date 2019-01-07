#include<iostream>
#include"LinkList.cpp"
using namespace std;
void main( )
{
  //数组实例化单链表
 int r[ ]={1,1,2,2,4,5,5,7,8,8};
 LinkList <int> b(r,10);     //根据数组创建顺序表
 cout<<"创建的单链表为：";
 b.PrintList();
 b.Insert(8,6);
 cout<<"执行插入操作后单链表b为:"<<endl;
 cout<<b;             //输出单链表所有元素
 //b.Delrenode();//
 b.Purge(b.Gethead());//可与上一语句二选一
 cout<<"执行删除操作后单链表b为:"<<b<<endl;
}