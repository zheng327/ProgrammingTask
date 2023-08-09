// 题目47：编写一个程序，实现冒泡排序算法。
// 输入一个整数数组，输出按升序排列后的数组。

#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    std::vector<int> arr = {9, 5, 7, 1, 3};

    bubbleSort(arr);

    std::cout << "排序后的数组：";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
