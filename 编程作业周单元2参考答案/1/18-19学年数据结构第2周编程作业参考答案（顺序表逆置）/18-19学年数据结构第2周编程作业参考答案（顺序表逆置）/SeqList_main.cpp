#include <iostream>           //��������������⺯����ͷ�ļ�
using namespace std;
#include "SeqList.cpp"           //����˳�����������Ͷ���
void main( )
{
      int r[5]={1, 2, 3, 4, 5};    
      SeqList<int> L(r, 5);
      cout<<"����ǰ����Ϊ��"<<endl;
      L.PrintList( );              //�������Ԫ��
	  L.Reverse();
	  cout<<"���ú�����Ϊ��"<<endl;
	  L.PrintList( ); 
}
