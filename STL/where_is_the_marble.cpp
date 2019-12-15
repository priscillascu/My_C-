//本程序使用STL的排序和检索
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

const int max_n = 10000;

int main()
{
	int n;
	int q;
	int x;
	vector<int> a = {2, 3, 5, 1};
	int find_num = 3;
	sort(a.begin(), a.end());
	
	int pos = lower_bound(a.begin(), a.end(), find_num) - a.begin();
	cout << pos << endl;
	return 0;
}
