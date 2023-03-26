#include<stdio.h>
void main() {
	char arr[20];	//定义字符串数组
	int i;
	printf("请输入明文：");
	gets(arr);	//输入字符串
	for (i = 0; i < 20; i++) {
		if (arr[i] < 91 && arr[i] > 64) {	//判断是否为大写，这里运用Ascll 码表，大写字母从65~90 要实现 A -> Z 则 需满足26 - i+1
			arr[i] = (90 - arr[i] + 1) + 64;
		}
		else if (arr[i] > 96 && arr[i] < 123) {	//判断是否为小写
			arr[i] = (122 - arr[i] + 1) + 96;
 		}
	}
	printf("加密后的密文为");

	puts(arr);	//输出字符
}