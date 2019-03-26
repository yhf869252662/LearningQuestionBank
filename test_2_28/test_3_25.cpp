//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string str1;
//	string str2;
//
//	while (cin >> str1 >> str2)
//	{
//		if (str1.size() > str2.size())
//			swap(str1, str2);
//
//		string max;
//		for (size_t i = 0; i < str1.size(); ++i)
//		{
//			for (size_t j = i; j < str1.size(); ++j)
//			{
//				string temp = str1.substr(i, j - i + 1);//¸´ÖÆ×Ó×Ö·û´®
//				if (int(str2.find(temp)) < 0)//ÔÚstr2ÖÐÕÒÕâ¶Î×Ö·û´®
//					break;
//				else if (max.size() < temp.size())
//					max = temp;
//			}
//		}
//		cout << max << endl;
//	}
//
//	return 0;
//}


//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		if (n == 0)
//			break;
//
//		int drinks = 0;
//		int kong = n;
//		while (kong >= 3)
//		{
//			kong -= 3;
//			++drinks;
//			++kong;
//		}
//		if (kong == 2)
//			++drinks;
//
//		cout << drinks << endl;
//	}
//
//	return 0;
//}