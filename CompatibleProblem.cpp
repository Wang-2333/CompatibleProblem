#include<stdio.h>

typedef struct {
	int s;
	int f;
}l;


int main()
{
	l list[100];
	int n;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d %d", &list[i].s, &list[i].f);
	}
	for (int i = 1; i < n - 1; i++)  //�Ի����ʱ���ǰ��������
	{
		for (int j = 1; j < n - 1 - i; j++)
		{
			l temp;
			if (list[j].f > list[j + 1].f)
			{
				temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
			}
		}
	}
	printf("�%d:%d->%d\n", 1, list[0].s, list[0].f);
	int k = 0;
	for (int i = 1; i < n; i++) //���ں�ǰ��Ļ���ݵĻ���
	{
		if (list[i].s > list[k].f)
		{
			k = i;
			printf("�%d:%d->%d\n", i+1, list[i].s, list[i].f);
		}
	}
	return 0;
}
