fn max_nab<T:PartialOrd>(a:T,b:T) -> T{ // PartialOrd pour imposer la contrainte de comparaison
    if a > b{
        return a;
    }
    else{return b}
}

pub fn main(){
    // let a = 5;
    // let b =4;
    let a = 4.5;
    let b = 4.6;
    let maximum = max_nab(a, b);
    println!("le max entre {} et {} est {} :",a,b,maximum);
    
}