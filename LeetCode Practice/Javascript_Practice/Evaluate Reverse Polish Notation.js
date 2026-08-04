/**
 * @param {string[]} tokens
 * @return {number}
 */
var evalRPN = function (tokens) {
    let numbers = [];
    let n = tokens.length;
    let symbols = ["+", "-", "/", "*"];

    for (let i = 0; i < n; i++) {
        if (symbols.includes(tokens[i])) {
            let x = numbers.pop();
            let result = 0;

            if (tokens[i] == "+") {
                result = numbers.pop() + x;
            } else if (tokens[i] == "-") {
                result = numbers.pop() - x;
            } else if (tokens[i] == "/") {
                result = Math.trunc(numbers.pop() / x);
            } else {
                result = numbers.pop() * x;
            }

            numbers.push(result);
        } else {
            numbers.push(parseInt(tokens[i]));
        }
    }

    return numbers[0];
};