#include <stdio.h>
#include "LinkQueue.h"
#include "stack.h"

/*//stack smoke test
int main(void)
{
	Stack teststack;
	Stack * pstack = &teststack;
	status test_status;
	//init
	test_status = initStack(pstack);
	printf("after init test_stauts = %d\n", test_status);
	printf("after init is empty stack = %d\n", isEmptyStack(pstack));
	printf("after init stack length = %d\n", getStackLength(pstack));

	Elemt emt1 = { 1,1.0 };
	push(pstack, emt1);
	printf("after push emt1 is empty stack = %d\n", isEmptyStack(pstack));
	printf("after push emt1 stack length = %d\n", getStackLength(pstack));

	Elemt emt2 = { 2,2.0 };
	push(pstack, emt2);
	printf("after push emt2 is empty stack = %d\n", isEmptyStack(pstack));
	printf("after push emt2 stack length = %d\n", getStackLength(pstack));

	Elemt emt3;
	getTopElem(pstack, &emt3);
	printf("get top elememt emt3: %d %f\n", emt3.iValue, emt3.fValue);
	puts("====pop stack test ====");
	Elemt emt4;
	pop(pstack, &emt4);
	printf("stacklength = %d\n", getStackLength(pstack));
	printf("emt4: %d %f\n", emt4.iValue, emt4.fValue);
	puts("=====test over!====");
}
*/

/* //n �׺�ŵ������
void move(char src, int disk, char dst)
{
	static int step = 1;
	printf("step %d:move disk %d on src:%c to dst:%c\n", step++,disk, src, dst);
}
//������x�ϰ�ֱ����С���������϶��±��Ϊ1��n��n��Բ�̰��չ���ᵽ����z�ϣ�y��Ϊ����
void hanoi(int n, char x, char y, char z)
{
	if (n == 1)
	{
		move(x, 1, z);
	}
	else
	{
		hanoi(n - 1, x, z, y);
		move(x, n, z);
		hanoi(n - 1, y, x, z);
	}
}
int main(void)
{
	int disk;
	puts("Enter disk num:");
	scanf_s("%d", &disk);
	hanoi(disk, 'X', 'Y', 'Z');
}*/

/*���в���*/
int main(void)
{
	LinkQueue testlinkqueue;
	puts("====init a queue====");
	initQueue(&testlinkqueue);
	printf("queue length = %d\n", getLength(&testlinkqueue));

	//QElemt elemt1 = { 1,1.0 };
	//puts("====enqueue elment 1====");
	//enQueue(plinkqueue, &elemt1);
	//printf("queuelength = %d ", getLength(plinkqueue));

}



