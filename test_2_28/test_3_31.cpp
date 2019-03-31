//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//class Bonus {
//public:
//	int getMost(vector<vector<int> > board) {
//		// write code here
//		int sizei = board.size();
//		int sizej = board[0].size();
//		for (size_t i = 0; i < sizei; ++i)
//		{
//			for (size_t j = 0; j < sizej; ++j)
//			{
//				if (i == 0 && j == 0)
//				{
//
//				}
//				else if (i == 0)
//				{
//					board[i][j] += board[i][j - 1];
//				}
//				else if (j == 0)
//				{
//					board[i][j] += board[i - 1][j];
//				}
//				else
//				{
//					int up = board[i - 1][j];
//					int left = board[i][j - 1];
//					if (up > left)
//					{
//						board[i][j] += up;
//					}
//					else
//					{
//						board[i][j] += left;
//					}
//				}
//			}//endj
//		}//endi
//		return board[sizei - 1][sizej - 1];
//	}
//};
//
//int main()
//{
//	
//	return 0;
//}

//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int>> maze;
//vector<vector<int>> temp;
//vector<vector<int>> best;
//
//void maze_best(int i, int j, int n, int m)
//{
//	maze[i][j] = 1;
//	temp.push_back({ i, j });
//
//	if (i == n - 1 && j == m - 1)
//	{
//		if (best.empty() || best.size() > temp.size())
//			best = temp;
//	}
//
//	if (i > 0 && maze[i - 1][j] == 0)
//		maze_best(i - 1, j, n, m);
//	if (i + 1 < n && maze[i + 1][j] == 0)
//		maze_best(i + 1, j, n, m);
//	if (j > 0 && maze[i][j-1] == 0)
//		maze_best(i, j-1, n, m);
//	if (j + 1< m && maze[i][j+1] == 0)
//		maze_best(i, j+1, n, m);
//
//	maze[i][j] = 0;
//	temp.pop_back();
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//
//	while (cin >> n >> m)
//	{
//		maze = vector<vector<int>>(n, vector<int>(m, 0));
//		temp.clear();
//		best.clear();
//		for (auto &i : maze)
//		{
//			for (auto &j : i)
//			{
//				cin >> j;
//			}
//		}
//		maze_best(0, 0, n, m);
//
//		for (auto i : best)
//		{
//			cout << '(' << i[0] << ',' << i[1] << ')' << endl;
//		}
//	}
//
//	return 0;
//}