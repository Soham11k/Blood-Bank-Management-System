#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Donor {
    char name[50];
    char bloodType[4];
    int age;
};

struct Donor donors[100]; // Array to store donor information
int donorCount = 0; // Number of donors in the system

// Function to add a new donor
void addDonor() {
    if (donorCount < 100) {
        struct Donor newDonor;
        printf("Enter donor name: ");
        scanf("%s", newDonor.name);
        printf("Enter blood type (e.g., 'A+', 'B-'): ");
        scanf("%s", newDonor.bloodType);
        printf("Enter age: ");
        scanf("%d", &newDonor.age);
        donors[donorCount] = newDonor;
        donorCount++;
        printf("Donor added successfully.\n");
    } else {
        printf("Blood bank is at full capacity.\n");
    }
}

// Function to display all donors
void displayDonors() {
    if (donorCount == 0) {
        printf("No donors in the system.\n");
    } else {
        printf("Donors in the system:\n");
        for (int i = 0; i < donorCount; i++) {
            printf("Donor %d:\n", i + 1);
            printf("Name: %s\n", donors[i].name);
            printf("Blood Type: %s\n", donors[i].bloodType);
            printf("Age: %d\n", donors[i].age);
            printf("\n");
        }
    }
}

int main() {
    int choice;

    while (1) {
        printf("Blood Bank Management System\n");
        printf("1. Add Donor\n");
        printf("2. Display Donors\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addDonor();
                break;
            case 2:
                displayDonors();
                break;
            case 3:
                printf("Exiting the program.\n");
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
