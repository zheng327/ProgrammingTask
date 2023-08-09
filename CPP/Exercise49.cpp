// ��Ŀ49����дһ������ʵ�ֲ��������㷨��
// ����һ���������飬������������к�����顣

#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    std::vector<int> arr = {9, 5, 7, 1, 3};

    insertionSort(arr);

    std::cout << "���������飺";
    for (int num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
