#include <stdio.h>
#define MaxSize 100     /* 큐크기*/
int queue[MaxSize];     /* 큐*/
int head=0,             /* 첫 번째 데이터가 저장된 인덱스를 저장*/
tail=0;             /* 마지막 데이터가 저장된 인덱스를 저장*/
int queuein(int);
int queueout(int *);

void main(void) {
    int c, n;
    printf("]");
    while ((c=getchar())!=EOF) {
        if (c == '\n') continue;
        if (c=='i' || c=='I') {
            printf("data--> ");
            scanf("%d", &n);
            if (queuein(n)==-1)
                printf("queue full.\n");
        }
        if (c=='o' || c=='O') {
            if (queueout(&n)==-1)
                printf("queue empy.\n");
            else
                printf("queue data --> %d\n",n);
        }
        printf("]");
    }
}
int queuein(int n)  {     /* 큐에 데이터를 저장하는 함수*/
    if ((tail+1) % (MaxSize+1) !=head) {
        queue[tail]=n;
        tail++;
        tail=tail%(MaxSize+1);
        return 0;
    }
    else
        return -1;       /* 큐가 가득 찼을때*/
}

int queueout(int *n)  {   /* 큐에서데이터를추출하는함수*/
    if (tail!=head) {
        *n=queue[head];
        head++;
        head=head%MaxSize;
        return 0;
    }
    else
        return -1;       /* 큐가비어있을때*/
}
