package com.company;

class Animal {
    public void animalSound() {
        System.out.println("The animal makes a sound");
    }
}

class Pig extends Animal {					//extends Animal
    public void animalSound() {
        System.out.println("The pig says: wee wee");
    }
}

class Dog extends Animal {					//extends Animal
    public void animalSound() {
        System.out.println("The dog says: bow wow");
    }
}