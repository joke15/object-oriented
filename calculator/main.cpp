#include "Scan.h"
#include "Print.h"
#include <stdlib.h>
#include <iostream>
#include <string>
#include <queue>
using namespace std;

int main ()
{
	Scan scan;
	Print print;
	string s;//用S记录用户输入的四则表达式// 
	cin >>s;
	queue<string> q=scan.ToStringQueue(s);
	print.output(q);
	return 0;
}
