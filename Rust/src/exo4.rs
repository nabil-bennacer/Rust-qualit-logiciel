use std::rc::Rc;
use std::cell::RefCell;

struct Node{
    entier : i32,
    next : Option<Rc<RefCell<Node>>>
}

struct List{
    head : Option<Rc<RefCell<Node>>>,
    length : i32

}

fn add(mut liste : List, valeur : i32)->List{ // on passe la liste en paramètre et pas sa référence donc on donne l'ownership de liste a add
    let new_node = Node{entier : valeur, next : liste.head};
    liste.head = Some(Rc::new(RefCell::new(new_node)));
    liste.length += 1;

    return liste; 
    // on doit retourner la liste à la fin car sinon elle serait détruite quand on sort du scope de la fonction add car c'est elle qui en est la propriétaire unique

}

fn print_list(liste : &List){
    let mut current = liste.head.clone();
    while let Some(noeud) = current{
        let borrowed_node = noeud.borrow(); // on doit faire noeud.borrow afin d'accéder aux champs entier et node qui sont protégés par un RefCell.
        println!("{}",borrowed_node.entier);
        current = borrowed_node.next.clone();
    }
    println!("None");
}
pub fn main(){
    // let a = Node{entier : 2, next : None};
    // let b = Node{entier : 5, next : Some(Rc::new(RefCell::new(a)))};

    // let list = List{head : Some(Rc::new(RefCell::new(b))),length:2};

    let mut list = List{head : None, length: 0};

    list = add(list,2);
    list = add(list,3);
    list = add(list,6);
    print_list(&list);

}