// ��Ŀ20����дһ�����򣬽����û������һ��������n��Ȼ�����n�е������͵����ĳ˻���

#include <iostream>
#include <iomanip>

void printProductTable(int n) {
    std::cout << std::fixed << std::setprecision(2);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            std::cout << std::setw(8) << i * (1.0 / j) << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "������һ����������";
    std::cin >> n;
    printProductTable(n);
    return 0;
}
