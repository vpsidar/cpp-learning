function expandF(str, p1,p2){
    while(p1>0 && p2<str.length && str[p1] == str[p2]){
        p1--;
        p2++;
    }
    return {len :p2-p1-1, p1: p1, p2: p2};
}
function pali(A){
    let max_len = Number.MIN_SAFE_INTEGER;
    let maxP1 = -1;
    let maxP2 = -1;
    
    for(let mid =0; mid<A.length; mid++) {
        let p1 = mid;
        let p2 = mid;
        let expand = expandF(A,p1,p2);
        if(expand.len > max_len) {
            max_len = expand.len;
            maxP1 = expand.p1;
            maxP2 = expand.p2;
        }
        //max_len =Math.max(expand,max_len);
    }
    for(let mid =0; mid<A.length; mid++) {
        let p1 = mid; 
        let p2 = mid+1;
        let expand = expandF(A,p1,p2);
        if(expand.len > max_len) {
            max_len = expand.len;
            maxP1 = expand.p1;
            maxP2 = expand.p2;
        }
    }
    return {maxP1, maxP2, max_len}
    //return A.substring(maxP1+1, maxP2);
}

console.log(pali("bb"));