#include <stdio.h>

int add(int a, int b); 
int sub(int a, int b);
int mul(int a, int b);

void main(){

  int n, m;
  char op;

  while(1){
    scanf("%d %c %d", &n, &op, &m);
    switch(op) {
    case '+' : printf("%d %c %d = %d\n", n, op, m, add(n, m)); return;
    case '-' : printf("%d %c %d = %d\n", n, op, m, sub(n, m)); return;
    case '*' : printf("%d %c %d = %d\n", n, op, m, mul(n, m)); return;
    default : printf("invalid input\n"); break;
    }
  }

}

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
}

int mul(int a, int b) {
  return a * b; // TODO : FIX IT
}
