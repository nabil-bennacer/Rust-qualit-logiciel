fn get_user_age(name: &str)->Result<Option<u32>,String>{
    match name{
        "Nabil" => Ok(Some(30)),
        "Rayan" => Ok(Some(25)),
        "Nayarr" => Ok(None),
        _ => Err(String::from("Base de donnée innaccessible"))
    }
}

pub fn main(){
    let nom = "Nayarr";
    match get_user_age(nom) {
        Ok(Some(age)) => println!("L'âge de {} est : {}", nom, age),
        Ok(None) => println!("utilisateur {} est inconnu", nom),
        Err(e) => println!("Erreur survenue: {}", e),
    }
}