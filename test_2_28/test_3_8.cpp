//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main()
//{
//	vector<int> arr;
//	int n = 0;
//	cin >> n;
//
//	int temp = 0;
//	while (cin >> temp)
//	{
//		arr.push_back(temp);
//		if (cin.get() == '\n')
//			break;
//	}
//
//	int max = arr[0];
//	int sum = 0;
//	int i = 0;
//
//	for (; i < n; i++)
//	{
//		sum = 0;
//		while (i < n && arr[i] <= 0)
//			i++;
//
//		for (; i < n && arr[i] > 0; i++)
//		{
//			sum += arr[i];
//		}
//		if (i < n && sum > max)
//			max = sum;
//	}
//	if (max == arr[0])
//	{
//		for (i = 0; i < n; i++)
//		{
//			if (max < arr[i])
//				max = arr[i];
//		}
//	}
//
//	cout << max << endl;
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
//	string str1;
//	string str2;
//
//	getline(cin, str1);
//	getline(cin, str2);
//
//	int smax = str1.size();
//	int smin = str2.size();
//
//	if (smax < smin)
//	{
//		int temp = smax;
//		smax = smin;
//		smin = temp;
//	}
//
//	int count = 0;
//	if (smax % 2 == 0)
//	{
//		for (int i = smax / 2; i > 1; i--)
//		{
//			count += i * 2;
//		}
//
//		if (smin % 2 == 0)
//		{
//			count += 2;
//		}
//	}
//	
//	cout << count << endl;
//
//	return 0;
//}