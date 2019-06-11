const queen = (n) => {
    
    let array = Array(n).fill(null).map(() => Array());
    console.log(array);    //[[],[],[],[]]

}

const nqueen = (n, array) => {
    
    let c = 0;

    const check = (array) => {
        let k = array.length;

        for(var i = 0; i < k; i++){
            for(var j = i+1; j < k; j++){
                if( array[i] == array[j] ) return false;// same row
                if( i + array[i] == j + array[j] ) return false;// reverse diagonal
                if( i - array[i] == j - array[j] ) return false;// right diagonal
            }
        }
        return true;
        

    }

    const place = (array) => {
        
        if(!check(array)) return;
        if(array.length == n) {
            console.log(array);
            c++;
            return array;
        }
        for(let i = 1; i < n+1; i++){
            array.push(i);
            place(array);
            array.pop();
        }

    }

   place(array);
    console.log(c);

}
nqueen(6, []);
