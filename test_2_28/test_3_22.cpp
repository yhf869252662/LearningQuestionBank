//#include <iostream>
//using namespace std;
//
//#include <string>
//#include <algorithm>
//
//int main()
//{
//	string addend;
//	string augend;
//
//	while (cin >> addend >> augend)
//	{
//		reverse(addend.begin(), addend.end());
//		reverse(augend.begin(), augend.end());
//
//		int add_size = addend.size();
//		int aug_size = augend.size();
//		string ssum;
//		int flag = 0;
//
//		for (int i = 0; i < add_size || i < aug_size; ++i)
//		{
//			if (i < add_size && i < aug_size)
//			{
//				int sum = (addend[i] - '0') + (augend[i] - '0') + flag;
//				flag = 0;
//				if (sum >= 10)
//				{
//					flag = 1;
//					sum -= 10;
//				}
//				ssum.push_back(sum + '0');
//			}
//			else if (i < add_size)
//			{
//				int sum = (addend[i] - '0') + flag;
//				flag = 0;
//				if (sum >= 10)
//				{
//					flag = 1;
//					sum -= 10;
//				}
//				ssum.push_back(sum + '0');
//			}
//			else if (i < aug_size)
//			{
//				int sum = (augend[i] - '0') + flag;
//				flag = 0;
//				if (sum >= 10)
//				{
//					flag = 1;
//					sum -= 10;
//				}
//				ssum.push_back(sum + '0');
//			}
//		}
//		if (flag == 1)
//			ssum.push_back('1');
//		reverse(ssum.begin(), ssum.end());
//		cout << ssum << endl;
//	}
//
//	return 0;
//}

