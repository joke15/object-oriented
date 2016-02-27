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
			bool t;// t表示报错后，跳过之后的输出// 
			t=true;
            if (m_queQ.back()=="E")//先前插入的E在此时发挥作用，队尾为E则需要报错// 
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
