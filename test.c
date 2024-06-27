#include <stdio.h>

int min(int x, int y) {
    return x < y ? x : y;
}

int main() {
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    // Calculate the cost using only one-ride tickets
    int cost1 = n * a;

    // Calculate the cost using the m-ride tickets
    int cost2 = (n / m) * b + min((n % m) * a, b);

    // Determine the minimum cost
    int min_cost = min(cost1, cost2);

    printf("%d\n", min_cost);

    return 0;
}