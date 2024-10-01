// 1
function checkGrade(score) {
    if (score >= 90 && score <= 100) {
        return 'A';
    } else if (score >= 80 && score < 90) {
        return 'B';
    } else if (score >= 70 && score < 80) {
        return 'C';
    } else if (score >= 60 && score < 70) {
        return 'D';
    } else {
        return 'F';
    }
}
console.log(checkGrade(85)); 

// 2
function checkNumber(num) {
    if (num > 0) {
        return 'Positive';
    } else if (num < 0) {
        return 'Negative';
    } else {
        return 'Zero';
    }
}
console.log(checkNumber(-5));
// 3

function checkTriangle(a, b, c) {
    if (a === b && b === c) {
        return 'Equilateral';
    } else if (a === b || b === c || a === c) {
        return 'Isosceles';
    } else {
        return 'Scalene';
    }
}
console.log(checkTriangle(3, 4, 5)); 

// 4
function checkVowelOrConsonant(char) {
    let vowels = 'aeiouAEIOU';
    if (vowels.includes(char)) {
        return 'Vowel';
    } else {
        return 'Consonant';
    }
}
console.log(checkVowelOrConsonant('e')); 
// 5
function checkEligibility(age) {
    return age >= 18 ? 'Eligible to vote' : 'Not eligible to vote';
}
console.log(checkEligibility(20)); 

// 6

function checkLogin(username, password) {
    if (username === 'admin' && password === '1234') {
        return 'Login successful';
    } else {
        return 'Login failed';
    }
}
console.log(checkLogin('admin', '1234')); 

// 7
function trafficLight(color) {
    if (color === 'red') {
        return 'Stop';
    } else if (color === 'yellow') {
        return 'Slow down';
    } else if (color === 'green') {
        return 'Go';
    } else {
        return 'Invalid color';
    }
}
console.log(trafficLight('green')); 
// 8
function findAverage(arr) {
    let sum = arr.reduce((acc, val) => acc + val, 0);
    return sum / arr.length;
}
console.log(findAverage([1, 2, 3, 4, 5])); 
// 9
function sortArray(nums) {
    return nums.sort((a, b) => a - b);
}
console.log(sortArray([4, 2, 8, 5, 1])); 

// 10

