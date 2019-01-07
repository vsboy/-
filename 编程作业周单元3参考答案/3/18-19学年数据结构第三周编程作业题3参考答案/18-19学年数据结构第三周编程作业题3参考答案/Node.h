#include <iostream>
using namespace std;//Node.h  声明类Node
#ifndef Node_H
#define Node_H
template <class T>
class LinkList;       //为是Node类的友员类而声明
template <class T>
class Node
{
   public:         
	  friend class LinkList<T>;   //将LinkList类设为友元类
	  template <class T>//输出一个结点
           friend ostream& operator<<(ostream& os,const Node<T>& N);
      template <class T>//输出一个单链表
           friend ostream& operator<<(ostream& os,const LinkList<T>& L);
   private:		    
	  T data;
      Node<T> *next;  
};
template <class T>
ostream& operator<<(ostream& os,const Node<T>& N)
{
	os<<N.data;
	return os;
}
#endif