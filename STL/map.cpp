#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main()
{
	map<string, int> month;
	month[string("一月")] = 1;
	month[string("二月")] = 2;
	month[string("三月")] = 3;
	month[string("四月")] = 4;
	month[string("五月")] = 5;

	month[string("六月")] = 6;    //最简单的插入方法

	pair<string, int> July(string("七月"), 7);   //使用pair的插入方法

	month.insert(July);   

	//对于容器，只能使用迭代器iterator进行读取，构建month的迭代器，其中元素为first和second，使用->来读取
	map<string, int>::iterator month_iter;

	month_iter = month.begin();
	for(; month_iter != month.end(); month_iter++)
	{
		cout << month_iter->first << endl;
	}

	string input_month = "";
	cout << "请输入月份：" << endl;
	cin >> input_month;
	map<string, int>::iterator month_iter2;
	month_iter2 = month.find(input_month);
	if(month_iter2 == month.end())
	{
		cout << "无" << endl;
	}
	else
	{
		cout << "查到了" << endl;
		cout << "位置为：" << month_iter2->second << endl;
	}
}
