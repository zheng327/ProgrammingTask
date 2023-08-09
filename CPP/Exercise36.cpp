// ��Ŀ36����дһ�����򣬽����û������һ��������n��Ȼ�����n��쳲���������ǰn������

#include <iostream>
#include <vector>

std::vector<int> fibonacciSequence(int n) {
    std::vector<int> sequence;
    if (n >= 1) {
        sequence.push_back(0);
    }
    if (n >= 2) {
        sequence.push_back(1);
    }
    for (int i = 2; i < n; ++i) {
        int num = sequence[i - 1] + sequence[i - 2];
        sequence.push_back(num);
    }
    return sequence;
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    std::vector<int> sequence = fibonacciSequence(n);
    std::cout << n << "��쳲���������ǰ" << n << "�����ǣ�";
    for (int num : sequence) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}
