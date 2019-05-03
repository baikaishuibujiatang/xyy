#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct {
	char data[1000];
	int len;
}HighAcc;
//a = +(4, 5);
//a = 4 + 5;  +相当函数，把4,5传进去，给新变量
HighAcc add(HighAcc a, HighAcc b)
{
	HighAcc sum = { 0 };
	int tmp;
	int i;
	int maxlen = a.len> b.len ? a.len : b.len;
	for (i = 0; i < maxlen; i++)
	{
		tmp=a.data[i] + b.data[i]+sum.data[i];
		sum.data[i] = tmp % 10;
		sum.data[i + 1] = tmp / 10;
	}
	sum.len = maxlen + sum.data[maxlen];
	return sum;
}
void dealNumber(HighAcc *h)
{
	int i = 0, j = strlen(h->data) - 1; 
	char tmp;
	h->len = j + 1;
	for (; i <= j; i++, j--)
	{
		tmp =h-> data[i];
		h->data[i] = h->data[j] - '0';
		h->data[j] = tmp - '0';
	} 
} 
void printNumber(HighAcc h)
{
	int i;
	for (i = h.len - 1; i >= 0; i--)
	{
		putchar(h.data[i] + '0');
	}
}
int main()
{
	HighAcc a = { 0 };
	HighAcc b = { 0 };
	HighAcc sum;
	scanf("%s%s", a.data, b.data);
	dealNumber(&a);
	dealNumber(&b);
	sum = add(a, b);
	printNumber(sum);
	putchar('\n');
	system("pause");
	return 0;
}
