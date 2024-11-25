#include <stdio.h>
#include <conio.h>

int main() {
    int a[10],i;
    
    for(i=0;i<5;i++)
    
    {
        printf("Enter numbers");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    
    {
        printf("Entered numbers %d,%d ",i+1,a[i]);
        
    }
    getch();
    return 0;
}