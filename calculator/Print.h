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
		void output (queue <string>m_queQ)
		{
			bool t;// t��ʾ���������֮������// 
			t=true;
            if (m_queQ.back()=="E")//��ǰ�����E�ڴ�ʱ�������ã���βΪE����Ҫ����// 
            {
                cout <<"Error"<< endl;
                t=false;
            }
			while (m_queQ.size() && t)
			{
				cout << m_queQ.front() <<endl;
				m_queQ.pop();
			}
		}
};

#endif
