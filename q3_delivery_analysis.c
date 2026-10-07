#include <stdio.h>

// Question 3: Functions & Recursive Problem Solving
// Calculate total distance iteratively
int calcTotal(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum;
}

// Calculate average showing function reuse by calling calcTotal
float calcAverage(int arr[], int n) {
    if (n == 0) return 0;
    int total = calcTotal(arr, n); 
    return (float)total / n;
}

// Find the longest route
int findLongest(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}

// Count routes above a limit
int countAboveLimit(int arr[], int n, int limit) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > limit) count++;
    }
    return count;
}

// Recursive function to sum distances
int recursiveSum(int arr[], int n) {
    // If no elements are left, the sum is 0.
    if (n <= 0) {
        return 0; 
    }
    // Add the last element to the sum of the remaining array
    return arr[n - 1] + recursiveSum(arr, n - 1);
}

int main() {
    int n;
    int limit;

    // Ask the user for the number of routes
    printf("Enter the number of delivery routes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid number of routes. Exiting program.\n");
        return 1;
    }

    // Declare an array of size N
    int distances[n];

    // Loop to ask the user to input each distance
    for (int i = 0; i < n; i++) {
        printf("Enter distance for route %d (in km): ", i + 1);
        scanf("%d", &distances[i]);
    }

    // Ask for the distance limit
    printf("Enter the distance limit for analysis (in km): ");
    scanf("%d", &limit);

    // Display the results
    printf("\n===== DELIVERY DISTANCE ANALYSIS =====\n");
    printf("Total distance: %d km\n\n", calcTotal(distances, n));
    printf("Average distance: %.2f km\n", calcAverage(distances, n));
    printf("Longest route: %d km\n", findLongest(distances, n));
    printf("Routes above %d km: %d\n\n", limit, countAboveLimit(distances, n, limit));
    printf("Recursive sum: %d km\n", recursiveSum(distances, n));

    return 0;
}