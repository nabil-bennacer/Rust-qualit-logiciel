enum Command {
    Quit,
    Move { x: i32, y: i32 },
    Write(String),
    ChangeColor(u8, u8, u8),
}


fn handle(cmd : Command){
    match cmd{
        Command::Quit => println!("Quit command recue"),
        Command::Move { x, y } => println!("Move command recue: x={}, y={}", x, y),
        Command::Write(text) => println!("Write command recue: {}", text),
        Command::ChangeColor(r, g, b) => println!("ChangeColor command recue: r={}, g={}, b={}", r, g, b),
    }
}

pub fn main(){
    let cmd=Command::ChangeColor(255,200, 155);
    // let cmd = Command::Move{x : 3,y : 4};
    // let cmd = Command::Write(String::from("salut"));
    // let cmd = Command::Quit;
    handle(cmd);
}

