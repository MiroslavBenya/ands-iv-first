/* -----
 * ������� �������� ��������� �� ��������� ����� � ������ ���
 ----- */

void convertWordtoSet (int bitWord, bool* bitSet){
    for (int i=0; i<10; ++i)
        bitSet[i]= (bitWord >> i) & 1;
}