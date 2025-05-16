#include <stdio.h>
#include <math.h>
// Function prototypes
void greet(); // Task 1: Implement the greet function
int add(int a, int b); // Task 2: Modify the add function for more flexibility
int subtract(int a, int b); // Task 3: Implement the subtract function
double calculate_area(double r); // Task 4: Implement a function to calculate the area of a circle
void display_menu(); // Task 6: Implement a menu to display available options
int main() {
	int choice;
	display_menu();
	printf("Enter your choice (1-5): ");
	scanf("%d", &choice);
	switch (choice) {
	case 1:
		greet();
		break;
	case 2:
		printf("The sum of 5 and 10 is %d\n", add(5, 10));
		break;
	case 3:
		printf("The difference between 10 and 5 is %d\n", subtract(10, 5));
		break;
	case 4: {
		double radius;
		printf("Enter the radius of the circle: ");
		scanf("%lf", &radius);
		printf("The area of the circle is %.2f\n", calculate_area(radius));
		break;
	}
	default:
		printf("Invalid choice! Please choose a number between 1 and 5.\n");
	}
	return 0;
}

//testing push