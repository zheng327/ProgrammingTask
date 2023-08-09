// 题目48：编写一个程序，实现选择排序算法。
// 输入一个整数数组，输出按升序排列后的数组。

#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        std::swap(arr[i], arr[minIndex]);
    }
}

int main() {
    std::vector<int> arr = {9, 5, 7, 1, 3};

    selectionSort(arr);

    std::cout << "排序后的数组：";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
