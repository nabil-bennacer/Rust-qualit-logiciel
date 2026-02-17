enum ConnectionState{
    Disconnected,
    Connecting,
    Connected, 
    Error(i32),
}

fn describe(state: ConnectionState ) -> String {
    match state{
        ConnectionState::Disconnected => { println!("Disconnected")},
        ConnectionState::Connecting=> {println!("Connecting")},
        ConnectionState::Connected => {println!("Connected")},
        ConnectionState::Error(code) => {println!("error{}",code)}
    }
    return String::from("fini")
}

fn get_user_age(name: &str)->Result<Option<u32>,String>{
    
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
    describe(ConnectionState::Connected);
}
