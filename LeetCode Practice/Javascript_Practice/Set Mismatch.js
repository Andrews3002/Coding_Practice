/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findErrorNums = function (nums) {
    let n = nums.length;
    nums = nums.sort();
    dup = 0;
    missing = 0;
    prev = 0;

    for (let i = 0; i < n; i++) {
        if (!nums.includes(i + 1)) {
            missing = i + 1;
        }

        if (i != 0) {
            if (nums[i] == prev && dup == 0) {
                dup = prev;
            }
        }

        prev = nums[i];
    }

    return [dup, missing];
};
