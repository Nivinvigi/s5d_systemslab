#include<stdio.h>
#include<stdlib.h>

void scan(int Ar[20], int n, int start);
void sort(int Ar[20], int n);

int main() {
    int diskQueue[20], n, start, i;
    printf("Enter the size of Queue: ");
    scanf("%d", &n);
    printf("Enter the Queue: ");
    for(i=1;i<=n;i++) {                                      
        scanf("%d",&diskQueue[i]);
    }
    printf("Enter the initial head position: ");
    scanf("%d", &start);                                
    diskQueue[0] = start;                                    
    ++n;
                                          
    scan(diskQueue, n, start);

    return 0;
}

void scan(int Ar[20], int n, int start) {
    int i, pos, diff, seekTime=0, current;
    n++;
    Ar[n]=199;
    sort(Ar, n+1);  
    for(i=0;i<n;i++) {                                      
        if(Ar[i]==start) {
            pos=i;
            break;
        }
    }
    // start seeking to the right
    printf("\nMovement of Cylinders is:\n");
    printf("%d",Ar[pos]);
    for(i=pos;i<n-1;i++) {
        diff = abs(Ar[i+1] - Ar[i]);
        seekTime += diff;
        printf("->%d", Ar[i+1]);
    }
    current=i;                                            
    for(i=pos-1;i>=0;i--) {
        diff = abs(Ar[current] - Ar[i]);
        seekTime += diff;
        printf("->%d",Ar[i]);
        current=i;
    }
    printf("\nTotal Seek Time: %d", seekTime);
    printf("\n");
}

void sort(int Ar[20], int n) {
    int i, j, tmp;
    for(i=0;i<n-1;i++) {
        for(j=0;j<n-1-i;j++) {
            if(Ar[j]>Ar[j+1]) {
                tmp = Ar[j];
                Ar[j] = Ar[j+1];
                Ar[j+1] = tmp;
            }
        }
    }
}
