#include <stdio.h>

#define MaxSize 5

int stack[MaxSize];

int *sp=stack;

int *head=stack;

int push(int);

int pop(int*);



void main(void) {

    int c, n;

    printf("]");

    stack[MaxSize-1] = -1;

//아래를 완성하시오.

    while ((c = getchar()) != EOF) {
        if (c == '\n') continue;
        if (c=='i' || c=='I') {
            printf("data--> ");
            scanf("%d",&n);
            if (push(n)==-1)
                printf("stack full!\n");
        }
        if (c=='o' || c=='O') {
            if (pop(&n)==-1)
                printf("stack emty\n");
            else
                printf("stack data --> %d\n",n);
        }
        printf("]");
    }
}


//push
int push(int n) {
    if (*sp!=-1) {
        *sp=n;
        sp++;
        return 0;
    }
    else
        return -1;
}

//pop
int pop(int *n) {
    if (sp!=head){
        sp--;
        *n=*sp;
        return 0;
    }
    else
        return -1;
}