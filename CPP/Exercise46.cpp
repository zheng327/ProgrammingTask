// ��Ŀ46����дһ������ʵ�ֶ��ֲ����㷨��
// ����һ�����������һ��Ŀ��ֵ�����Ŀ��ֵ�������е������������ڣ���-1���������ڣ���

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
    std::cout << "������Ŀ��ֵ��";
    std::cin >> target;

    int index = binarySearch(arr, target);
    if (index != -1) {
        std::cout << "Ŀ��ֵ�������е�����Ϊ��" << index << std::endl;
    } else {
        std::cout << "Ŀ��ֵ����������" << std::endl;
    }

    return 0;
}
