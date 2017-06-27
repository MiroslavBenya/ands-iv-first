/*
 * �������������� �������� ������� �� �������� ��������� � ��������� ������
 * ������� 12
 * �������: ��������� ���������, ����������� �����, ��������� � ����� �� �������� A, B, C, �� ������������� � D.
 * ����������� �����: ����������� ������
 * �������� ������� �. �.
 */

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <set.h>
#include <cstdlib>
#include <time.h>

using namespace std;
int main(int argc, char **argv)
{
    srand (time(NULL));
    
    const int n=23;
    char A[n];
    char B[n];
    char C[n];
    char D[n];
    cout << "����� ���������� � ��������� �������." << endl <<  "������� ������������� ������ �������������? (1 - ��, 0 - ���)";
    bool choice;
    cin >> choice;
    if (choice==1) {
        const int a=97;
        for (int i=0; i<n; ++i)
            A[i]=rand()%n+a;
        for (int i=0; i<n; ++i)
            B[i]=rand()%n+a;
        for (int i=0; i<n; ++i)
            C[i]=rand()%n+a;
        for (int i=0; i<n; ++i)
            D[i]=rand()%n+a;
    }
    else {
        cout << endl << "������� ��������� �: ";
        cin >> A;
        cout << endl << "������� ��������� B: ";
        cin >> B;
        cout << endl << "������� ��������� C: ";
        cin >> C;
        cout << endl << "������� ��������� D: ";
        cin >> D;
    }
    cout << endl << "������������ ������ ��� ��������� ��������:" << endl;
    cout << "��������� A: " << A << endl;
    cout << "��������� B: " << B << endl;
    cout << "��������� C: " << C << endl;
    cout << "��������� D: " << D << endl;
    cout << "�������� ������ �������������� ������� E=(A|B|C)&~D" << endl;
    Set *LA=NULL;
    Set *LB=NULL;
    Set *LC=NULL;
    Set *LD=NULL;
    Set *LE=NULL;
    cout << "�������������� �������� �������� � ������: ";
    LA=convertDataToList(LA, A, strlen(A));
    cout << endl << "������ LA: "; printSet(LA);
    LB=convertDataToList(LB, B, strlen(B));
    cout << endl << "������ LB: "; printSet(LB);
    LC=convertDataToList(LC, C, strlen(C));
    cout << endl << "������ LC: "; printSet(LC);
    LD=convertDataToList(LD, D, strlen(D));
    cout << endl << "������ LD: "; printSet(LD);    
    LE=calculateSet(LA, LB, LC, LD, LE);
    cout << endl << "������ LE: "; printSet(LE);
    
    getchar();
    return 0;
}