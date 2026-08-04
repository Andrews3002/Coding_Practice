/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDisappearedNumbers = function (nums) {
    let n = nums.length;
    nums_unique = [];
    nums.sort((a, b) => a - b);
    let ans = [];

    for (let i = n - 1; i > -1; i--) {
        if (!nums_unique.includes(nums[i])) {
            nums_unique.push(nums[i]);
        }
    }

    for (let i = 0; i < n; i++) {
        if (i + 1 == nums_unique.at(-1)) {
            nums_unique.pop();
        } else {
            ans.push(i + 1);
        }
    }

    return ans;
};
