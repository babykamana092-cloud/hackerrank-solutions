void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {

            if ((i & j) < k && (i & j) > max_and)
                max_and = i & j;

            if ((i | j) < k && (i | j) > max_or)
                max_or = i | j;

            if ((i ^ j) < k && (i ^ j) > max_xor)
                max_xor = i ^ j;
        }
    }
