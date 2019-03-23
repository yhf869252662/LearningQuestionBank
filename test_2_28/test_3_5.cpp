//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	char str1[100] = {0};
//	char str2[100] = { 0 };
//
//	cin.getline(str1, 100);
//
//	int flag = 0;
//	char *slow = str1;
//	char *first = str1;
//	char *copy = str2;
//	char *temp = NULL;
//
//	while (*first)
//	{
//		flag = 0;
//		while (*first)
//		{
//			if (*first == ' ')
//			{
//				slow = first;
//				flag = 1;
//			}
//			first++;
//		}
//
//		temp = slow;
//		if (flag == 1)
//		{
//			slow++;
//		}
//
//		while (*slow)
//		{
//			*copy++ = *slow++;
//		}
//		*temp = '\0';
//		first = str1;
//		slow = first;
//		if (*first)
//		{
//			*copy = ' ';
//			copy++;
//		}
//	}
//
//	cout << str2 << endl;
//
//	return 0;
//}

