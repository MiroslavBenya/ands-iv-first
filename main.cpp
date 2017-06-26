/* -\----
 * �������  : 5
 * ���������: ���������� �����
 * �������  : ���������, ���������� ��� ����� ��������� A, �� ����������� ���� �� B � C, � ����� ��� ����� �� D
 ----- */

#include <iostream>
#include <locale.h>

#include <bitWord/bitWord.h>
#include <bitSet/bitSet.h>
#include <convert/convert.h>

using namespace std;

int main (int argc, char **argv) {
	
	setlocale (LC_ALL,"Russian");
	
    /* ������ �������� ����� */
	unsigned int bitWord[5];
	bitWord[0]=0x00DC; // ��������� A
	bitWord[1]=0x000D; // ��������� B
	bitWord[2]=0x0140; // ��������� C
	bitWord[3]=0x0202; // ��������� D
    
    /* ������ ������� ��� */
    bool** bitSet= new bool*[5];
    bitSet[0] = new bool[10]; // ��������� �
    bitSet[1] = new bool[10]; // ��������� B
    bitSet[2] = new bool[10]; // ��������� C
    bitSet[3] = new bool[10]; // ��������� D
    bitSet[4] = new bool[10]; // ��������� E
    
    /* ������������ ������� ����� � ������� ��� */
    for (int i; i<5; ++i)
        convertWordtoSet(bitWord[i],bitSet[i]);
    
    /* ��������� ��������� E ��� ��������� ����� */
	bitWord[4]=bitWordCalculate(bitWord[0],bitWord[1],bitWord[2],bitWord[3]);
    
	return 0;
}
