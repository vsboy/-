//LinkList.h  ������LinkList
#ifndef LinkList_H
#define LinkList_H
#include "Node.h"
template <class T>
class LinkList
{
 template <class T>
      friend ostream& operator<<(ostream&,const LinkList<T>&);
public:
   LinkList( );  //����ֻ��ͷ���Ŀ�����
   LinkList(T a[], int n);  //������n��Ԫ�صĵ�����
   ~LinkList( );          //��������
   int Length( );          //������ĳ���
   T Get(int i);           //ȡ�������е�i������Ԫ��ֵ
   int Locate(T x);       //��������ֵΪx��Ԫ�����
   void Insert(int i, T x);   //�ڵ������е�i��λ�ò���Ԫ��ֵΪx�Ľ��
   T Delete(int i);        //�ڵ�������ɾ����i�����
   void PrintList( );           //������������������������Ԫ��
   Node<T>* Gethead();			//��ȡ�������ͷָ��
   void Delrenode();			//ɾ�����������е��ظ����
   void Purge(Node<T>*first);//ɾ���ظ�Ԫ��
 private:
   Node<T> *first;  //�������ͷָ��
};
#endif
