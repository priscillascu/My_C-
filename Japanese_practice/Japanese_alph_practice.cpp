#include <iostream>
#include <stdlib.h>  // rand()'s lib
#include <string>

#define alphabet_num 45  // number of 50 Japanese  alphabets
// #define words_num 16    // number of Japanese words
using namespace std;

int main()
{
	string alphabets[alphabet_num] = {"a", "i", "u", "e", "o", 
									"ka", "ki", "ku", "ke", "ko",
									"sa", "shi", "su", "se", "so",
									"ta", "chi", "tsu", "te", "to",
									"na", "ni", "nu", "ne", "no",
									"ha", "hi", "fu", "he", "ho",
									"ma", "mi", "mu", "me", "mo",
									"ya", "yu", "yo",
									"na", "ni", "nu", "ne", "no",
									"wa", "o_w"};
	//暂时关闭单词复习功能
	/*
	string words[words_num] = {"爱", "画", "蓝色", "鱼", 
								"鱿鱼", "车站", "池塘", "书写", "脸", "秋天",
								"寿司", "椅子", "酒", "点心", "世界", "早上"};
	*/

	for(int i = 0; i < 3*alphabet_num; i++)
	{
		int alph_pos = rand() % (alphabet_num - 0);
		//int words_pos = rand() % (words_num - 0);
		cout << "请写字母：" << alphabets[alph_pos] << endl;
		cout << "剩余：" << 3*alphabet_num - i -1 << "个" << endl;
		//cout << "请写单词：" << words[words_pos] << endl;
		getchar();
	}
	cout << "退出程序！" << endl;
}