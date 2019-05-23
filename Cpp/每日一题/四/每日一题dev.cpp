/*进制转换
题目描述
给定一个十进制数M，以及需要转换的进制数N。将十进制数M转化为N进制数
输入描述 :
输入为一行，M(32位整数)、N(2 ≤ N ≤ 16)，以空格隔开。
输出描述 :
为每个测试实例输出转换后的数，每个输出占一行。如果N大于9，
则对应的数字规则参考16进制（比如，10用A表示，等等）
示例1
输入
复制
7 2
输出
复制
111
*/
#include<iostream>
#include<stdlib.h>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int arr[100] = { 0 };
	int i = 0;
	int remainder = 0;
	int flag = 1;
	while (m != 0) {
		if (m < 0) {
			flag = -1;
			m *= -1;
		}
		remainder = m % n;
		m = m / n;
		arr[i] = remainder;
		++i;
	}
	int j = i - 1;
	arr[j] *= flag;
	for (int j = i - 1;j >= 0;--j) {
		if (arr[j] >= 10) {
			cout << (char)(arr[j] + 55);
		}
		else {
			cout << arr[j];
		}
	}
	system("pause");
}




/*
计算糖果

A, B, C三个人是好朋友, 每个人手里都有一些糖果, 我们不知道他们每个人手上具体有多少个糖果, 但是我们知道以下的信息：
A - B, B - C, A + B, B + C.这四个数值.每个字母代表每个人所拥有的糖果数.
现在需要通过这四个数值计算出每个人手里有多少个糖果, 即A, B, C。这里保证最多只有一组整数A, B, C满足所有题设条件。

输入描述 :
输入为一行，一共4个整数，分别为A - B，B - C，A + B，B + C，用空格隔开。 范围均在 - 30到30之间(闭区间)。


输出描述 :
输出为一行，如果存在满足的整数A，B，C则按顺序输出A，B，C，用空格隔开，行末无空格。 如果不存在这样的整数A，B，C，则输出No
示例1
输入
1 - 2 3 4
输出
2 1 3
#include<iostream>
#define NUM 40
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int A,B,C;
	for(int A=0;A<NUM;++A){
		for(int B=0;B<NUM;++B){
			for(int C=0;C<NUM;++C){
				if((((A-B)==a)+((B-C)==b)+((A+B)==c)+((B+C)==d))==4){
					cout<<A<<' '<<B<<' '<<C<<endl;
					return 0;
				}

		}
	}



}cout<<"NO";

}
*/

