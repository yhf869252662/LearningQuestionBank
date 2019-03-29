//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int FindPrimerNum(int a, int b)
//{
//	while (true) {
//		if ((a = a % b) == 0)
//			return b;
//
//		if ((b = b % a) == 0)
//			return a;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int a = 0;
//
//	while (cin >> n >> a)
//	{
//		vector<int> vec;
//		for (int i = 0; i < n; ++i)
//		{
//			int temp = 0;
//			cin >> temp;
//			vec.push_back(temp);
//		}
//
//		for (size_t i = 0; i < vec.size(); ++i)
//		{
//			if (vec[i] < a)
//				a += vec[i];
//			else
//			{
//				int pn = FindPrimerNum(a, vec[i]);
//				a += pn;
//			}
//		}
//
//		cout << a << endl;
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
//	while (getline(cin, str))
//	{
//		size_t i = 0;
//		for (; i < str.size(); ++i)
//		{
//			if (str.find(str[i]) == str.rfind(str[i]))
//			{
//				cout << str[i] << endl;
//				break;
//			}
//		}
//		if (i == str.size())
//			cout << -1 << endl;
//	}
//
//	return 0;
//}

