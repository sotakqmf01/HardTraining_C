#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char szPath[128] = { "C:\\Program Files\\" };

	strcat_s(szPath, sizeof(szPath), "CHS\\");
	strcat_s(szPath, sizeof(szPath), "C programming");
	puts(szPath);

	strcpy_s(szPath, sizeof(szPath), "C:\\Program Files\\");
	//strcat_s��� strcpy_s�� �ᵵ �� ����. �ֳ�? ���� write�� ������ �޸� �ּҸ� �˷���� ������
	strcpy_s(szPath + 17, sizeof(szPath) - 17, "CHS\\");				// -17 �� �տ��� 17��ŭ �����ϱ� ���� 111����Ʈ������ �� �� �� �ִٴ� ��
	strcpy_s(szPath + 17 + 4, sizeof(szPath) - 21, "C programming");

	//strcat(szPath + strlen("C:\\Program Files\\"), "CHS\\");
	//strcat(szPath + strlen("C:\\Program Fiels\\CHS\\"), "C programming");

	puts(szPath);

	return 0;
}