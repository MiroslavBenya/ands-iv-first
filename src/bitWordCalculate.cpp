/* -----
 * ������� ���������� ��������� E � ���� ��������� ����� �������� ������� ��� �������� 5.
 ----- */

unsigned int bitWordCalculate (int A, int B, int C, int D){
	int E;
	return E = ( A & ~( B | C ) ) | D;
}