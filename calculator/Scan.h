/**************************************************************
FileName:         Scan.h
Description:      ���û������string���������ɨ�裬����������
                  ������ȡ��������������У������ض���
Function List:
                 1. ToStringQueue(string input)
                 ���õ��ĺ�������ɨ�裬���������ַ�������У����ҷ��ض���
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
        Description:      �����뺯����string���������ɨ�裬����������
                          ������ȡ��������������У������ض���
        Input:            1. input   ���뺯����string����
                          2. i       ��¼ѭ���Ĵ���
        				  3. k       �ж��Ƿ���С����
        				  4. m_strS  ��ʱ������Ҫ������е�string
        				  5. j       �ж���ȡ�����ֻ�����Ƿ�����
        				  6. l       �ж�m_strS�ĳ���
        Output:           ��
        Return:           ����Ϊ����
        Others��          ��
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
                    m_queQ.push("E");/*�ڶ���������E����Ǵ�ʱ�õ������ֳ���ʮλ*/
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
