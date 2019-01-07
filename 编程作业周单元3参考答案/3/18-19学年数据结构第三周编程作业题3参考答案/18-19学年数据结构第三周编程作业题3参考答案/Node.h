#include <iostream>
using namespace std;//Node.h  ������Node
#ifndef Node_H
#define Node_H
template <class T>
class LinkList;       //Ϊ��Node�����Ա�������
template <class T>
class Node
{
   public:         
	  friend class LinkList<T>;   //��LinkList����Ϊ��Ԫ��
	  template <class T>//���һ�����
           friend ostream& operator<<(ostream& os,const Node<T>& N);
      template <class T>//���һ��������
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