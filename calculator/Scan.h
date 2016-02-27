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
		queue<string>ToStringQueue(string input)
		{
			queue <string> m_queQ;
			int i;
			bool j=false;
			string m_strS;
            int k=0;
            int l;
			for (i=0; i<input.size();i++)
			{	
			    j=false;		
				if (input[i]<='9' && input[i]>='0' && input[i+1]<='9' && input[i+1]>='0')
				{
					m_strS+=input[i];
					j=false;
				}
				else if (input[i]=='.' || input[i+1]=='.')
                {
                    m_strS+=input[i];
                    j=false;
                    k=-1;
                }
                else
				{
					m_strS+=input[i];
					j=true;
				}
                l=m_strS.size();
                if (l+k>10)
                {
                	m_queQ.push("E");
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
