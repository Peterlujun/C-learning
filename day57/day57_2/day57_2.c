#include <stdio.h>
// 通过 shiftArray 函数来实现数组元素的移动。
void shiftArray(int arr[], int n, int m) {
    int temp[m];

    // 保存最后 m 个数到临时数组
    for (int i = n - m, j = 0; i < n; i++, j++) {
        temp[j] = arr[i];
    }

    // 将前面的 n-m 个数向后移动 m 个位置
    for (int i = n - m - 1; i >= 0; i--) {
        arr[i + m] = arr[i];
    }

    // 将临时数组中的数放到最前面
    for (int i = 0; i < m; i++) {
        arr[i] = temp[i];
    }
}
// 在 main 函数中获取用户输入的数组和要移动的位置，调用s hiftArray 函数，最后输出移动后的数组

int main() {
    int n, m;

    printf("请输入整数个数 n：");
    scanf("%d", &n);

    printf("请输入向后移动的位置 m：");
    scanf("%d", &m);

    int arr[n];

    printf("请输入 %d 个整数：", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    shiftArray(arr, n, m);

    printf("移动后的数组：");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}