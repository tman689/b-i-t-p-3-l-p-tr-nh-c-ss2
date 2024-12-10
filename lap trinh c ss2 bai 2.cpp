#include<stdio.h>

int main(){
	int a = 6;
	int b = 10;
	
	int diff = a - b;
	int product = a * b;
	float quotient = (float)a / b;
	
    printf("Hieu cua %d và %d là: %d\n", a, b, diff);
    printf("Tich cua %d và %d là: %d\n", a, b, product);
    printf("Thuong cua %d và %d là: %.2f\n", a, b, quotient);
    
    return 0;

}
	
