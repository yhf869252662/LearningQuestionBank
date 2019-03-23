//2
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	cin >> a >> b;
//	int ab = a * b;
//	int n = 0;
//	int i = 1;
//
//	for (; i < ab; i++)
//	{
//		if (i % a == 0 && i % b == 0)
//			break;
//	}
//
//	if (i == ab)
//		cout << ab << endl;
//	else
//		cout << i << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//bool isLexicographically(vector<string> arr)
//{
//	int size = arr.size();
//
//	for (int i = 2; i < size; i++)
//	{
//		for (int j = 0; j < arr[i-1].size(); j++)
//		{
//			if (arr[i - 1][j] > arr[i][j])
//				return false;
//			else if (arr[i - 1][j] < arr[i][j])
//				break;
//		}
//	}
//
//	return true;
//}
//
//bool isLengths(vector<string> arr)
//{
//	int size = arr.size();
//	for (int i = 2; i < size; i++)
//	{
//		if (arr[i].size() < arr[i - 1].size())
//			return false;
//	}
//
//	return true;
//}
//
//int main()
//{
//	bool islex = false;
//	bool isleng = false;
//	string temp;
//	int n = 0;
//
//	cin >> n;
//
//	vector<string> arr;
//	for (int i = 0; i <= n; i++)
//	{
//		getline(cin, temp);
//		arr.push_back(temp);
//	}
//
//	islex = isLexicographically(arr);
//	isleng = isLengths(arr);
//
//	if (islex == true && isleng == true)
//		cout << "both" << endl;
//	else if (islex == true)
//		cout << "lexicographically" << endl;
//	else if (isleng == true)
//		cout << "lengths" << endl;
//	else
//		cout << "none" << endl;
//
//	return 0;
//}