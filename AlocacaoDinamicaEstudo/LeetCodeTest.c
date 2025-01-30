/* Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdio.h>
#include <stdlib.h>
int *twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int z = 0;
    while (z<numsSize){
        if (nums[z] > 1000000000 || nums[z] < -1000000000){
            return NULL;
        }
        z++;
    }
    if (numsSize > 10000){
        return NULL;
    }

    if (target > 1000000000 || target < -1000000000){
        return NULL;
    }
    *returnSize = 2;
    int *result1 = (int *)malloc(2 * sizeof(int));
    int i = 0;
    int j = 1;
    while (i<numsSize){
        while (j<numsSize){
            if (target == nums[i] + nums[j]){
                result1[0] = i;
                result1[1] = j;
                return result1;
            }
            j++;
        }
        i++;
        j = i+1;
    }
    return NULL;
}
int main(){
    int returnSize = 5;
    int nums[5] = {4294967291,4294967290,4294967291,2147483690,2147483648};
    int target =  4294967338;
    twoSum(nums,5,target,&returnSize);
    int i = 0;
    
    printf("%d %d\t",twoSum(nums,5,target,&returnSize)[0], twoSum(nums,5,target,&returnSize)[1]);

    return 0;
}