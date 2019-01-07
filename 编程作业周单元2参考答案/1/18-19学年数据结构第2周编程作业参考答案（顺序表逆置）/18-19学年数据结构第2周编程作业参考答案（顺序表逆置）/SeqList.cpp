#include "SeqList.h"
template <class DataType>  
SeqList<DataType> :: SeqList(DataType a[ ], int n)
{
  if (n > MaxSize) throw "�����Ƿ�";
  for (int i = 0; i < n; i++)  
	  data[i] = a[i];
  length = n;
}
template <class DataType>  
DataType SeqList<DataType> :: Get(int i)
{
  if (i < 1 && i > length) throw "����λ�÷Ƿ�";
  else return data[i - 1];
}
template <class DataType>  
int SeqList<DataType> :: Locate(DataType x)
{
  for (int i = 0; i < length; i++)
    if (data[i] == x) return i+1;       //�±�Ϊi��Ԫ�ص���x�����������i+1
  return 0;                        //�˳�ѭ����˵������ʧ��
}
template <class DataType>  
void SeqList<DataType> :: Insert(int i, DataType x)
{
  if (length >= MaxSize) throw "��������";
    if (i < 1 || i > length + 1) throw "λ�÷Ƿ�";
for (int j = length; j >= i; j--)
  data[j] = data[j - 1];             //ע���j��Ԫ�ش��������±�Ϊj-1��
data[i - 1] = x;
length++;
}
template <class DataType>  
DataType SeqList<DataType> :: Delete(int i)
{
  if (length == 0) throw "����";
  if (i < 1 || i > length) throw "λ��";
  DataType x = data[i - 1];              //ȡ��λ��i��Ԫ��
  for (int j = i; j < length; j++)
    data[j - 1] = data[j];        //ע��˴�j�Ѿ���Ԫ�����ڵ������±�
  length--;
  return x;
}
template <class DataType>  
void SeqList<DataType> :: PrintList( )
{
  for (int i = 0; i < length; i++)
	cout<<data[i]<<" ";                   //����������Ա��Ԫ��ֵ
	cout<<endl;
 }
template<class DataType>
void SeqList<DataType>::Reverse()
{
	DataType temp;
	for(int i=0;i<length/2;i++)
	{
		temp=data[i];
		data[i]=data[length-1-i];
		data[length-1-i]=temp;
	}
}
