#include <stdio.h>
 
int main(){

	int t, h, w, n;  // t�� �մ��� �������,h�� ����, w�� ����, n�� ���° �մ�����
	int count;    // ��ȣ���� üũ�� ����
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
    count = 1;    //  ���� 1ȣ���� �����ϴ� 1�� �������־���.
		scanf("%d %d %d", &h, &w, &n);
		while (n > h) {    // �մ��� ��ȣ���� �ǹ��� ���̸�ŭ ���ִ� �ݺ��� 
			n -= h;       
			count++;
            
            // ���̰� �������ְ� ������ ��Ģ�� �ִ� �ǹ����� ���° �մ������� ���� �ǹ��� ���̸�ŭ ���ְ� ���������� �̵��Ҷ����� ȣ������ +1�� ���־���. 
		}
		printf("%d%02d\n", n, count);   // %02d�� ����� �տ� ��ĭ�� �������� 00���� ����϶�� �ǹ��̴�. 
	}


	return 0; 
}