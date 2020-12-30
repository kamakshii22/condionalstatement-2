#include<stdio.h>
int main()
{   int n;
    // Showing the List of Food Items
    printf("List of Food Items: \n\t1. Pasta \n\t2. Sandwich \n\t3. Pizza \n\t4. French Fries \n\t5. Burger\n\n");
    printf("Enter Choice: ");
    scanf("%d",&n); //Input of choice from User
    printf("\n");
    // Showing Food Item Selected
    switch (n)
        {   case 1:
                printf("Food Item - Pasta \nPrice - Rs 179\n");
                break;
            case 2:
                printf("Food Item - Sandwich \nPrice - Rs 149\n");
                break;
            case 3:
                printf("Food Item - Pizza \nPrice - Rs 239\n");
                break;
            case 4:
                printf("Food Item - French Fries \nPrice - Rs 99\n");
                break;
            case 5:
                printf("Food Item - Burger \nPrice - Rs 129\n");
                break;
            default: printf("Invalid Choice\n");
        }
    return 0;
}
