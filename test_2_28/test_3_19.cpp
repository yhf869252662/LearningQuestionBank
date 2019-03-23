//#include <iostream>
//
//using namespace std;
//
//const int GetMonthsbeforday[13] = {0, 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
//
//bool isRunyear(int year)
//{
//	return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
//}
//
//int ConverDateToDay(int year, int month, int day)
//{
//	int days = day + GetMonthsbeforday[month];
//
//	if (isRunyear(year))
//		days++;
//
//	return days;
//}
//
//int main()
//{
//	int year = 1990;
//	int month = 1;
//	int day = 1;
//
//	while (cin >> year >> month >> day)
//	{
//		cout << ConverDateToDay(year, month, day) << endl;
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool isLuckbage(vector<int> arr)
//{
//	int sum = 0;
//	int num = 1;
//
//	for (int i = 0; i < arr.size(); ++i)
//	{
//		sum += arr[i];
//		num *= arr[i];
//	}
//
//	return sum > num;
//}
//
//void NumLuckbage(vector<int> arr, int &num)
//{
//	int size = arr.size();
//	if (size <= 1)
//		return;
//
//	for (int i = 0; i < size; i++)
//	{
//		if (isLuckbage(arr))
//			num++;
//
//		while (i < size-1 && arr[i] == arr[i + 1])
//			i++;
//		vector<int> temp(arr);
//		if (i >= size)
//			arr.erase(arr.end());
//		else
//			arr.erase(arr.begin()+i);
//		NumLuckbage(arr, num);
//		arr = temp;
//	}
//
//	return;
//}
//
//int main()
//{
//	int num = 0;
//	int n = 0;
//	
//	while (cin >> n)
//	{
//		num = 0;
//		vector<int> arr(n);
//
//		for (int i = 0; i < n; ++i)
//		{
//			int temp = 0;
//			cin >> temp;
//			arr[i] = temp;
//		}
//		NumLuckbage(arr, num);
//
//		cout << num << endl;
//	}
//	
//	return 0;
//}
