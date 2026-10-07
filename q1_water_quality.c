#include <stdio.h>
#include <math.h>

// Question 1: C Program Development and Compilation for a Sensor Monitoring System 
// Function to calculate the Water Quality Index
float calculateIndex(float temp, float turbidity) {
    float tempDeviation = fabs(temp - 25.0);
    float turbidityPenalty = turbidity / 2.0;
    return 100.0 - (tempDeviation + turbidityPenalty);
}

// Function to classify and print the formatted report
void printReport(float temp, float turbidity, float index) {
    printf("\n===== WATER QUALITY REPORT =====\n");
    printf("Temperature: %.2f C\n", temp);
    printf("Turbidity:   %.2f NTU\n", turbidity);
    printf("Index Score: %.2f\n", index);
    printf("Status:      ");

    if (index >= 80) {
        printf("Good\n");
    } else if (index >= 60) {
        printf("Warning\n");
    } else {
        printf("Critical\n");
    }
    printf("================================\n");
}

int main(void) {
    float temperature, turbidity;

    printf("Enter temperature (C): ");
    scanf("%f", &temperature);
    printf("Enter turbidity (NTU): ");
    scanf("%f", &turbidity);

    float index = calculateIndex(temperature, turbidity);
    printReport(temperature, turbidity, index);

    return 0;
}