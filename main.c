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

	int setBit[5]; // ������ �������� ����
	setBit[0]=0x000A; // ��������� A
	setBit[1]=0x00A0; // ��������� B
	setBit[2]=0x0A00; // ��������� C
	setBit[3]=0xA000; // ��������� D
	setBit[4]=0x0000; // ��������� E

	for (int i=0; i<5; ++i)
		printf ("%i ",setBit[i]);

	return 0;
}
