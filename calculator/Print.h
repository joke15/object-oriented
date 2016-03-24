/**************************************************************
FileName:         Print.h
Description:     用来输出所传入的队列 
Function List: 
                 1. output 将得到的队列进行判断，并根据要求输出 
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
    	Description:      传入队列，将队列的情况作区分，并按照每种情况去输出队列
		Input:            que<string>m_queQ 传入函数的队列
		                  t  用来判断队列的情况，分情况对队列进行输出
	    Output:           输出队列
		Return:           空函数，无返回值 
		Others：          若进入的队列不符合情况，输出Error，否则队列中每个元素
		                  输出一行。 
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
