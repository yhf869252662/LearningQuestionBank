//#include <iostream>
//
//using namespace std;
//
//int Fibonacci[30] = { 0 };
//
//int Fibo(int n)
//{
//	int n1 = 1;
//	int n2 = 1;
//	int n3 = 1;
//
//	for (int i = 2; i <= n; i++)
//	{
//		n3 = n2 + n1;
//		n1 = n2;
//		n2 = n3;
//	}
//
//	return n3;
//}
//
//void makeFibo()
//{
//	for (int i = 0; i < 30; i++)
//	{
//		Fibonacci[i] = Fibo(i);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int i = 0;
//
//	makeFibo();
//
//	for (; i < 100; i++)
//	{
//		if (n < Fibonacci[i])
//			break;
//	}
//
//	int less = n - Fibonacci[i - 1];
//	int more = Fibonacci[i] - n;
//	int ret = more < less ? more : less;
//
//	cout << ret << endl;
//
//	return 0;
//}

//#include <string>
//#include <stack>
//#include <iostream>
//
//using namespace std;
//
//bool chkParenthesis(string A, int n) {
//	stack<char> sta;
//
//	int i = 0;
//
//	while (i < n)
//	{ 
//		if (A[i] == '(')
//			sta.push(A[i]);
//		else if (A[i] == ')')
//		{
//			if (sta.empty())
//			{
//				return false;
//			}
//			sta.pop();
//		}
//		else
//			return false;
//
//		i++;
//	}
//	if (sta.empty())
//		return true;
//	else
//		return false;
//}
//
//int main()
//{
//	string str = "(()())";
//	cout << chkParenthesis(str, str.size()) << endl;
//}

