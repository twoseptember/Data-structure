#include <stdio.h> 
 #include <conio.h> 
int A(int a[], int s, int t) {
int i;
    for (i = 0; i < s; i++) {
	if (a[i] == t) {
	    return i;
	}
    }
    return -1;
}
int main() {
    int a[] = {5, 3, 8, 4, 2};
    int s = sizeof(a) / sizeof(a[0]);
    int t; 
    int result  =A(a,s,t);
    printf("Enter the element to search: ");
    scanf("%d", &t);
    if (result != -1) { 
	printf("Element found at index: %d\n", result);
    } else { 
        printf("Element not found in the array.\n"); 
    } 
   getch();
}