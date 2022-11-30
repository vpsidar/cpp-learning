    //Approach 1 : TC: O(N^2) SC: O(1)
function bruteForce(A){
    let ans = 0;
    for(let i =0; i<A.length; i++){
        //calculate left max height
        let left = A[i];
        for(let j =0; j<i; j++){
            left = Math.max(left,A[j]);
        }

        //calculate right max height
        let right = A[i];
        for(let k = i+1; k<A.length; k++){
            right = Math.max(right, A[k]);
        }

        ans += Math.min(left, right) - A[i];
    }

    return ans;
}
//Approach 2 TC: O(N), SC: O(N)
function precalculation(A){
    let ans = 0;
    //calculate left and right
    let left = new Array(A.length).fill(0);
    let right = new Array(A.length).fill(0);
    left[0] = A[0];
    for(let i =1; i< A.length; i++){
        left[i] = Math.max(left[i-1],A[i]);
    }
    right[A.length-1] = A[A.length-1];
    for(let j = A.length-2; j>= 0; j--){
        right[j] = Math.max(right[j+1],A[j]);
    }

    for(let k = 0; k<A.length; k++){
        ans += Math.min(left[k],right[k]) - A[k];
    }
    return ans;
}
let ar = [3, 0, 2, 0, 4]
console.log(precalculation(ar))