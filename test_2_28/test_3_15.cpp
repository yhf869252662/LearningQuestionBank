//2
//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	int max = 0;
//	int count = 0;
//	while (cin >> n)
//	{
//		max = 0;
//		for (int i = 0; i < 32; i++)
//		{
//			count = 0;
//			while (n & 1 == 1 && i < 32)
//			{
//				count++;
//				i++;
//				n = n >> 1;
//			}
//			if (count > max)
//				max = count;
//			n = n >> 1;
//		}
//
//		cout << max << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class LCA {
//public:
//	int getLCA(int a, int b) {
//		// write code here
//		int af = 0;
//		int bf = 0;
//
//		while (af >= 1 && bf >= 1)
//		{
//			af = a / 2;
//			bf = b / 2;
//			if (af == bf)
//				return af;
//		}
//
//		return 1;
//	}
//};

//1-3È«ÅÅÁĞ
//#include "stdio.h"
//#define N 3
//
//int x[N];
//int count = 0;
//
//void dump() {
//	int i = 0;
//	for (i = 0; i < N; i++) {
//		printf("%d", x[i]);
//	}
//	printf("\n");
//}
//
//void swap(int a, int b) {
//	int t = x[a];
//	x[a] = x[b];
//	x[b] = t;
//}
//
//void run(int n) {
//	int i;
//	if (N - 1 == n) {
//		dump();
//		count++;
//		return;
//	}
//	for (i = n; i < N; i++) {
//		swap(n, i);
//		run(n + 1);
//		swap(n, i);
//	}
//}
//
//int main() {
//	int i;
//	for (i = 0; i < N; i++) {
//		x[i] = i + 1;
//	}
//	run(0);
//	printf("* Total: %d\n", count);
//
//	return 0;
//}