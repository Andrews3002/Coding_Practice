/**
 * @param {number[]} nums
 * @return {number}
 */
var findMaxConsecutiveOnes = function (nums) {
    let consec = 0;
    let max = 0;
    let n = nums.length;

    for (let i = 0; i < n; i++) {
        if (nums[i] == 1) {
            consec = consec + 1;
            if (consec > max) {
                max = consec;
            }
        } else {
            consec = 0;
        }
    }

    return max;
};
