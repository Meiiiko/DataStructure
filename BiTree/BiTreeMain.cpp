
#include <iostream>
#include "BiTree.cpp"

using namespace std;


int main() {
    BiTree<char> a;
    cout << "------ǰ�����------ " << endl;
    a.PreOrder();
    cout << endl;
    cout << "------�������-----" << endl;
    a.InOrder();
    cout << endl;
    cout << "------�������-----" << endl;
    a.PostOrder();
    cout << endl;
    cout << "------�������-----" << endl;
    a.LeverOrder();
    cout << endl;
    system("pause");
    return 0;
}