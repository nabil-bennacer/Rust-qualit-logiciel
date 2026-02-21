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

pub fn main(){
    println!("{}",describe(ConnectionState::Connected(String::from("192.168.1.1"))));
}