# include <iostream>
using namespace std;
class BstNode
{
public:
	int data;
	BstNode* left;
	BstNode* right;
};
BstNode* GetNewNode(BstNode* root, int x)
{
	BstNode* temp = new BstNode();
	temp->data = x;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}
BstNode* Insert(BstNode* root,int x )
{
	if (root == NULL)
	{
		root = GetNewNode(root, x);
	}
	else if (x <= root->data)
	{
		root->left = Insert(root->left , x);
	}
	else
	{
		root->right = Insert(root->right, x);
	}
	return root;
}
bool Search(BstNode* root, int x)
{
	if (root == NULL)
		return false;
	else if (x == root->data)
		return true;
	else if (x <= root->data)
		return Search(root->left,x);
	else
		return Search(root->right, x);
}


int main()
{
	BstNode* root = NULL;
	int data;

	root = Insert(root, 10);
	root = Insert(root, 5);
	root = Insert(root, 8);
	root = Insert(root, 4);
	root = Insert(root, 7);
	cout << "Please Input" << endl;
	cin >> data;
	if (Search(root, data) == true)
		cout << "Found!\n";
	else
		cout << "Not Found!\n";
}        
			 