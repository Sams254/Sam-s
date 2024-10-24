#include <stdio.h>  // scanf(), printf()

// Function prototypes
int area(int l, int w);
int perimeter(int length, int width);

int main() {
    int a, c, len, wid;

    // User input for length and width
    printf("Enter length : ");
    scanf("%d", &len);
    
    printf("Enter  width: ");
    scanf("%d", &wid);

    // Function calls
    a = area(len, wid);  
    c = perimeter(len, wid);  

    // Output the results
    printf("Area is %d \n", a);
    printf("Perimeter is %d \n", c);

    return 0;
}

// Function definitions
int area(int l, int w) {
    int a;
    a = l * w;  // Calculate area
    return a;
}

int perimeter(int length, int width) {
    int c;
    c = 2 * (length + width);  // Calculate perimeter
    return c;
}
