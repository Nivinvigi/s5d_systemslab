#include<stdio.h>
#include<stdlib.h>

void cscan(int Ar[20], int n, int start);
void sort(int Ar[20], int n);

int main() {
    int diskQueue[20], n, start, i;
    printf("Enter the no of tracks:\n ");
    scanf("%d", &n);
    printf("Enter the track numbers maximum 199:\n ");
    for(i=1;i<=n;i++) {                                      
        scanf("%d",&diskQueue[i]);
    }
    printf("Enter the initial head position: ");
    scanf("%d", &start);                                
    diskQueue[0] = start;                                    
    ++n;
                                          
    cscan(diskQueue, n, start);

    return 0;
}

void cscan(int Ar[20], int n, int start) {
    int i, pos, diff, seekTime=0, current;
    Ar[n]=199;
     n=n+1;
    sort(Ar, n);
     
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
    if(pos!=0){
    	seekTime+=199;
	Ar[n]=0;
	n=n+1;
	sort(Ar,n);
	for(i=0;i<n;i++) 
	{                                      
        	if(Ar[i]==start)
		 {
           	 pos=i;
           	 break;
       		 }
   	}                                            
    	for(i=0;i<pos-1;i++) {
        	diff = abs(Ar[i+1] - Ar[i]);
        	seekTime += diff;
        	printf("->%d",Ar[i]);
    	}
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
