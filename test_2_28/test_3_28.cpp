//#include <iostream> 
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	string str;
//
//	while (cin >> n)
//	{
//		cin >> str;
//		vector<int> vec;
//		vec.push_back(1);
//		vec.push_back(2);
//		vec.push_back(3);
//		vec.push_back(4);
//
//		int now = 1;
//
//		for (size_t i = 0; i < str.size(); ++i)
//		{
//			if (str[i] == 'D')
//			{
//				++now;
//				if (now > n)
//					now = 1;
//				else if (now - vec[3] == 1)
//				{
//					++vec[0];
//					++vec[1];
//					++vec[2];
//					++vec[3];
//				}
//			}
//			if (str[i] == 'U')
//			{
//				--now;
//				if (now == 0)
//				{
//					now = n;
//					vec[0] = n - 3;
//					vec[1] = n - 2;
//					vec[2] = n - 1;
//					vec[3] = n;
//				}
//				else if (vec[0] - now == 1)
//				{
//					--vec[0];
//					--vec[1];
//					--vec[2];
//					--vec[3];
//				}
//			}
//		}
//		for (auto i : vec)
//		{
//			cout << i << " ";
//		}
//		cout << endl;
//		cout << now << endl;
//
//	}
//
//	return 0;
//}


/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
//class Solution {
//public:
//	bool isSametree(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		if (pRoot2 == NULL)
//			return true;
//		if (pRoot1 == NULL)
//			return false;
//
//		return pRoot1->val == pRoot2->val
//			&& isSametree(pRoot1->left, pRoot2->left)
//			&& isSametree(pRoot1->right, pRoot2->right);
//	}
//
//	bool HasSubtree(TreeNode* pRoot1, TreeNode* pRoot2)
//	{
//		if (pRoot1 == NULL || pRoot2 == NULL)
//			return false;
//
//		return isSametree(pRoot1, pRoot2)
//			|| HasSubtree(pRoot1->left, pRoot2)
//			|| HasSubtree(pRoot1->right, pRoot2);
//	}
//};