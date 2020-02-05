#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//push(int x) : ���ÿ� ����x�� Ǫ���Ѵ�. ������ �� ���� push�� �� ������ ��� �����÷ο� ���
//pop : ���ÿ��� ���� �ϳ��� pop�Ѵ�. ���� ������ ����־ pop�� �� �� ���ٸ�, ����÷ο츦 ����Ѵ�
//top : ������ top�� �ִ� ������ ����Ѵ�. ���� ������ ����ִٸ� "NULL"�� ����Ѵ�.

//1�� push, 2�� pop, 3�� top ������ �ǹ�

typedef struct Stack {
	int data[110];
	int len = 0;
	int capacity = 0;

	void create(int x)
	{
		capacity = x;
	}
	void push(int x)
	{
		if (len >= capacity)
		{
			printf("Overflow\n");
		}
		else
		{
			data[len++] = x;
		}
	}
	void pop()
	{
		if (len <= 0)
		{
			printf("Underflow\n");
		}
		else
		{
			data[len - 1] = 0;
			len--;
		}
	}
	int top()
	{
		if (len <= 0)
		{
			printf("NULL\n");
		}
		else
		{
			return data[len - 1];
		}
	}
}S;

int main()
{
	int size; // stack�� ũ��
	int m; //������ ����
	int choice, ins;
	S s1;

	scanf("%d %d", &size, &m);
	s1.create(size);

	for (int i = 0; i < m; i++)
	{
		scanf("%d", &choice);
		
		if (choice == 1)
		{
			scanf("%d", &ins);
			s1.push(ins);
		}
		else if (choice == 2)
		{
			s1.pop();
		}
		else
		{
			printf("%d\n", s1.top());
		}
		
	}

	return 0;
}