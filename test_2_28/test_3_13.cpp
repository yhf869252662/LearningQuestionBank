//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int addAB(int A, int B) {
//	int flag = 0;
//	int ret = 0;
//	int c = 0;
//
//	for (int i = 0; i < 32; i++)
//	{
//		if (A & 1 == 1 && B & 1 == 1)
//		{
//			c = flag;
//			flag = 1;
//		}
//		else if (((A & 1 == 1) && flag == 1) || ((B & 1 == 1) && flag == 1))
//		{
//			c = 0;
//			flag = 1;
//		}
//		else
//		{
//			c = flag | (1 & A) | (1 & B);
//			flag = 0;
//		}
//
//		A >>= 1;
//		B >>= 1;
//		ret = ret | (c * (int)pow(2, i));
//	}
//
//	return ret;
//}
//
//int main()
//{
//	cout << addAB(15, 24) << endl; 
//	return 0;
//}

//#include <iostream>
//#include <stack>
//using namespace std;
//
//struct XY
//{
//	int x;
//	int y;
//};
//
//int nums(int n, int m)
//{
//	int count = 0;
//	stack<XY> sta;
//	XY xy = {1, 0};
//	sta.push(xy);
//	int i = 0;
//	int j = 0;
//
//	while (!sta.empty())
//	{
//		if (i == n - 1 && j == m - 1)
//			count++;
//
//
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int m = 0;
//	cin >> n >> m;
//
//	cout << nums(n, m) << endl;
//
//	return 0;
//}