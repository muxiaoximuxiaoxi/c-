/*【中级】单词倒排
对字符串中的所有单词进行倒排。
说明：
1、每个单词是以26个大写或小写英文字母构成；
2、非构成单词的字符均视为单词间隔符；
3、要求倒排后的单词间隔符以一个空格表示；如果原字符串中相
邻单词间有多个间隔符时，倒排转换后也只允许出现一个空格间隔符；
4、每个单词最长20个字母；
输入描述 :
输入一行以空格来分隔的句子
输出描述 :
输出句子的逆序
示例1
输入
I am a student
输出
student a am I*/
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string s;
	while (getline(cin, s)) 
	{
		vector<string> v;
		string temp = "";
		for (int i = 0;i < s.size();++i)
		{
			if (((s[i] >= 'a') && (s[i] <= 'z'))
				|| ((s[i] >= 'A') && (s[i] <= 'Z')))
				temp += s[i];
			else
			{
				if (temp.size() > 0)
					v.push_back(temp);
				temp = "";
			}
		}
		if (temp.size() > 0)
			v.push_back(temp);

		for (int i = v.size() - 1;i > 0;i--)

			cout << v[i] << " ";

		cout << v[0] << endl;
	}
	return 0;
}

