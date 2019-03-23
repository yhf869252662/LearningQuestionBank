//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	vector<int> arr;
//
//	int temp = 0;
//	while (cin >> temp)
//	{
//		arr.push_back(temp);
//		if (cin.get() == '\n')
//			break;
//	}
//
//	int a = (arr[0] + arr[2]) / 2;
//	int b = (arr[1] + arr[3]) / 2;
//	int c = arr[3] - b;
//
//	if ((c == (b - arr[1])) && (c == (arr[0]+arr[3]-a)) && (c == (a - arr[0] - arr[1])) && c >= 0)
//	{
//		cout << a << " " << b << " " << arr[3] - b << endl;
//	}
//	else
//	{
//		cout << "No" << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <string>
//#include <algorithm>
//#include <math.h>
//
//using namespace std;
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//
//	cin >> m >> n;
//
//	if (n == 2)
//	{
//		int num = 0;
//		for (int i = 0; i < 32; i++)
//		{
//			num += ((m >> i) & 1)*pow(10, i);
//		}
//		cout << num << endl;
//	}
//	else if (n == 16)
//	{
//		string num;
//		int temp = 0;
//
//		while (m)
//		{
//			temp = m % 16;
//			switch (temp)
//			{
//			case 15:
//				num.push_back('F');
//				break;
//			case 14:
//				num.push_back('E');
//				break;
//			case 13:
//				num.push_back('D');
//				break;
//			case 12:
//				num.push_back('C');
//				break;
//			case 11:
//				num.push_back('B');
//				break;
//			case 10:
//				num.push_back('A');
//				break;
//			default:
//				num.push_back(temp + '0');
//				break;
//			}
//			m /= 16;
//		}
//		reverse(num.begin(), num.end());
//		cout << num << endl;
//	}
//	else
//	{
//
//	}
//
//	return 0;
//}