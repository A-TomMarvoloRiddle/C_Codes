#include <stdio.h>
int main() {
    int arr[50],n,beg=0,end,mid,item; 
    printf("\nEnter the number of elements in the list: ");
    scanf("%d", &n);
    printf("\nEnter the elements in increasing order separated by spaces: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    end=n-1;
    mid=(beg+end)/2;
    printf("\nEnter the element to be searched: ");
    scanf("%d", &item);
    while(beg<=end && arr[mid]!=item) {
        if(arr[mid]<item) {
            beg=mid+1;
        }
        else {
            end=mid-1;
        }
        mid=(beg+end)/2;
    }
    if(arr[mid]==item) {
        printf("\nElement found at index %d", mid+1);
    }
    else {
        printf("\nElement not found in the list");
    }
    return 0;
}
