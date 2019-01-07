//LinkListMain.cpp
#include <iostream> //引用输入输出流库函数的头文件
#include "LinkList.cpp" //引用单链表的类
using namespace std;
void main( )
{
 int r[ ]={2,1,4,4,5};
 LinkList <int> b(r,5);     //根据数组创建单链表
 Node<int>*p;
 cout<<"单链表b为:"<<endl;
 b.PrintList();            //输出单链表所有元素
 b.OrderPrint();


}