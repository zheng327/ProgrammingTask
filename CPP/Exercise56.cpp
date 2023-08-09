// ��Ŀ56����дһ������ʵ�ֶ����������Ĳ����ɾ��������
// ����һ�����������β��������������Ȼ��ɾ��ָ���ڵ㡣

#include <iostream>

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int val) : val(val), left(nullptr), right(nullptr) {}
};

TreeNode* insert(TreeNode* root, int val) {
    if (root == nullptr) {
        return new TreeNode(val);
    }

    if (val < root->val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }

    return root;
}

TreeNode* findMin(TreeNode* root) {
    while (root->left != nullptr) {
        root = root->left;
    }

    return root;
}

TreeNode* remove(TreeNode* root, int val) {
    if (root == nullptr) {
        return nullptr;
    }

    if (val < root->val) {
        root->left = remove(root->left, val);
    } else if (val > root->val) {
        root->right = remove(root->right, val);
    } else {
        if (root->left == nullptr && root->right == nullptr) {
            delete root;
            return nullptr;
        } else if (root->left == nullptr) {
            TreeNode* temp = root;
            root = root->right;
            delete temp;
        } else if (root->right == nullptr) {
            TreeNode* temp = root;
            root = root->left;
            delete temp;
        } else {
            TreeNode* minNode = findMin(root->right);
            root->val = minNode->val;
            root->right = remove(root->right, minNode->val);
        }
    }

    return root;
}

void inorderTraversal(TreeNode* root) {
    if (root == nullptr) {
        return;
    }

    inorderTraversal(root->left);
    std::cout << root->val << " ";
    inorderTraversal(root->right);
}

int main() {
    TreeNode* root = nullptr;

    int num;
    std::cout << "������һ������������0��������";
    while (std::cin >> num && num != 0) {
        root = insert(root, num);
    }

    std::cout << "�����Ķ����������������������";
    inorderTraversal(root);
    std::cout << std::endl;

    int target;
    std::cout << "������Ҫɾ���Ľڵ㣺";
    std::cin >> target;

    root = remove(root, target);

    std::cout << "ɾ��ָ���ڵ��Ķ����������������������";
    inorderTraversal(root);
    std::cout << std::endl;

    return 0;
}
