#pragma once
// �������������ʾ
typedef enum {ATOM,LIST} ELEMTAG;
typedef int AtomType;
typedef struct GListNode
{
	ELEMTAG tag; 
	union 
	{
		AtomType atom;
		struct { struct GListNode * ph, *pt;} ptn;
	};
} * GList;



//���������Դ����ʾ
typedef struct GLListNode
{
	ELEMTAG tag;
	union 
	{
		AtomType atom;
		struct GLListNode * ph;
	};
	struct GLListNode * pt;
} * GLList;