/* -----
 * �������  : 5
 * ���������: ���������� �����
 * �������  : ���������, ���������� ��� ����� ��������� A, �� ����������� ���� �� B � C, � ����� ��� ����� �� D
 ----- */

#include <stdio.h>
#include <locale.h>
#include <bitWord/bitWord.h>

int main (int argc, char **argv) {
	
	setlocale (LC_ALL,"Russian");
	
	unsigned int bitWord[5]; // ������ �������� ����
	bitWord[0]=0x00DC; // ��������� A
	bitWord[1]=0x000D; // ��������� B
	bitWord[2]=0x0140; // ��������� C
	bitWord[3]=0x0202; // ��������� D
	
	bitWord[4]=bitWordCalculate(bitWord[0],bitWord[1],bitWord[2],bitWord[3]);
	printf ("���������: %x",bitWord[4]);

	return 0;
}
