#include <stdio.h>
#include <stdlib.h>
#include "lqueue.h"

void RadixSort(char* A[],int n,int k){
     char* B[10][n];
     int pocB[10];
     int x,y;
     int i,j;
     for(i=0;i<10;i++)pocB[i]=0;
     for(j=k-1;j>=0;j--){
          for(i=0;i<n;i++){
             x=A[i][j]-'0';
             B[x][pocB[x]++]=A[i];
             }
          for(y=0,x=0;x<10;x++){
              for(i=0;i<pocB[x];i++)
                  A[y++]=B[x][i];
              pocB[x]=0;
              }
     }
}

void RadixSortQueue(char* A[],int n,int k){
    int x;
    int i,j;
    LQueue q;
    LQueue B[10];
    TElem tmp;
    q=CreateQueue();
    for(i=0;i<10;i++)B[i]=CreateQueue();
    for(i=0;i<n;i++) Enqueue(A[i],q);

    j = k - 1;

    while (j>=0) {
        for(; !IsEmptyQueue(q); Enqueue(tmp, B[x])) {
            tmp = FrontAndDequeue(q);
            x = tmp[j] -'0';
        }

        int x = 0;

        while (x < 10) {
            for(; !IsEmptyQueue(B[x]); Enqueue(tmp, q)) tmp = FrontAndDequeue(B[x]);

            x++;
        }

        PrintQueue(q);

        putchar('\n');

        j--;
    }

    i=0;    
    while(!IsEmptyQueue(q)){
        tmp=FrontAndDequeue(q);
        A[i++]=tmp;
    }
}
