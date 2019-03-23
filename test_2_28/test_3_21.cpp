////#include <iostream>
////
////using namespace std;
////
////bool isPerfectNumber(int n)
////{
////	int sum = 0;
////	for (int i = 1; i < n; ++i)
////	{
////		if (n % i == 0)
////		{
////			sum += i;
////		}
////	}
////	if (sum == n)
////		return true;
////	else
////		return false;
////}
////
////int main()
////{
////	int n = 0;
////	while (cin >> n)
////	{
////		int count = 0;
////		for (int i = 1; i <= n; ++i)
////		{
////			if (isPerfectNumber(i))
////				count++;
////		}
////		cout << count << endl;
////	}
////	
////	return 0;
////}
//
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string all;
//
//	while (getline(cin, all))
//	{
//		string player1;
//		string player2;
//
//		int i = 0;
//		for (; all[i] != '-'; ++i)
//			player1.push_back(all[i]);
//		player1.push_back('\0');
//
//		++i;
//		for (; all[i] != '\0'; ++i)
//			player2.push_back(all[i]);
//		player2.push_back('\0');
//
//		if (player1 == "joker JOKER" || player2 == "joker JOKER")
//			cout << "joker JOKER" << endl;
//
//		
//	}
//
//	return 0;
//}

