//输出反转后的字符串
//#include <iostream>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main()
//{
//	string str;
//
//	while (cin >> str)
//	{
//		reverse(str.begin(), str.end());
//		cout << str << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str;
//
//	while (cin >> str)
//	{
//		string str2;
//
//		for (int i = str.size()-1; i >= 0; --i)
//		{
//			str2.push_back(str[i]);
//		}
//		str2.push_back('\0');
//
//		cout << str2 << endl;
//	}
//}

//查找组成一个偶数最接近的两个素数
//#include <iostream>
//#include <math.h>
//using namespace std;
//
//bool isPrimeNumber(int n)
//{
//	for (int i = 2; i <= sqrt(n); ++i)
//	{
//		if (n % i == 0)
//			return false;
//	}
//
//	return true;
//}
//
//int main()
//{
//	int n = 0; 
//
//	while (cin >> n)
//	{
//		int a = 0;
//		int min = n;
//		int mina = 0;
//
//		for (int i = 2; i <= n / 2; ++i)
//		{
//			a = i;
//			if (isPrimeNumber(a) && isPrimeNumber(n - a))
//			{
//				if (n - a - a < min)
//				{
//					min = n - a - a;
//					mina = a;
//				}
//			}
//		}
//
//		cout << mina << endl << n - mina << endl;
//	}
//
//	return 0;
//}