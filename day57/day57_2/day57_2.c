#include <stdio.h>
// ͨ�� shiftArray ������ʵ������Ԫ�ص��ƶ���
void shiftArray(int arr[], int n, int m) {
    int temp[m];

    // ������� m ��������ʱ����
    for (int i = n - m, j = 0; i < n; i++, j++) {
        temp[j] = arr[i];
    }

    // ��ǰ��� n-m ��������ƶ� m ��λ��
    for (int i = n - m - 1; i >= 0; i--) {
        arr[i + m] = arr[i];
    }

    // ����ʱ�����е����ŵ���ǰ��
    for (int i = 0; i < m; i++) {
        arr[i] = temp[i];
    }
}
// �� main �����л�ȡ�û�����������Ҫ�ƶ���λ�ã�����s hiftArray �������������ƶ��������

int main() {
    int n, m;

    printf("�������������� n��");
    scanf("%d", &n);

    printf("����������ƶ���λ�� m��");
    scanf("%d", &m);

    int arr[n];

    printf("������ %d ��������", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    shiftArray(arr, n, m);

    printf("�ƶ�������飺");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}