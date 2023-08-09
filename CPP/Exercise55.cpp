// 题目55：编写一个程序，实现霍夫曼编码的压缩和解压缩算法。
// 输入一个字符串，输出压缩后的字符串和解压缩后的字符串。

#include <iostream>
#include <string>
#include <queue>
#include <unordered_map>

struct Node {
    char data;
    int frequency;
    Node* left;
    Node* right;

    Node(char data, int frequency) : data(data), frequency(frequency), left(nullptr), right(nullptr) {}
};

struct Compare {
    bool operator()(const Node* a, const Node* b) {
        return a->frequency > b->frequency;
    }
};

void buildFrequencyMap(const std::string& input, std::unordered_map<char, int>& frequencyMap) {
    for (char c : input) {
        frequencyMap[c]++;
    }
}

Node* buildHuffmanTree(const std::unordered_map<char, int>& frequencyMap) {
    std::priority_queue<Node*, std::vector<Node*>, Compare> pq;

    for (const auto& pair : frequencyMap) {
        Node* newNode = new Node(pair.first, pair.second);
        pq.push(newNode);
    }

    while (pq.size() > 1) {
        Node* left = pq.top();
        pq.pop();

        Node* right = pq.top();
        pq.pop();

        int sumFreq = left->frequency + right->frequency;

        Node* parent = new Node('\0', sumFreq);
        parent->left = left;
        parent->right = right;

        pq.push(parent);
    }

    return pq.top();
}

void buildHuffmanCodes(Node* root, std::unordered_map<char, std::string>& codes, std::string code) {
    if (root == nullptr) {
        return;
    }

    if (root->left == nullptr && root->right == nullptr) {
        codes[root->data] = code;
    }

    buildHuffmanCodes(root->left, codes, code + "0");
    buildHuffmanCodes(root->right, codes, code + "1");
}

std::string compress(const std::string& input, const std::unordered_map<char, std::string>& codes) {
    std::string compressed;

    for (char c : input) {
        compressed += codes.at(c);
    }

    return compressed;
}

std::string decompress(const std::string& compressed, Node* root) {
    std::string decompressed;
    Node* current = root;

    for (char c : compressed) {
        if (c == '0') {
            current = current->left;
        } else {
            current = current->right;
        }

        if (current->left == nullptr && current->right == nullptr) {
            decompressed += current->data;
            current = root;
        }
    }

    return decompressed;
}

void deleteTree(Node* root) {
    if (root == nullptr) {
        return;
    }

    deleteTree(root->left);
    deleteTree(root->right);

    delete root;
}

int main() {
    std::string input;
    std::cout << "????????????????????";
    std::getline(std::cin, input);

    std::unordered_map<char, int> frequencyMap;
    buildFrequencyMap(input, frequencyMap);

    Node* root = buildHuffmanTree(frequencyMap);

    std::unordered_map<char, std::string> codes;
    buildHuffmanCodes(root, codes, "");

    std::string compressed = compress(input, codes);
    std::string decompressed = decompress(compressed, root);

    std::cout << "???????????????????" << compressed << std::endl;
    std::cout << "?????????????????????" << decompressed << std::endl;

    deleteTree(root);

    return 0;
}
