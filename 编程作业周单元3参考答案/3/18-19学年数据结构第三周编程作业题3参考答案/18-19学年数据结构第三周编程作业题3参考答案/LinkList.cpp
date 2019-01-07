#include "LinkList.h"
//��    �ܣ�����һ��������
template <class T>
LinkList<T>:: LinkList( )
{
 first=new Node<T>; first->next=NULL;
}
//��    �ܣ�������a[]��Ԫ�ؽ�Ϊ����Ϊn�ĵ�����
template <class T>  
LinkList<T>:: LinkList(T a[ ], int n)
 {
    first=new Node<T>;   //����ͷ���
	Node<T> *r,*s;
     r=first;          //βָ���ʼ��
    for (int i=0; i<n; i++)
	{ 
      s=new Node<T>; s->data=a[i];  //Ϊÿ������Ԫ�ؽ���һ�����
      r->next=s; r=s;      //���뵽�ն˽��֮��
	}
    r->next=NULL;    //����������ϣ����ն˽���ָ�����ÿ�
 }
//��    �ܣ��������������ٵ�����
template <class T>
LinkList<T>:: ~LinkList()
{
	Node<T>*p;
	while(first!=NULL)
	{
		p=first;
		first=first->next;
		delete p;
	}
}
//��    �ܣ���λ����λ��Ϊi��Ԫ�ز����ֵ
template <class T>
T LinkList<T>::Get(int i) 
{   
  Node<T> *p; int j;
  p=first->next;  j=1;  //��p=first;  j=0;
  while (p && j<i)    
  {
    p=p->next;       //����ָ��p����
    j++;
  }
  if (!p) throw "λ��";
  else return p->data;
}

//��    �ܣ���ֵ����ֵ��Ԫ�ز����λ��
template <class T> 
int LinkList<T>::Locate(T x)
{
	Node<T> *p; int j;
	p=first->next; j=1;
	if(p&&p->next){
	  while(p->data!=x)
	  {
		 p=p->next;
	     j++;
	  }
	return j;
	}
	else throw "λ��";
	
}
//��    �ܣ���Ԫ��x���뵽��������λ��i��
template <class T>  
void LinkList<T>::Insert(int i, T x)
{  
   Node<T> *p; int j;
   p=first ; j=0;    //����ָ��p��ʼ��
   while (p && j<i-1)
   {
     p=p->next;   //����ָ��p����
     j++;
   }
   if (!p) throw "λ��";
    else { 
	  Node<T> *s;
      s=new Node<T>; 
	  s->data=x;  //���ڴ�����һ�����s����������Ϊx
      s->next=p->next;       //�����s���뵽���p֮��
      p->next=s;
	}
}
//��    �ܣ������������
template <class T> 
int LinkList<T>::Length( )
{
  Node <T> *p = first->next;
  int i = 0;
  while(p)
  {
    p = p->next;
    i++;
  }
  return i;
}
//��    �ܣ�ɾ����������λ��Ϊi��Ԫ��
template <class T>  
T LinkList<T>::Delete(int i)
{ 
  Node<T> *p; int j;
  p=first ; j=0;  //����ָ��p��ʼ��
  while (p && j<i-1)  //���ҵ�i-1�����
  {
    p=p->next;
    j++;
  }
  if (!p || !p->next) throw "λ��";  //���p�����ڻ���p�ĺ�̽�㲻����
    else {
		  Node<T> *q; int x;
          q=p->next; x=q->data;  //�ݴ汻ɾ���
          p->next=q->next;  //ժ��
          delete q; 
          return x;
	}
}
//��    �ܣ����������
template <class T> 
void LinkList<T>::PrintList( )
{
	Node<T> *p;
	p=first->next;
	while (p)
	{
		if(p->next!=NULL)
			cout<<p->data<<"-->";
		else
			cout<<p->data<<endl;
	  p=p->next;
	}
	
}
//��    �ܣ���ȡ������ͷ���
template <class T>
Node<T>* LinkList<T>::Gethead()
{
	return first;
}
//��    �ܣ�������Ԫ������������ȡ��
template <class T>
ostream& operator<<(ostream& os,const LinkList<T>& L)
{
	Node<T> *p;
	p=L.first ->next;
	while(p)
	{
		if(p->next !=NULL)
			os<<*p<<"-->";
		else
			os<<*p<<endl;
		p=p->next;
	}
	return os;
}
//��    �ܣ�ɾ���������ظ����
template <class T>
void LinkList<T>::Delrenode( )
{
	Node<T>*p,*q;
	p=first->next;
	if(p)
	{
		while(p->next!=NULL)
	     {
		     if(p->data==p->next->data)
		       {
			      q=p->next;
			      p->next=q->next;
			      delete q;
		       }
		    else
			   p=p->next;
	     }
    }
}
//��    �ܣ�ɾ���������ظ����
template <class T>
 void LinkList<T>::Purge(Node<T>*first)
{
	Node<T>*p,*q;
	p=first->next;
	if(p)
	{
		while(p->next!=NULL)
	     {
		     if(p->data==p->next->data)
		       {
			      q=p->next;
			      p->next=q->next;
			      delete q;
		       }
		    else
			   p=p->next;
	     }
    }
 }