function countEvenOdd(arr) {
    let evenCount = 0, oddCount = 0;
    arr.forEach(num => {
        if (num % 2 === 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    });
    return { even: evenCount, odd: oddCount };
}
console.log(countEvenOdd([1, 2, 3, 4, 5])); 

// 11

function removeDuplicates(arr) {
    return [...new Set(arr)];
}
console.log(removeDuplicates([1, 2, 2, 3, 4, 4, 5])); 
// 12

function addNumber(arr) {
    arr.push(6);
    return arr;
}
console.log(addNumber([1, 2, 3, 4, 5])); 

// 13

function containsNumber(arr, num) {
    return arr.includes(num);
}
console.log(containsNumber([1, 2, 3, 4, 5], 3)); 
// 14

function addToBeginning(arr, num) {
    arr.unshift(num);
    return arr;
}
console.log(addToBeginning([1, 2, 3, 4], 0)); 

// 15
function removeLastElement(arr) {
    arr.pop();
    return arr;
}
console.log(removeLastElement([1, 2, 3, 4, 5]));
// 16

function areAllPositive(arr) {
    return arr.every(num => num > 0);
}
console.log(areAllPositive([3, 5, 9, 1, 7])); 
// 17

function countPosNeg(arr) {
    let positiveCount = 0, negativeCount = 0;
    arr.forEach(num => {
        if (num > 0) {
            positiveCount++;
        } else if (num < 0) {
            negativeCount++;
        }
    });
    return { positive: positiveCount, negative: negativeCount };
}
console.log(countPosNeg([1, -2, 3, -4, 5, -6])); 


// 18

function printEvenIndexes(arr) {
    return arr.filter((_, index) => index % 2 === 0);
}
console.log(printEvenIndexes([10, 20, 30, 40, 50]));

// 19

function isSorted(arr) {
    for (let i = 1; i < arr.length; i++) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}
console.log(isSorted([1, 2, 3, 4, 5])); 

// 20

function maxMinDifference(arr) {
    let max = Math.max(...arr);
    let min = Math.min(...arr);
    return max - min;
}
console.log(maxMinDifference([80, 30, 70, 50, 20])); 


// 21

function toUpperCase(str) {
    return str.toUpperCase();
}
console.log(toUpperCase('hello')); 

// 22

function stringLength(str) {
    return str.length;
}
console.log(stringLength('hello')); 

// 23

function concatenateStrings(str1, str2) {
    return str1 + str2;
}
console.log(concatenateStrings('hello', ' world')); 



// 24

function trim(str) {
    return str.trim();
}
console.log(trim(" heloo   "));

// 25

function split(str) {
    return str.split(' ');
}

console.log(split("hello world"));

// 26

function end(str, char) {
    return str.endsWith(char);
}

console.log(end("codinggita", "a")); 
console.log(end("codinggita", "g")); 
// 27
function get(filename) {
    return filename.split('.').pop();
}

console.log(get("document.pdf")); 

// 28
function largestNumber(num1, num2) {
    return num1 > num2 ? num1 : num2;
}

console.log(largestNumber(10, 5));  

// 29
function findPairs(nums, target) {
    let pairs = [];
    for (let i = 0; i < nums.length; i++) {
        for (let j = i + 1; j < nums.length; j++) {
            if (nums[i] + nums[j] === target) {
                pairs.push([i, j]);
            }
        }
    }
    return pairs;
}
console.log(findPairs([2, 7, 11, 15], 9)); 


// 30
function sumEvenOdd(n) {
    let evenSum = 0, oddSum = 0;
    n.toString().split('').forEach(digit => {
        if (digit % 2 === 0) {
            evenSum += +digit;
        } else {
            oddSum += +digit;
        }
    });
    return { evenSum, oddSum };
}
console.log(sumEvenOdd(132456)); 



// 31
function repeatString(str, num) {
    console.log(str.repeat(num));
}
repeatString("hello", 3); 


// 32

function ageG(age) {
    if (age < 13) return 'Child';
    else if (age >= 13 && age <= 19) return 'Teenager';
    else if (age >= 20 && age <= 59) return 'Adult';
    else return 'Senior';
}
console.log(ageG(25)); 

// 33
function isCentury(year) {
    return year % 100 === 0;
}
console.log(isCentury(1900));
// 34
function fAndL(arr) {
    return `First: ${arr[0]}, Last: ${arr[arr.length - 1]}`;
}
console.log(fAndL([10, 20, 30, 40, 50]));
// 35

function iT(n) {
    let result = '';
    for (let i = n; i > 0; i--) {
        result += '*'.repeat(i) + '\n';
    }
    return result;
}
console.log(iT(4));

// 36
function pyramid(n) {
    let result = '';
    for (let i = 1; i <= n; i++) {
        result += ' '.repeat(n - i) + '*'.repeat(2 * i - 1) + '\n';
    }
    return result;
}
console.log(pyramid(4));

// 37
function TRange(arr, target) {
    let start = arr.indexOf(target);
    let end = arr.lastIndexOf(target);
    return start === -1 ? [-1, -1] : [start, end];
}
console.log(TRange([5, 7, 7, 8, 8, 10], 8)); 

// 38

function celsiusToFahrenheit(celsius) {
    return (celsius * 9/5) + 32;
}
console.log(celsiusToFahrenheit(0));

// 39
function areBracketsClosed(str) {
    const stack = [];
    const map = { '(': ')', '{': '}', '[': ']' };
    for (let char of str) {
        if (map[char]) {
            stack.push(map[char]);
        } else if (stack.length === 0 || stack.pop() !== char) {
            return false;
        }
    }
    return stack.length === 0;
}
console.log(areBracketsClosed("{[()]}"));

// 40

function generateArray(start, end) {
    let arr = [];
    for (let i = start; i <= end; i++) {
        arr.push(i);
    }
    return arr;
}
console.log(generateArray(1, 5));

// 41

function defangIPaddress(address) {
    return address.split('.').join('[.]');
}
console.log(defangIPaddress("1.1.1.1")); // Output: "1[.]1[.]1[.]1"


// 42
function eventsConflict(event1, event2) {
    return !(event1[1] <= event2[0] || event2[1] <= event1[0]);
}
console.log(eventsConflict([1, 5], [5, 10])); 
console.log(eventsConflict([1, 5], [2, 3])); 


// 43

function findMax(arr) {
    let maxCount = 0, currentCount = 0;

    for (let i = 0; i < arr.length; i++) {
        if (arr[i] === 1) {
            currentCount++;
            maxCount = Math.max(maxCount, currentCount);
        } else {
            currentCount = 0;
        }
    }

    return maxCount;
}

console.log(findMax([1, 1, 0, 1, 1, 1]));

// 44

function getAll(str) {
    let substrings = [];

    for (let i = 0; i < str.length; i++) {
        for (let j = i + 1; j <= str.length; j++) {
            substrings.push(str.slice(i, j));
        }
    }

    return substrings;
}

console.log(getAll("abc"));


// 45

function findLong(sentence) {
    return sentence.split(' ').reduce((longest, currentWord) => {
        if (currentWord.length > longest.length) {
            longest = currentWord;
        }
        return longest;
    }, "");
}

console.log(findLong("I love programming in JavaScript"));

// 46

function firstR(str) {
    let seen = new Set();
    for (let i = 0; i < str.length; i++) {
        if (seen.has(str[i])) {
            return i;
        }
        seen.add(str[i]);
    }
    return -1;
}
console.log(firstRepeatingCharacter("hello")); 

// 47

function firstRE(arr) {
    let seen = new Set();
    for (let num of arr) {
        if (seen.has(num)) {
            return num;
        }
        seen.add(num);
    }
    return -1;
}
console.log(firstRE([10, 5, 3, 4, 3, 5, 6])); 

// 48

function removeVowels(str) {
    return str.replace(/[aeiouAEIOU]/g, '');
}
console.log(removeVowels("hello")); 

// 49

function swapElements(arr, i, j) {
    [arr[i], arr[j]] = [arr[j], arr[i]];
    return arr;
}
console.log(swapElements([1, 2, 3, 4], 1, 3)); 

// 50
function countCharacter(str, char) {
    return str.split('').filter(c => c === char).length;
}
console.log(countCharacter("hello world", 'o')); 

// 51


// 52

function runningSum(nums) {
    let sum = 0;
    return nums.map(num => sum += num);
}
console.log(runningSum([1, 2, 3, 4])); 

// 53

// 54

function isUgly(n) {
    if (n <= 0) return false;
    for (let factor of [2, 3, 5]) {
        while (n % factor === 0) {
            n /= factor;
        }
    }
    return n === 1;
}
console.log(isUgly(6)); 

// 55

function isPowerOfThree(n) {
    if (n < 1) return false;
    while (n % 3 === 0) {
        n /= 3;
    }
    return n === 1;
}
console.log(isPowerOfThree(27)); 






