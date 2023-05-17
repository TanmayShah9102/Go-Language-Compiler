package main;

import "fmt";

func main() {
    var numbers [5]int;

    for i := 0; i < len(numbers); i++ {

        numbers[i] = i+1;
        fmt.Println(numbers[i]);
    };

    numbers[4] = 25;
    
    fmt.Println("set:", numbers);
    fmt.Println("get:", numbers[4]);
};