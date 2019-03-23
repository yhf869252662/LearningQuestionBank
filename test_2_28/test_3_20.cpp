//#include <iostream>
//
//using namespace std;
//
//int FindNumberOf1(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if (n & 1 == 1)
//			count++;
//		n >>= 1;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 0;
//	while (cin >> n)
//	{
//		cout << FindNumberOf1(n) << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//
//class Test
//{
//public:
//	void foo()
//	{
//		delete this;
//	}
//	int f = 0;
//};
//
//int main()
//{
//	Test *a = new Test();
//	a->foo();
//	a->f = 10;
//	return 0;
//}