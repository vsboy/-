//LinkList.h  声明类LinkList
#ifndef LinkList_H
#define LinkList_H
#include "Node.h"
template <class T>
class LinkList
{
 template <class T>
      friend ostream& operator<<(ostream&,const LinkList<T>&);
public:
   LinkList( );  //建立只有头结点的空链表
   LinkList(T a[], int n);  //建立有n个元素的单链表
   ~LinkList( );          //析构函数
   int Length( );          //求单链表的长度
   T Get(int i);           //取单链表中第i个结点的元素值
   int Locate(T x);       //求单链表中值为x的元素序号
   void Insert(int i, T x);   //在单链表中第i个位置插入元素值为x的结点
   T Delete(int i);        //在单链表中删除第i个结点
   void PrintList( );           //遍历单链表，按序号依次输出各元素
   Node<T>* Gethead();			//获取单链表的头指针
   void Delrenode();			//删除有序单链表中的重复结点
   void Purge(Node<T>*first);//删除重复元素
 private:
   Node<T> *first;  //单链表的头指针
};
#endif
