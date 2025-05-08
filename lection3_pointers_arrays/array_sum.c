int array_sum(int *arr, int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    int sum = array_sum(nums, 5);
    printf("Suma: %d\n", sum);
    return 0;
}