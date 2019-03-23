//#include <stdio.h>
//
//int Myatoi(char *str)
//{
//	int ret = 0;
//	int flag = 1;
//	int i = 0;
//
//	for (i = 0; str[i] != '\0'; i++)
//	{
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			break;
//		}
//	}
//
//	if (str[0] == '-')
//	{
//		flag = -1;
//	}
//
//	for (; str[i] != '\0'; i++)
//	{
//		if (str[i] >= '0' && str[i] <= '9')
//		{
//			ret = ret * 10 + str[i] - '0';
//		}
//	}
//
//	return ret * flag;
//}
//
//int main()
//{
//	char a[] = "1234";
//	char b[] = "-1234";
//
//	printf("%d\n", Myatoi(a));
//	printf("%d\n", Myatoi(b));
//
//	return 0;
//}

//#include <stdio.h>
//
//int digitallen(int n)
//{
//	int count1 = 0;
//	while (n)
//	{
//		n /= 10;
//		count1++;
//	}
//	return count1;
//}
//
//void Myitoa(char *str, int n)
//{
//	int x = 1;
//	int flag = 1;
//
//	if (n < 0)
//	{
//		flag = -1;
//		n = -n;
//	}
//
//	int count1 = digitallen(n) - 1;
//	int num = count1 + 1;
//
//	while (count1)
//	{
//		x *= 10;
//		count1--;
//	}
//
//	for (int i = 0; i < num; i++)
//	{
//		str[i] = n / x + '0';
//		n %= x;
//		x /= 10;
//	}
//
//	str[num] = '\0';
//
//	if (flag == -1)
//	{
//		int i = 0;
//		for (i = num; i >= 0; i--)
//		{
//			str[i] = str[i-1];
//		}
//
//		str[0] = '-';
//		str[num+1] = '\0';
//	}
//
//	printf("%s", str);
//}
//
//int main()
//{
//	int n = 1234;
//	char str[100] = { 0 };
//
//	Myitoa(str, n);
//
//	return 0;
//}

