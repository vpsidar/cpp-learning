function addOne(A){
    let carry = 1;
    for(let i = A.length-1; i>=0; i--){
        let value = A[i] + carry;
        if(value>9){
            carry = value/10;
            value = value%10;
        } else {
            carry = 0;
        }
        A[i] = value;
        if(carry == 0){
            break;
        }
    }
    let zeroChecked = false;
    let ans = [];
    if(carry > 0) {
        ans.push(carry);
        zeroChecked = true;
    }
    for(let k =0; k<A.length; k++){
        if(A[k]> 0){
            ans.push(A[k]);
            zeroChecked = true;
        } else if(zeroChecked) {
            ans.push(A[k])
        }
    }

    return ans;
}

let arr = [0,0,9,9,9];
console.log(addOne(arr));
