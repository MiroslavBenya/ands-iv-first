// -----
// �������  : 5
// ���������: ���������� �����
// �������  : ���������, ���������� ��� ����� ��������� A, �� ����������� ���� �� B � C, � ����� ��� ����� �� D
// -----

#include <stdio.h>
#include <locale.h>

int main(int argc, char **argv)
{
	setlocale (LC_ALL,"Russian");

	unsigned int setBit[5]; // ������ �������� ����
	setBit[0]=0x00DC; // ��������� A
	setBit[1]=0x000D; // ��������� B
	setBit[2]=0x0140; // ��������� C
	setBit[3]=0x0202; // ��������� D
	setBit[4]=0x0000; // ��������� E

	return 0;
}
