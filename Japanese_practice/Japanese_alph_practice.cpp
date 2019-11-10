#include <iostream>
#include <stdlib.h>  // rand()'s lib
#include <string>

#define alphabet_num 5  // number of 50 Japanese  alphabets
#define words_num 16    // number of Japanese words
using namespace std;

int main()
{
	string alphabets[alphabet_num] = {"a", "i", "u", "e", "o"};
	string words[words_num] = {"爱", "画", "蓝色", "鱼", 
								"鱿鱼", "车站", "池塘", "书写", "脸", "秋天",
								"寿司", "椅子", "酒", "点心", "世界", "早上"};
	
	int flag = 0;
	cout << "开始日语练习？1：开始，0：退出" << endl;
	cin >> flag;

	while(flag)
	{
		int alph_pos = rand() % (alphabet_num - 0);
		int words_pos = rand() % (words_num - 0);
		cout << "请写字母：" << alphabets[alph_pos] << endl;
		cout << "请写单词：" << words[words_pos] << endl;
		cout << "退出请按0，下一组请按1：";
		cin >> flag; 
		cout << endl;
	}

	cout << "退出程序！" << endl;
}