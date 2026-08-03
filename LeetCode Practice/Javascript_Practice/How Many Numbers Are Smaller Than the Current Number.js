/**
 * @param {number[]} nums
 * @return {number[]}
 */
var smallerNumbersThanCurrent = function (nums) {
    let n = nums.length;
    let ans = [];

    for (let i = 0; i < n; i++) {
        let num = nums[i];
        let count = 0;

        for (let j = 0; j < n; j++) {
            if (nums[j] != num && nums[j] < num) {
                count = count + 1;
            }
        }

        ans.push(count);
    }

    return ans;
};
