#include<stdio.h>
int stack[5000000];int t=-1,size=-1;
void push(int x){
    if(t+1==size){
        printf("Stack is FULLL!!\n");return;
    }
    stack[++t]=x;
}
void pop(){
    if(t==-1){
    printf("The Stack Is Empty!\n");return;}
    --t;
}
void display(){
    if(t==-1){
    printf("The Stack Is Empty!\n");return;
    }
    printf("%d\n",stack[t]);
}
int main(){
    t=-1;size=-1;
    printf("Enter the Size of the stack : ");
    scanf("%d",&size);
    while(1<2){
        int n;
        printf("Enter\n1 -> Push\n2 -> Pop\n3 -> display\nAny other Number to Terminate : ");
        scanf("%d",&n);
        if(n==1){
                int x;
            printf("Enter a Number to Push : ");
        scanf("%d",&x);
        push(x);
        }
        else if(n==2)
            pop();
        else if(n==3)
            display();
        else
            break;
    }
}
