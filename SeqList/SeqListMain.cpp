#include <iostream>
#include "SeqList.cpp"
using namespace std;
int main(){
    SeqList<int> a;
    cout<<"ִ�в������:"<<endl;
    try{
        a.Insert(1,1);
        a.Insert(2,3);
        a.Insert(3,4);
    }
    catch (char* wrong) {
        cout<<wrong;
    }
    cout<<"�Ѿ�����\"1��3��5\""<<endl;
    cout<<endl;
    cout<<"˳���a�ĳ���Ϊ:";
    cout<<a.Length()<<endl;
    cout<<endl;
    cout<<"��λ��ѯ�ڶ���Ԫ��:"<<endl;
    cout<<a.Get(2)<<endl;
    cout<<endl;
    cout<<"��ֵ��ѯ3:"<<endl;
    cout<<"ֵΪ3��Ԫ��λ��Ϊ:";
    cout<<a.Locate(3)<<endl;
    cout<<endl;
    try {
        if(a.Length()){
            cout<<"ִ��ɾ����һ��Ԫ�صĲ���:"<<endl;
            cout<<endl;
            a.Delete(1);
            cout<<"�Ѿ�ɾ���ɹ���˳���a�ĳ���Ϊ:";
            cout<<a.Length()<<endl;
        } else{
            cout<<"˳�����Ϊ0!"<<endl;
        }
    }
    catch (char* wrong) {
        cout<<wrong;
    }
    cout<<endl;
    cout<<"˳���a�е�Ԫ����:"<<endl;
    a.PrintList();

    int r[]={1,2,3,4,5};
    SeqList<int>b(r,5);
    cout<<"ִ�в������ǰ˳���bΪ:"<<endl;
    b.PrintList();
    cout<<"����ǰ˳���b�ĳ���Ϊ:";
    cout<<b.Length()<<endl;
    try{
        b.Insert(3,8);
    }
    catch (char* wrong) {
        cout<<wrong;
    }
    cout<<"ִ�в��������˳���bΪ:"<<endl;
    b.PrintList();
    cout<<"�����˳���b�ĳ���Ϊ:";
    cout<<b.Length()<<endl;
    cout<<endl;
    try{
        if(a.Length()){
            cout<<"ִ��ɾ����һ��Ԫ�صĲ���:"<<endl;
            cout<<endl;
            b.Delete(1);
            cout<<"�ѳɹ�ɾ����˳���b�ĳ���Ϊ:";
            cout<<b.Length()<<endl;
        } else{
            cout<<"˳���b����Ϊ0"<<endl;
        }
    }
    catch (char* wrong) {
        cout<<wrong;
    }
    cout<<"ִ�в��������˳���bΪ:"<<endl;
    b.PrintList();
}