//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Board {
//public:
//	bool ishang(vector<vector<int> > board)
//	{
//		int isize = board.size();
//		int jsize = board[0].size();
//
//		for (int i = 0; i < isize; i++)
//		{
//			if (board[i][0] == 1)
//			{
//				int j = 1;
//				for (; j < jsize; j++)
//				{
//					if (board[i][j] != 1)
//						break;
//				}
//				if (j == jsize)
//					return true;
//			}
//		}
//		return false;
//	}
//	bool islie(vector<vector<int> > board)
//	{
//		int isize = board.size();
//		int jsize = board[0].size();
//
//		for (int j = 0; j < jsize; j++)
//		{
//			if (board[0][j] == 1)
//			{
//				int i = 1;
//				for (; i < isize; i++)
//				{
//					if (board[i][j] != 1)
//						break;
//				}
//				if (i == isize)
//					return true;
//			}
//		}
//		return false;
//	}
//	bool isxie(vector<vector<int> > board)
//	{
//		if (board[1][1] != 1)
//			return  false;
//
//		if (board[0][0] == 1 && board[2][2] == 1)
//			return true;
//		else if (board[0][2] == 1 && board[2][0] == 1)
//			return true;
//
//		return false;
//	}
//
//
//	bool checkWon(vector<vector<int> > board) {
//		// write code here
//		if (ishang(board) == true)
//			return true;
//		if (islie(board) == true)
//			return true;
//		if (isxie(board) == true)
//			return true;
//
//		return false;
//	}
//};
//

//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int GetPwdSecurityLevel(string pwd)
//{
//	int ret = 0;
//	int hasnum = 0;
//	int hasschar = 0;
//	int hasbchar = 0;
//	int hasasc = 0;
//	int lengths = pwd.size();
//
//	if (lengths == 0)
//		return -1;
//	if (lengths <= 4)
//		ret += 5;
//	else if (lengths >= 5 && lengths <= 7)
//		ret += 10;
//	else
//		ret += 25;
//
//	for (int i = 0; i < lengths; i++)
//	{
//		if (pwd[i] >= '0' && pwd[i] <= '9')
//			hasnum++;
//		else if (pwd[i] >= 'A' && pwd[i] <= 'Z')
//			hasbchar++;
//		else if (pwd[i] >= 'a' && pwd[i] <= 'z')
//			hasschar++;
//		else if ((pwd[i] >= 0x21 && pwd[i] <= 0x2F) || (pwd[i] >= 0x3A && pwd[i] <= 0x40) || (pwd[i] >= 0x5B && pwd[i] <= 0x60) || (pwd[i] >= 0x7B && pwd[i] <= 0x7E))
//			hasasc++;
//	}
//
//	if (hasbchar > 0 && hasschar > 0)
//		ret += 20;
//	else if (hasbchar > 0 || hasschar > 0)
//		ret += 10;
//
//	if (hasnum == 1)
//		ret += 10;
//	else if (hasnum > 1)
//		ret += 20;
//
//	if (hasasc == 1)
//		ret += 10;
//	else if (hasasc > 1)
//		ret += 25;
//
//	if (hasnum && hasbchar && hasschar && hasasc)
//		ret += 5;
//	else if (hasnum && (hasbchar + hasschar) && hasasc)
//		ret += 3;
//	else if (hasnum && (hasbchar + hasschar))
//		ret += 2;
//
//	if (ret >= 90)
//		ret = 0;
//	else if (ret >= 80)
//		ret = 1;
//	else if (ret >= 70)
//		ret = 2;
//	else if (ret >= 60)
//		ret = 3;
//	else if (ret >= 50)
//		ret = 4;
//	else if (ret >= 25)
//		ret = 5;
//	else if (ret >= 0)
//		ret = 6;
//
//	return ret;
//}
//
//int main()
//{
//	string PasswordStr;
//	while (getline(cin, PasswordStr))
//	{
//		int ret = GetPwdSecurityLevel(PasswordStr);
//		switch (ret)
//		{
//		case 0:
//			cout << "VERY_SECURE" << endl;
//			break;
//		case 1:
//			cout << "SECURE" << endl;
//			break;
//		case 2:
//			cout << "VERY_STRONG" << endl;
//			break;
//		case 3:
//			cout << "STRONG" << endl;
//			break;
//		case 4:
//			cout << "AVERAGE" << endl;
//			break;
//		case 5:
//			cout << "WEAK" << endl;
//			break;
//		case 6:
//			cout << "VERY_WEAK" << endl;
//			break;
//		default:
//			cout << "" << endl;
//			break;
//		}
//	}
//
//	return 0;
//}