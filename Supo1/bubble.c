#include <stdio.h>

void bubble(int *nums, int len){
    int hasChange = 0;
    int lim = len-1;
    do
    {
        hasChange = 0;
        for(int i = 0; i < lim; i++){
            /*Swap code*/
            if(nums[i] > nums[i+1]){
                int temp = nums[i+1];
                nums[i+1] = nums[i];
                nums[i] = temp;
                hasChange = 1;
            }
        }
        lim--;
    } while (hasChange);
    
}

int main(void){
    int i[] = {3, 9 ,1, 2, 20, 27, 3, 15, 38, 30, -2};
    bubble(i, 11);
    printarr(i, 11);
    return 0;
}

void printarr(int *n, int l){
    for(int i = 0; i<l; i++){
        printf("%d, ", n[i]);
    }
    printf("/n");
}