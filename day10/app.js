function getF(A, B) {
    let num = '';
        while(A>0){
            let rem = parseInt(A%B);
            num = rem+ num;
            A = parseInt(A/B);
        }
        return parseInt(num);
}
console.log(getF(4,3));