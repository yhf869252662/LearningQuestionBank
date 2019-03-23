//#include <iostream>
//#include <string.h>
//
//using namespace std;
//
//int main()
//{
//	char str[255] = { 0 };
//	char ret[255] = { 0 };
//
//	cin.getline(str, 255);
//	
//	char *fast = str;
//	char *slow = str;
//	char *copy = ret;
//
//	while (*fast)
//	{
//		if (*fast > '0' && *fast < '9')
//		{
//			slow = fast;
//			while (*fast && *fast >= '0' && *fast <= '9')
//			{
//				fast++;
//			}
//
//			if ((fast - slow) > strlen(ret))
//			{
//				while (slow != fast)
//				{
//					*copy++ = *slow++;
//				}
//				*copy = '\0';
//				copy = ret;
//			}
//		}
//		fast++;
//	}
//
//	cout << ret << endl;
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
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
//	sort(arr.begin(), arr.end());
//
//	int num = arr.size();
//	int count = 1;
//
//	for (int i = 0; i < num; i++)
//	{
//		while (i < num && arr[i] == arr[i + 1])
//		{
//			count++;
//			i++;
//		}	
//		if (i < num && arr[i] != arr[i + 1] && count >= num / 2)
//		{
//			cout << arr[i] << endl;
//
//			return 0;
//		}
//		count = 1;
//	}
//
//	return 0;
//}

//#include <iostream>
//
//struct A
//{
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//	char f;
//};
//
//struct S
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//
//struct B {
//	unsigned a : 19;
//	unsigned b : 11;
//	unsigned c : 4;
//	unsigned d : 29;
//	char index;
//};
//
//int main()
//{
//	std::cout << sizeof(A) << std::endl;
//	std::cout << sizeof(S) << std::endl;
//	std::cout << sizeof(B) << std::endl;
//	std::cout << sizeof(unsigned) << std::endl;
//}