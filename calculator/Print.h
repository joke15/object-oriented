/**************************************************************
FileName:         Print.h
Description:     �������������Ķ��� 
Function List: 
                 1. output ���õ��Ķ��н����жϣ�������Ҫ����� 
**************************************************************/
#ifndef PRINT_H
#define PRINT_H
#include <stdlib.h>
#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Print
{
    public:
    	/************************************************************************
    	Description:      ������У������е���������֣�������ÿ�����ȥ�������
		Input:            que<string>m_queQ ���뺯���Ķ���
		                  t  �����ж϶��е������������Զ��н������
	    Output:           �������
		Return:           �պ������޷���ֵ 
		Others��          ������Ķ��в�������������Error�����������ÿ��Ԫ��
		                  ���һ�С� 
    	************************************************************************/
        void output (queue <string>m_queQ)
        {
            bool t;
            t=true;
            if (m_queQ.back() == "E")
            {
                cout << "Error" << endl;
                t=false;
            }
            
            while (m_queQ.size() && t)
            {
                cout << m_queQ.front() << endl;
                m_queQ.pop();
            }
        }
};

#endif
