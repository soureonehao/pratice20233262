#include<stdio.h>
void main() {
	char arr[20];	//�����ַ�������
	int i;
	printf("���������ģ�");
	gets(arr);	//�����ַ���
	for (i = 0; i < 20; i++) {
		if (arr[i] < 91 && arr[i] > 64) {	//�ж��Ƿ�Ϊ��д����������Ascll �����д��ĸ��65~90 Ҫʵ�� A -> Z �� ������26 - i+1
			arr[i] = (90 - arr[i] + 1) + 64;
		}
		else if (arr[i] > 96 && arr[i] < 123) {	//�ж��Ƿ�ΪСд
			arr[i] = (122 - arr[i] + 1) + 96;
 		}
	}
	printf("���ܺ������Ϊ");

	puts(arr);	//����ַ�
}