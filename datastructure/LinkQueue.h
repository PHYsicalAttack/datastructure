#pragma once
#include "common.h"

typedef struct QElemt
{
	int iValue;
	float fValue;
} QElemt;

typedef struct QNode
{
	QElemt data;
	struct QNode * next;
} QNode, * pQNode;

typedef struct LinkQueue
{
	pQNode  near;
	pQNode  rear;
}LinkQueue;

//���еĻ�������
//����һ���ն���
status initQueue(LinkQueue * plinkqueue);

//�ݻ�һ���ն���
status destoryQueue(LinkQueue * plinkqueue);

//���һ���ն���
status clearQueue(LinkQueue * plinkqueue);

//���еĵ�ǰ����
int getLength(LinkQueue * plinkqueue);

//ȡ�ö��еĶ�ͷ�����ݣ�����OK/ERROR
status getHead(LinkQueue * plinkqueue,QElemt * e);

//��Ԫ��ѹ�˶���
status enQueue(LinkQueue * plinkqueue, QElemt * e);

//����ͷ�������У�����OK/ERROR
status deQueue(LinkQueue * plinkqueue, QElemt * e);

