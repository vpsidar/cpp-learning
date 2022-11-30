function getDigitSum(digNum) {
	if(digNum < 1) {
        return 0;
    }
    return digNum%10 + getDigitSum(parseInt(digNum/10));
}
function getMagicNo(num){
    if(num < 10) return num;
    sum = getDigitSum(num);
    return getMagicNo(sum);
}

function any(str, num) {
    if(num <1) return str;
    let temp = "";
    for(let i = 0; i< str.length; i++){
        let ch = +!parseInt(str.charAt(i));
        temp = temp + ch;
    }
    str =  str + temp;
    return any(str, num-1);
}

//console.log(any("0",2));

function  joseph(A) {
    let nearestPoint = Math.pow(2, parseInt(Math.log2(A)));
    let initialKills = A- nearestPoint;
    return 2*initialKills+1;
}
//console.log(joseph(100));
function binarySum(A, B){
    if(A.length < B.length) {
        let zeros = B.length-A.length;
        A = new Array(zeros+1 ).join( '0' ) + A;
    } else if(B.length < A.length) {
        let zeros = A.length - B.length;
        B = new Array(zeros+1).join('0') + B;
    }
    
    let i = A.length-1;
    let carry = 0;
    let ans = '';
    while(i>=0){
        //get char at index i
        let aChar = parseInt(A.charAt(i));
        let bChar = parseInt(B.charAt(i));
        //0+0+0 = 0
        sum = aChar + bChar + carry;
        value = parseInt(sum%2);
        carry = parseInt(sum/2);
        ans = value+ans;
        i--;
    }
    
    return carry==1?'1'+ans:ans;
}

function calculatePairSum(A, B){
    let hm = new Map();
    let count = 0;
    //build the hashmap
    for(let i = 0; i< A.length; i++ ){
        if(hm.has(A[i])) {
            let val = hm.get(A[i]);
            val++;
            hm.set(A[i],val);
        } else {
            hm.set(A[i],1); 
        }
    }

    for(let i = 0; i< A.length; i++){
        let a = A[i];
        let b = B - A[i];
        if(a != b) {
            if(hm.has(b) && hm.get(b) > 0) {
                count++;
                let val = hm.get(A[i]);
                val--;
                hm.set(A[i],val)
            }
        } else if(a== b) {
            if(hm.has(b)){
                if(hm.get(b) > 1) {
                    count++;
                    let val = hm.get(A[i]);
                    val--;
                }
            }
        }
    }
    return count;
}

function checkK(A, B){
    let sum = 0
    let ans = [];
    let pf = [];
    for(let i = 0; i<A.length; i++){
        sum = sum + A[i];
        if(sum == B) {
            ans.push(0)
            ans.push(i)
            return ans;
        }

        let fi = pf.lastIndexOf(sum-B);
        if(fi >= 0){
            ans.push(fi);
            ans.push(i);
        }
        pf.push(sum);
    }

    return ans.length>0? ans: -1;
}
 let A  = [ 1, 2, 3, 4, 5 ]
let B =  5
// const A = [ 9, 18, 17, 17, 6, 16, 13, 11, 15, 7 ]
 console.log(checkK(A,B));