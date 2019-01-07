const int MaxSize = 100;          //100ֻ��ʾ���Ե����ݣ����Ը���ʵ��������嶨��
template <class DataType>        //����ģ����SeqList
class SeqList
{
public:
   SeqList( ) {length = 0;}            //�޲ι��캯��������һ���յ�˳���
   SeqList(DataType a[ ], int n);       //�вι��캯��������һ������Ϊn��˳���
   ~SeqList( ) { }                   //��������Ϊ��
   int Length( ) {return length;}        //�����Ա�ĳ���
   DataType Get(int i);               //��λ���ң������Ա��в��ҵ�i��Ԫ��
   int Locate(DataType x );           //��ֵ���ң������Ա��в���ֵΪx��Ԫ�����
   void Insert(int i, DataType x);       //��������������Ա��е�i��λ�ò���ֵΪx��Ԫ��
   DataType Delete(int i);              //ɾ��������ɾ�����Ա�ĵ�i��Ԫ��
   void PrintList( );                     //������������������������Ԫ��
   void Reverse();
private:
   DataType data[MaxSize];           //�������Ԫ�ص�����
   int length;                        //���Ա�ĳ���
};
