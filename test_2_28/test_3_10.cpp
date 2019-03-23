//—°‘Ò≈≈–Ú
//#include <iostream>
//
//using namespace std;
//
//void ChooseSort(int *arr, int n)
//{
//	int max = 0;
//	int min = 0;
//
//	for (int i = 0; i < n / 2; i++)
//	{
//		max = i;
//		min = i;
//
//		for (int j = i+1; j < n - i; j++)
//		{
//			if (arr[max] < arr[j])
//				max = j;
//			if (arr[min] > arr[j])
//				min = j;
//		}
//
//		
//		int temp = arr[max];
//		arr[max] = arr[n - i - 1];
//		arr[n - i - 1] = temp;
//
//		if (min == n - i - 1)
//			min = max;
//		temp = arr[min];
//		arr[min] = arr[i];
//		arr[i] = temp;
//	}
//}
//
//int main()
//{
//	 int arr[] = { 4, 3, 6, 7, 2, 1, 8, 9, 5 };
//	 int n = sizeof(arr) / sizeof(arr[0]);
//
//	 for (int i = 0; i < n; i++)
//	 {
//		 cout << arr[i] << " ";
//	 }
//	 cout << endl;
//	 ChooseSort(arr, n);
//	 for (int i = 0; i < n; i++)
//	 {
//		 cout << arr[i] << " ";
//	 }
//	 cout << endl;
//
//	return 0;
//}