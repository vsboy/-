#include <iostream>           //��������������⺯����ͷ�ļ�
using namespace std;
#include "SeqList.cpp"           //����˳�����������Ͷ���
void main( )
{
      int r[5]={1,1,2,3,3};    
      SeqList<int> L(r, 5);
      cout<<"ɾ��ǰ����Ϊ��"<<endl;
      L.PrintList( );              //�������Ԫ��
	  L.DelRepeat( );
	  cout<<"ɾ��������Ϊ��"<<endl;
	  L.PrintList( ); 
}
