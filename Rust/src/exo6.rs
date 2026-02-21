trait Sensor{
    fn read(&self)-> f64;
}

struct CapteurTemperature{
    temperature:f64
}

struct CapteurPression{
    pression:f64
}

impl Sensor for CapteurTemperature{
    fn read(&self)-> f64 {  // on met &self pour avoir accés au champ dans CapteurTemperature
        return self.temperature
    }
}


impl Sensor for CapteurPression {
    fn read(&self)-> f64 {
        return self.pression
    }
    
}

fn print_capteur(capteur : &impl Sensor){
    println!("la valeur mesurée par le capteur est {}",capteur.read())
}

pub fn main(){
    // 1. On crée nos capteurs
    let temp = CapteurTemperature { temperature: 25.5 };
    let press = CapteurPression { pression: 1013.2 };

    // 2. On crée un tableau fixe contenant des références vers "n'importe quel Sensor"
    let liste_sans_alloc: [&dyn Sensor; 2] = [&temp, &press];

    // 3. On affiche
    println!("--- Sans allocation dynamique ---");
    for capteur in liste_sans_alloc {
        // Rust utilise la Vtable du Fat Pointer pour trouver le bon "read()" !
        println!("Valeur lue : {}", capteur.read()); 
    }

    // 1. On crée un vecteur (liste extensible) qui accepte des Box de Sensor
    let mut liste_avec_alloc: Vec<Box<dyn Sensor>> = Vec::new();

    // 2. On crée les capteurs directement à l'intérieur de boîtes (Box) et on les ajoute
    liste_avec_alloc.push(Box::new(CapteurTemperature { temperature: 18.0 }));
    liste_avec_alloc.push(Box::new(CapteurPression { pression: 998.0 }));

    // 3. On affiche
    println!("--- Avec allocation dynamique ---");
    for capteur in liste_avec_alloc {
        println!("Valeur lue : {}", capteur.read());
    }
}