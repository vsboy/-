//LinkListMain.cpp
#include <iostream> //��������������⺯����ͷ�ļ�
#include "LinkList.cpp" //���õ��������
using namespace std;
void main( )
{
 int r[ ]={2,1,4,4,5};
 LinkList <int> b(r,5);     //�������鴴��������
 Node<int>*p;
 cout<<"������bΪ:"<<endl;
 b.PrintList();            //�������������Ԫ��
 b.OrderPrint();


}