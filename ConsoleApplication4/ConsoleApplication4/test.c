#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
int main1()
{
	/*Aѡ��˵��B�ڶ����ҵ�����
		Bѡ��˵���ҵڶ���E���ģ�
		Cѡ��˵���ҵ�һ��D�ڶ���
		Dѡ��˵��C����ҵ�����
		Eѡ��˵���ҵ��ģ�A��һ��*/
	int a, b, c, d, e;
	for (a = 1; a<= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			for (c = 1; c <= 5; c++)
			{
				for (d = 1; d<= 5; d++)
				{
					for (e = 1; e <= 5; e++)
					{
						if ((b == 2) + (a == 3) == 1 &&
							(b == 2) + (e == 4) == 1 &&
							(c == 1) + (d == 2) == 1 &&
							(c == 5) + (d == 3) == 1 &&
							(e == 4) + (a == 1) == 1 &&
							a!=b&&a!=c&&a!=d&&a!=e&&
							b!=c&&b!=d&&b!=e&&
							c!=d&&c!=e&&
							d!=e)
							printf("a�ǵ�%d,\n"
							"b�ǵ�%d,\n"
							"c�ǵ�%d,\n"
							"d�ǵ�%d,\n"
							"e�ǵ�%d,\n",a,b,c,d,e);
					}
				}
			}
		}
	}
	system("pause");
	return 0;
}