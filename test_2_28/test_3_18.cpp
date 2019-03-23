//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	string str;
//	getline(cin, str);
//
//	int size = str.size();
//	int num = 0;
//	vector<string> arr;
//
//	for (int i = 0; i < size; ++i)
//	{
//		string temp;
//
//		while (i < size && str[i] != ' ')
//		{
//			if (str[i] == '"')
//			{
//				++i;
//				while (i < size && str[i] != '"')
//				{
//					temp += str[i];
//					++i;
//				}
//				++i;
//			 }
//			else
//			{
//				temp += str[i];
//				++i;
//			}
//		}
//		temp += '\0';
//		arr.push_back(temp);
//		temp.clear();
//		num++;
//	}
//
//	int sizea = arr.size();
//	cout << num << endl;
//	for (int i = 0; i < sizea; ++i)
//	{
//		cout << arr[i] << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//int num(int n)
//{
//	int i = 0;
//	for (i = n-1; i >= 1; --i)
//	{
//		if (n % i == 0)
//			break;
//	}
//
//	return i;
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int count = 0;
//	int temp = 0;
//	cin >> n >> m;
//
//	while (n < m)
//	{
//		temp = num(n);
//		if (temp == 0)
//			break;
//		n += temp;
//		count++;
//	}
//
//	if (n == m)
//	{
//		cout << count << endl;
//	}
//	else
//	{
//		cout << -1 << endl;
//	}
//
//	return 0;
//}
		