int max(int a, int b, int c) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}

int main() {
    int x, y, z;
    printf("Ingrese tres números: ");
    scanf("%d %d %d", &x, &y, &z);
    printf("Máximo: %d\n", max(x, y, z));
    return 0;
}