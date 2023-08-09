// 题目46：编写一个程序，实现二分查找算法。
// 输入一个有序数组和一个目标值，输出目标值在数组中的索引（若存在）或-1（若不存在）。

#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    std::vector<int> arr = {1, 3, 5, 7, 9};
    int target;
    std::cout << "请输入目标值：";
    std::cin >> target;

    int index = binarySearch(arr, target);
    if (index != -1) {
        std::cout << "目标值在数组中的索引为：" << index << std::endl;
    } else {
        std::cout << "目标值不在数组中" << std::endl;
    }

    return 0;
}
