enum ConnectionState{
    Disconnected,
    Connecting,
    Connected(String), 
    Error(i32),
}

fn describe(state: ConnectionState ) -> String {
    match state{
        ConnectionState::Disconnected => { String::from("Disconnected")},
        ConnectionState::Connecting=> {String::from("Connecting")},
        ConnectionState::Connected(ip) => format!("Connected : {}",ip) ,
        ConnectionState::Error(code) => format!("error {}",code)
    }
}

fn get_user_age(name: &str)->Result<Option<u32>,String>{
    match name{
        "Nabil" => Ok(Some(30)),
        "Rayan" => Ok(Some(25)),
        "Nayarr" => Ok(None),
        _ => Err(String::from("Base de donnée innaccessible"))
    }
}

fn main() {
    // println!("Hello, world!");

    // let ao : Option<u32>=Some(42);
    // let bo : Option<u32>=Some(2); 
    // let co: Option<u32>=Some(1);
    

    // if let Some(a)= ao{
    //     if let Some(b)= bo{
    //         if let Some(c)= co{
    //             println!("somme : {}",a+b+c);
    //         }
    //     }
    // }
    println!("{}",describe(ConnectionState::Connected(String::from("192.168.1.1"))));
    let nom = "Naya";
    match get_user_age(nom) {
        Ok(Some(age)) => println!("L'âge de {} est : {}", nom, age),
        Ok(None) => println!("utilisateur {} est inconnu", nom),
        Err(e) => println!("Erreur survenue: {}", e),
    }
}
