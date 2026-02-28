int main() {
    int a, b;
    float c, d;

    scanf("%d", &a);
    scanf("%d", &b);

    scanf("%f", &c);
    scanf("%f", &d);

    // Sum and difference of integers
    printf("%d %d\n", a + b, a - b);

    // Sum and difference of floats (1 decimal place)
    printf("%.1f %.1f\n", c + d, c - d);

    return 0;
}
