let ar = [
    [97, 0, 55,5],
    [58, 14, 75, 3],
    [73, 11, 2, 4],
    [7, 1, 5, 0]
  ]
let ans = ar;
console.log(ar);
//let res = ans.map(item => new Array(3).fill(0));

for(let i = 0; i< ar.length; i++){
    for(let j =0; j< ar[0].length; j++) {
        if(i< j) {
            let temp = ar[i][j];
            ar[i][j] = ar[j][i];
            ar[j][i] = temp; 
        }
    }
}

console.log(ar);