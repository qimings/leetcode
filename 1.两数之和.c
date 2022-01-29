/*
 * @lc app=leetcode.cn id=1 lang=c
 *
 * [1] 两数之和
 */

// @lc code=start


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    char flag = 0;
    int *a=(int*)malloc(sizeof(int)*2);
    for(int i=0;i<numsSize;i++){
        for(int j=i+1;j<numsSize;j++){
            if(nums[i]+nums[j] == target){
                flag = 1;
                a[0] = i;
                a[1] = j;
                *returnSize = 2;
                return a;
                
            }
        }
        
    }
    *returnSize = 0;
    return a;
}
// @lc code=end

