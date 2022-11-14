//checking the coerro
function test(A){
    let count = 0;
    while(A > 0) {
        A = A & (A-1);
        count++;
    }
    return count;
}

console.log(test(450676354));

