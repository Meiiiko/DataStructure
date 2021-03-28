#include<iostream>

using namespace std;
const int INCRGAP = 2;

void shellSort(int a[], int len) {
    int insertNum = 0;
    unsigned gap = len / INCRGAP; // ������ʼ��
    while (gap) // while gap>=1
    {
        for (unsigned i = gap; i < len; ++i) // ���飬��ÿ���������н��в�������
        {
            insertNum = a[i];//����ǰ��Ԫ��ֵ�ȴ���������������
            unsigned j = i;
            while (j >= gap && insertNum < a[j - gap])//Ѱ�Ҳ���λ��
            {
                a[j] = a[j - gap];
                j -= gap;
            }
            a[j] = insertNum;
        }
        gap = gap / INCRGAP;
    }
}

int main() {
    int array[11] = {2, 1, 4, 3, 11, 6, 5, 7, 8, 10, 15};
    cout<<"ԭ��"<<endl;
    for(int i=0;i<11;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    cout<<"shell�����:"<<endl;
    shellSort(array, 11);
    for (auto it: array) {
        cout << it << " ";
    }
    return 0;
}
