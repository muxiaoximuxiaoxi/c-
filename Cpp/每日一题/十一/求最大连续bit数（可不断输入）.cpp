/*求最大连续bit数 
功能: 求一个byte数字对应的二进制数字中1的最大连续数，
例如3的二进制为00000011，最大连续2个1  
输入: 一个byte型的数字   
输出: 无    
返回: 对应的二进制数字中1的最大连续数
输入描述:
输入一个byte数字
输出描述:
输出转成二进制之后连续1的个数
示例1
输入
3
输出
2*/
#include<iostream>
#include<limits.h>
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		int count = 0;
		int temp = 0;
		int max_count = INT_MIN;
		while (n > 0) {
			temp = n % 2;
			if (temp == 1)
				++count;
			if (count > max_count)
				max_count = count;
			if (temp == 0)
				count = 0;
			n /= 2;
		}
		cout << max_count << endl;
	}
}
