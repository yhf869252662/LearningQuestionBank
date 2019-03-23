//1
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//int binInsert(int n, int m, int j, int i) {
//	// write code here
//	for (int a = j; a <= i; a++)
//	{
//		int bit = m & 1;
//		m >>= 1;
//		n = n | (bit * (int)pow(2, a));
//	}
//
//	return n;
//}
//
//int main()
//{
//	cout << binInsert(1024, 19, 2, 6) << endl;
//
//	return 0;
//}

//2
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string fstr;
//	string sstr;
//
//	/*getline(cin, fstr);
//	getline(cin, sstr);*/
//	cin >> fstr >> sstr;
//
//	int max = 0;
//	int count = 0;
//	int fsize = fstr.size();
//	int ssize = sstr.size();
//
//	for (int i = 0; i < fsize; i++)
//	{
//		count = 0;
//		for (int j = 0; j < ssize; j++)
//		{
//			if (fstr[i] == sstr[j])
//			{
//				int start = j;
//				int starti = i;
//				while (j < ssize && fstr[i] == sstr[j])
//				{
//					count++;
//					j++;
//					i++;
//				}
//				if (count > max)
//				{
//					max = count;
//				}
//				count = 0;
//				j = start;
//				i = starti;
//			}
//		}
//	}
//	cout << max << endl;
//
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//
//void StrSort(const char **str, int len)
//{
//	const char *tmp;
//
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = 0; j < len - 1 - i; j++)
//		{
//			if (strcmp(str[j], str[j + 1]) > 0)
//			{
//				tmp = str[j];
//				str[j] = str[j + 1];
//				str[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	const char *str[10] = { "China","Japan","America",
//					"Korea","England","Germany",
//					"France","Russia","Singapore",
//					"Malaysia" };
//	StrSort(str, sizeof(str) / sizeof(str[0]));
//
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%s\n", str[i]);
//	}
//
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//#include<ctype.h>
//
////从键盘输入一个字符串，将其中的小写字母全部转成大写字母，然后输出到一个磁盘文件"test"中保存，输出的字符串以!结束
//
//void fun()
//{
//	const char* path = "test.txt";
//	char ch;
//
//	FILE *fw = fopen("test.txt", "r+");//往文件中写数据
//
//	assert(fw != NULL);//断言文件不能为空
//
//	while ((ch = getchar()) != '!')//读取字符串
//	{
//		ch = toupper(ch);//将小写字母转成大写
//		fwrite(&ch, sizeof(char), 1, fw);//将字符串一个一个的写入文件
//	}
//	fclose(fw);//将最先的fw文件关闭
//}
//
//int main()
//{
//	fun();
//
//	return 0;
//}