#include <stdio.h>
int deQuy(int n) {
    
    if(n <= 1){
        return 1;
    }
    return n * deQuy(n - 1); //6 * 5 * 4 * 3 * 2 * 1
}
int main()
{
    int so;
    scanf("%d", &so);
    int m = deQuy(so);
    printf("%d", m);
    return 0;
}
