#include "AdjMatrixGraph.h"
#include <iostream>
#include <iomanip>

using namespace std;

/*
*ǰ��������ͼ������
*�� �룺n �����㣬e ����
*�� �ܣ�ͼ�ĳ�ʼ��
*�� ������
*��������������һ������ n ������ e ���ߵ�ͼ
*/
template<class T>
AdjMatrixGraph<T>::AdjMatrixGraph(T a[], GRAPHFLAG flag, int n, int e) {
    vertexNum = n;
    arcNum = e;
    graphFlag = flag;
    for (int i = 0; i < vertexNum; i++) {
        vertex[i] = a[i];
    }
    for (int i = 0; i < vertexNum; i++) //��ʼ���ڽӾ���
        for (int j = 0; j < vertexNum; j++)
            arc[i][j] = 0;
    for (int k = 0; k < arcNum; k++) //��������ÿһ����
    {
        cout << "������ͼ�бߣ������������ڽӵ㣺" << endl;
        int vi, vj;
        cin >> vi >> vj; //�������������������ı��
        if (graphFlag == UNDGRAPH) {
            arc[vi][vj] = 1;
            arc[vj][vi] = 1; //���б߱�־
        } else {
            arc[vi][vj] = 1; //���б߱�־
        }
    }
}

/*
*ǰ��������ͼ�Ѵ���
*�� �룺��������ʼ���� v
*�� �ܣ��Ӷ��� v ����������ȱ���ͼ
*�� ����ͼ��������ȱ�������
*����������ͼ���ֲ���
*/
template<class T>
void AdjMatrixGraph<T>::DFSTraverse(int v) {
    resetVisitFlag();
    DFST(v);
    for (int i = 0; i < vertexNum; ++i) {
        if (visited[i] == 0) {
            cout << "������ȱ������ַ���ͨ���㣡" << endl;
            DFST(i);
        }
    }
}

/*
*ǰ��������ͼ�Ѵ���
*�� �룺��������ʼ���� v
*�� �ܣ��Ӷ��� v ����������ȱ���ͼ
*�� ����ͼ��������ȱ�������
*����������ͼ���ֲ���
*/
template<class T>
void AdjMatrixGraph<T>::DFST(int v) {
    cout << "������ȱ������㣺" << vertex[v] << endl;
    visited[v] = 1;
    for (int j = 0; j < vertexNum; j++)
        if (arc[v][j] == 1 && visited[j] == 0) DFST(j);
}

/*
*ǰ��������ͼ�Ѵ���
*�� �룺��������ʼ���� v
*�� �ܣ��Ӷ��� v ����������ȱ���ͼ
*�� ����ͼ�Ĺ�����ȱ�������
*����������ͼ���ֲ���
*/
template<class T>
void AdjMatrixGraph<T>::BFSTraverse(int v) {
    resetVisitFlag();
    BFST(v);
    for (int i = 0; i < vertexNum; ++i) {
        if (visited[i] == 0) {
            cout << "������ȱ������ַ���ͨ���㣡" << endl;
            BFST(i);
        }
    }
}

/*
*ǰ��������ͼ�Ѵ���
*�� �룺��������ʼ���� v
*�� �ܣ��Ӷ��� v ����������ȱ���ͼ
*�� ����ͼ�Ĺ�����ȱ�������
*����������ͼ���ֲ���
*/
template<class T>
void AdjMatrixGraph<T>::BFST(int v) {
    int Q[MaxSize];
    int front, rear;
    front = rear = -1; //��ʼ��˳�����
    cout << "������ȱ�����ʼ���㣺" << vertex[v] << endl;
    visited[v] = 1;
    Q[++rear] = v;
    while (front != rear) //�����зǿ�ʱ
    {
        v = Q[++front]; //����ͷԪ�س��Ӳ��͵� v ��
        for (int j = 0; j < vertexNum; j++)
            if (arc[v][j] == 1 && visited[j] == 0) {
                cout << "������ȱ������㣺" << vertex[j] << endl;
                visited[j] = 1;
                Q[++rear] = j;
            }
    }
}

/*
*ǰ��������ͼ�Ѵ���
*�� �룺��
*�� �ܣ�����ͼ�ж�����ʱ�ʾ
*�� ������
*����������ͼ�����ж���δ������
*/
template<class T>
void AdjMatrixGraph<T>::resetVisitFlag() {
    for (int i = 0; i < vertexNum; i++) {
        visited[i] = 0;
    }
}

/*
*ǰ��������ͼ�Ѵ���
*�� �룺��
*�� �ܣ���ӡ�ڽӾ���
*�� ������
*������������
*/
template<class T>
void AdjMatrixGraph<T>::printAdjMatrix() {
    for (int i = 0; i < vertexNum; ++i) {
        for (int j = 0; j < vertexNum; ++j) {
            cout << setw(3) << arc[i][j] << " ";
        }
        cout << endl;
    }
}