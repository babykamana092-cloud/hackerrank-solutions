int main() {
    int n;
    
    // Read the size of the array
    scanf("%d", &n);

    // Dynamically allocate memory for n integers
    int *arr = (int*) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1; // exit if malloc fails
    }

    // Read n integers into the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of all elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Print the sum
    printf("%d\n", sum);

    // Free the dynamically allocated memory
    free(arr);

    return 0;
}
