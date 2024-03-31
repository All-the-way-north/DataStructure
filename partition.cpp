#include <bits/stdc++.h>
using namespace std;

#define MAXSIZE 50

typedef int ELemType;
typedef struct {
	ELemType data[MAXSIZE];
	int length;
}SqList;

void partition1(SqList*& L)
{
	int i = 0, j = L->length - 1;
	ELemType k = L->data[0];
	while (i < j)
	{
		while (L->data[i] <= k)
			i++;
		while (L->data[j] > k)
			j--;
		if (i < j)
			swap(L->data[i], L->data[j]);
	}
	swap(L->data[i], L->data[0]);
	swap(L->data[0], L->data[i]);
	swap(L->data[0], L->data[j]);
}

