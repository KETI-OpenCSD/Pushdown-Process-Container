#ifndef _KETI_TYPE_H_
#define _KETI_TYPE_H_

typedef enum work_type{
	SCAN = 4,
	SCAN_N_FILTER = 5,
	REQ_SCANED_BLOCK = 6,
	WORK_END = 9
}KETI_WORK_TYPE;

typedef enum opertype
{
    KETI_GE = 0,  // >=
    KETI_LE,      // <=
    KETI_GT,      // >
    KETI_LT,      // <
    KETI_ET,      // ==
    KETI_NE,      // !=
    KETI_LIKE,    // RV�� ��Ʈ��
    KETI_BETWEEN, // extra�� �迭���� [10,20] OR [COL1,20]
    KETI_IN,      // extra�� �迭���� [10,20,30,40]
    KETI_IS,      // IS �� IS NOT�� ���� RV�� ������ NULL
    KETI_ISNOT,   // IS�� ���� �ʿ� RV�� ������ NULL
    KETI_NOT,     // ISNOT�� ���� ���� OPERATOR �տ� �ٴ� ���� --> ȥ�� ������ oper
    KETI_AND,     // AND --> ȥ�� ������ oper
    KETI_OR,      // OR --> ȥ�� ������ oper
	KETI_DEFAULT = 15
}KETI_OPER_TYPE;

#endif
