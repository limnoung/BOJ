#include <iostream>
using namespace std;
struct tree{
	char value;
	struct tree * left = NULL;
	struct tree * right = NULL;
};
tree* find_leaf(char a, tree *root){
	tree *temp = new struct tree;
	temp = root;
	if (temp->value == a)
		return temp;
	if (temp->right != NULL){
		temp = find_leaf(a, temp->right);
		if (temp->value == a)
			return temp;
	}
	temp = root;
	if (temp->left != NULL){
		temp = find_leaf(a, temp->left);
		if (temp->value == a)
			return temp;
	}
	return root;
}
void Print_Tree(tree * root){
	tree *temp = new struct tree;
	temp = root;
	cout << temp->value;
	if (temp->left!= NULL)
		Print_Tree(temp->left);
	if (temp->right != NULL)
		Print_Tree(temp->right);
}
void Print_Tree2(tree * root){
	tree *temp = new struct tree;
	temp = root;
	if (temp->left != NULL)
		Print_Tree2(temp->left);
	cout << temp->value;
	if (temp->right != NULL)
		Print_Tree2(temp->right);
}
void Print_Tree3(tree * root){
	tree *temp = new struct tree;
	temp = root;
	if (temp->left != NULL)
		Print_Tree3(temp->left);
	if (temp->right != NULL)
		Print_Tree3(temp->right);
	cout << temp->value;
}
int main(void){
	int N;
	char ch_temp1, ch_temp2, ch_temp3;
	bool first = true;

	struct tree * root = new struct tree;
	struct tree * temp = new struct tree;

	cin >> N;
	while (N > 0){
		if (first){
			cin >> ch_temp1 >> ch_temp2 >> ch_temp3;
			root->value = ch_temp1;
			if (ch_temp2 != '.'){
				root->left = new struct tree;
				root->left->value = ch_temp2;
			}
			if (ch_temp3 != '.'){
				root->right = new struct tree;
				root->right->value = ch_temp3;
			}
			first = false;
		}
		else{
			cin >> ch_temp1 >> ch_temp2 >> ch_temp3;
			temp = find_leaf(ch_temp1, root);
			if (ch_temp2 != '.'){
				temp->left = new struct tree;
				temp->left->value = ch_temp2;
			}
			if (ch_temp3 != '.'){
				temp->right = new struct tree;
				temp->right->value = ch_temp3;
			}
		}
		N--;
	}
	Print_Tree(root);
	cout << endl;
	Print_Tree2(root);
	cout << endl;
	Print_Tree3(root);
	cout << endl;
}
