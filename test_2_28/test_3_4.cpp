//2
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	char a[100] = { 0 };
//	char b[100] = { 0 };
//
//	cin.getline(a, '.');
//	cin.getline(b, '.');
//	
//
//	int i = 0;
//	int j = 0;
//	int k = 0;
//
//
//	for (; b[j] != '\0'; j++)
//	{
//		for (i = 0; a[i] != '\0'; i++)
//		{
//			while (a[i] == b[j])
//			{
//				for (k = i; a[k] != '\0'; k++)
//				{
//					a[k] = a[k + 1];
//				}
//			}
//		}
//	}
//
//	cout << a << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <algorithm>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	int sum = 0;
//	int count = 0;
//	int a = 0;
//	vector<int> arr;
//
//	cin >> n;
//	for (int i = 0; i < n * 3; i++)
//	{
//		cin >> a;
//		arr.push_back(a);
//	}
//
//	sort(arr.begin(), arr.end());
//
//	for (int i = n; count < n; count++, i++)
//	{
//		sum += arr[i];
//	}
//
//	cout << sum << endl;
//}