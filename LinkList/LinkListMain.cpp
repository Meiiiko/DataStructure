#include <iostream>  //��������������⺯����ͷ�ļ�
#include "LinkList.cpp"  //���õ��������
using namespace std;
int main(int agrc,const char* agrv[])
{

    LinkList <int> a;
    cout<<"ִ�в������:"<<endl;
    try
    {
        a.Insert(1,4);
        a.Insert(2,5);
        a.Insert(3,6);
    }
    catch(char* wrong)
    {
        cout << wrong;
    }
    cout<<"�Ѿ����롰4��5��6��"<<endl;
    cout<<"������a�ĳ���Ϊ:"<<endl;
    cout<<a.Length()<<endl;
    cout<<endl;
    cout<<"������a��Ԫ��Ϊ:"<<endl;
    a.PrintList();
    cout<<endl;
    cout<<"��λ���ҵڶ���Ԫ��:"<<endl;
    cout<<"�ڶ���Ԫ��Ϊ:";
    cout<<a.Get(2)<<endl;
    cout<<endl;
    cout<<"��ֵ����5"<<endl;
    cout<<"ֵΪ5��Ԫ��λ��Ϊ:";
    cout<<a.Locate(5)<<endl;
    cout<<endl;
    cout<<"ִ��ɾ��4�Ĳ���"<<endl;
    a.Delete(1);
    cout<<"��ɾ���ɹ���������a�ĳ���Ϊ";
    cout<<a.Length()<<endl;
    cout<<endl;
    cout<<"����a�е�Ԫ��Ϊ:"<<endl;
    a.PrintList();

    int r[ ]={1,2,3,4,5};
    LinkList <int> b(r,5);     //�������鴴��������
    cout<<"ִ�в������ǰ������bΪ:"<<endl;
    b.PrintList();
    cout<<"����ǰ������b�ĳ���Ϊ:";
    cout<<b.Length()<<endl;
    try
    {
        b.Insert(3,8);
    }
    catch(char* wrong)
    {
        cout << wrong;
    }
    cout<<"ִ�в������������bΪ:"<<endl;
    b.PrintList();
    cout<<"���������b�ĳ���Ϊ:";
    cout<<b.Length()<<endl;
    cout<<endl;
    try
    {
        if(a.Length()){
            cout<<"ִ��ɾ����һ��Ԫ�ز���:"<<endl;
            cout<<endl;
            b.Delete(1);
            cout<<"��ɾ���ɹ���������b�ĳ���Ϊ:";
            cout<<b.Length()<<endl;
        }
        else{
            cout<<"˳���b����Ϊ0"<<endl;
        }
    }
    catch(char* wrong)
    {
        cout << wrong;
    }
    cout<<"ִ�в������������bΪ:"<<endl;
    b.PrintList();
}


