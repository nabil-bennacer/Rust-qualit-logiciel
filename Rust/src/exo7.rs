fn longest<'a>(a:&'a str,b:&'a str)->&'a str{
    if a.len()>b.len(){
        return a
    }
    else {return b}
}

pub fn main(){
    let a = "hello";
    let b = "hellow";

    println!("la chaine la plus longue est : {}",longest(a,b));
}