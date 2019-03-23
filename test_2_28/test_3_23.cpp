//#include <iostream>
//
//using namespace std;
//
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int month = 0;
//	while (cin >> month)
//	{
//		cout << Fib(month) << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//#include <string>
//
//int main()
//{
//	string str1;
//	string str2;
//
//	while (cin >> str1 >> str2)
//	{
//		int size1 = str1.size(); 
//		int size2 = str2.size();
//		int i = 0;
//		int j = 0;
//
//		for (; i < size1 || j < size2; ++i, ++j)
//		{
//			if (size1 > size2)
//			{
//				cout << "false" << endl;
//				break;
//			}
//
//			if (str1[i] != str2[j])
//			{
//				if (str1[i] == '?');
//				else if (str1[i] == '*')
//				{
//					while (j < size2 && str1[i + 1] != str2[j])
//					{
//						j++;
//					}
//					i++;
//				}
//				else
//				{
//					cout << "false" << endl;
//					break;
//				}
//			}
//		}
//		if (i >= size1 && j >= size2)
//		{
//			cout << "true" << endl;
//		}
//	}
//
//	return 0;
//}