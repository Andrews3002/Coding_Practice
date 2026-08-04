/**
 * @param {number[]} target
 * @param {number} n
 * @return {string[]}
 */
var buildArray = function (target, n) {
    let ans = [];
    let stack = [];
    let target_i = 0;

    for (let i = 1; i < n + 1; i++) {
        ans.push("Push");
        stack.push(i);

        if (stack.at(-1) != target[target_i]) {
            ans.push("Pop");
            stack.pop();
        } else {
            target_i = target_i + 1;
        }

        if (JSON.stringify(stack) === JSON.stringify(target)) {
            break;
        }
    }

    return ans;
};
