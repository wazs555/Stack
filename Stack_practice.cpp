#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//push(int x) : 스택에 정수x를 푸시한다. 스택이 꽉 차서 push할 수 업슨ㄴ 경우 오버플로우 출력
//pop : 스택에서 정수 하나를 pop한다. 만약 스택이 비어있어서 pop을 할 수 없다면, 언더플로우를 출력한다
//top : 스택의 top에 있는 정수를 출력한다. 만약 스택이 비어있다면 "NULL"을 출력한다.

//1은 push, 2는 pop, 3은 top 연산을 의미

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
	int size; // stack의 크기
	int m; //연산의 개수
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