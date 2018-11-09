#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int n) {
	int i, flag;
	flag = 1;
	for (i = 2; i <= n - 1; i++) {
		if (n%i == 0) {
			flag = 0;
			break;
		}
		return flag;
	}
}
void f1(float a1, float b1, float c1,float t1) {
	float x1, x2;
	x1 = -b1 / 2 * a1 + sqrt(t1) / 2 * a1;
	x2 = -b1 / 2 * a1 - sqrt(t1) / 2 * a1;
}
void f2(float a1, float b1, float c1) {
	float x1, x2;
	x1 = -b1 / 2 * a1;
	x2 = x1;
	printf("x1=%f x2=%f\n", x1, x2);
}
void f3() {
	printf("没有实根!\n");
}
char *str_p(char*p, int i, int cnt) {
	char*q;
	for (i = i - 1; i; i--) {
		++p;
	}
	q = p;
	for (; cnt >= 1; cnt--) {
		++q;
	}
	*q = '\0';
	return p;
}

void Max(float*p) {
	float m = *p;
	while (*p) {
		if (*p > m) {
			m = *p;
		}
		p++;
	}
	printf("max=%.2f\n", m);
}
void Min(float*p) {
	float m = *p;
	int i;
	for (i = 1; i <= 29; i++) {
		if (m > p[i]) {
			m = p[i];
		}
	}
	printf("min=%.2f\n", m);
}
void ave(float*p) {
	float s = 0;
	while (*p) {
		s += *p;
		p++;
	}
	printf("ave=%.2f\n", s / 3);
}
int main() {

	float stu[30];
	int i;
	for (i = 0; i < 30; i++) {
		scanf("%f", &stu[i]);
		Max(stu);
		Min(stu);
		ave(stu);
	}


	char *p_str, str[30];
	int m, n;
	printf("输入一个字符串:\n");
	gets(str);
	printf("输入截取的起始位置和截取的个数:\n");
	scanf("%d%d", &m, &n);
	printf("原有的字符串为:%s\n",str);
	p_str = str_p(str, m, n);
	printf("新截取的字符串为:%s\n", p_str);

	float a, b, c, t;
	scanf("%f%f%f", &a, &b, &c);
	t = b*b - 4*a*c;
	if (t > 0) {
		f1(a, b, c, t);
	}
	else if (t == 0) {
		f2(a, b, c);
	}
	else {
		f3();
	}

	int m, sign;
	printf("Enter a data:\n");
	scanf("%d", &m);
	sign = prime(m);
	if (sign) {
		printf("%d is a prime!\n", m);
	}
	else {
		printf("%d is not a prime\n", m);
	}


	char *str[20];
	char *p, *q;
	p = q = str;
	gets(str);
	while (*p) {
		if (*p != '*') {
			*q++ = *p;
		}
		p++;
	}
	*q = '\0';
	puts(str);
	system("pause");
	return 0;
}