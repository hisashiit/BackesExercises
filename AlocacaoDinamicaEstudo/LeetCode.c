/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
int *twoSum(int* nums, int numsSize, int target, int *returnSize) {
    int targetThatIwannna=0;
    if (numsSize > 1000){
        printf("This shit is beyond the size");
        return 0;
    }
    if (numsSize < 2){
        printf("This shit is too much low");
        return 0;
    }
    int i = 0;
    int j = 1;
    while (i<numsSize){
        while (j<numsSize){
            if (target == nums[i] + nums[j]){
                break;
            }
            j++;
        }
        if (target == nums[i] + nums[j]){
                break;
            }
        i++;
        j = i+1;
    }
    returnSize[0] = i;
    returnSize[1] = j;
    return returnSize;
}

int main(){
    int nums[5] = {1,2,3,4,5};
    int returnSize[2] = {1,2};
    int target = 8;
    twoSum(nums,5,target,returnSize);
    int i = 0;
    while (i<2){
        printf("%d\t",returnSize[i]);
        i++;
    }
    return 0;
}