console.log('hello world');
const A = [1,2,3,4,5]
const B = 4;
let count = 0;
for (let i = 0; i < A.length; i++) {
    let sum = 0;
    for (let s = i; s < A.length; s++) {
            //check sub array 
            let subArLength = s - i + 1;
        sum = sum + A[s];
        if (subArLength % 2 == 0 && sum < B) {
            count++;
        }
        if (subArLength % 2 != 0 && sum > B) {
            count++;
        }

    }
}

console.log(count);
