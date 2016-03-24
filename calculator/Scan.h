/**************************************************************
FileName:         Scan.h
Description:      将用户输入的string类变量进行扫描，并将符号与
                  数字提取出来，存入队列中，并返回队列
Function List:
                 1. ToStringQueue(string input)
                 将得到的函数进行扫描，将数字与字符存入队列，并且返回队列
**************************************************************/
#ifndef SCAN_H
#define SCAN_H
#include <stdlib.h>
#include <iostream>
#include <string>
#include <queue>
using namespace std;

class Scan
{
    public:
        /************************************************************************
        Description:      将传入函数的string类变量进行扫描，并将符号与
                          数字提取出来，存入队列中，并返回队列
        Input:            1. input   传入函数的string变量
                          2. i       记录循环的次数
        				  3. k       判断是否有小数点
        				  4. m_strS  临时储存需要存入队列的string
        				  5. j       判断提取的数字或符号是否完整
        				  6. l       判断m_strS的长度
        Output:           无
        Return:           返回为队列
        Others：          无
        ************************************************************************/
        queue<string>ToStringQueue(string input)
        {
            queue <string> m_queQ;
            int i;
            bool j=false;
            string m_strS;
            int k=0;
            for (i=0; i<input.size(); i++)
            {
                j=false;

                if (input[i] <= '9' && input[i] >= '0' && input[i+1] <= '9' && input[i+1] >= '0')
                {
                    m_strS += input[i];
                    j=false;
                }

                else if (input[i] == '.' || input[i+1] == '.')
                {
                    m_strS += input[i];
                    j=false;
                    k=-1;
                }

                else
                {
                    m_strS += input[i];
                    j=true;
                }

                int l=m_strS.size();

                if (l+k>10)
                {
                    m_queQ.push("E");/*在队列最后插入E，标记此时得到的数字超过十位*/
                    break;
                }

                if(j)
                {
                    m_queQ.push(m_strS);
                    m_strS.clear();
                }
            }
            return m_queQ;
        }
};

#endif
