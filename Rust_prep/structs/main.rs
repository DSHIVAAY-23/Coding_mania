struct Shooters {
    name: String,
    id: u32,
}

impl Shooters {
    fn run(&self) {
        println!("{} is running", self.name);
    }
    fn jump(&self) {
        println!("{} is jumping", self.name);
    }
}

struct Gun {
    name: String,
    gun_type: i32,
}

impl Gun {
    fn load(&self) {
        println!("{} is loading", self.name);
    }
    fn fire(&self) {
        println!("{} is firing", self.name);
    }
}

enum Feature {
    SingleShot,
    Automatic,
    SemiAutomatic,
}

fn main() {
    // Create a Shooter instance
    let shootout = Shooters {
        name: String::from("John Wick"),
        id: 1,
    };

    // Create a Gun instance
    let pistol = Gun {
        name: String::from("Desert Eagle"),
        gun_type: 1,
    };

    // Call methods on Shooter
    shootout.run();
    shootout.jump();

    // Call methods on Gun
    pistol.load();
    pistol.fire();

    // Using the Feature enum
    let gun_feature = Feature::Automatic;

    match gun_feature {
        Feature::SingleShot => println!("The gun is in single-shot mode"),
        Feature::Automatic => println!("The gun is in automatic mode"),
        Feature::SemiAutomatic => println!("The gun is in semi-automatic mode"),
    }
}
