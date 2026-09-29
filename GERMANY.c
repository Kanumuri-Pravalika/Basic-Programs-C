#include <stdio.h>

int main() 
{	
    float euros, rupees;
    const float conversionRate = 88.50; // Example conversion rate (1 Euro = 88.50 INR)

    printf("Enter the amount in Euros: ");
    scanf("%f", &euros);

    // Conversion
    rupees = euros * conversionRate;

    printf("%.2f Euros is equal to %.2f Indian Rupees.\n", euros, rupees);

    return 0;
}



