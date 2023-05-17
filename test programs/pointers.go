package main;

import "fmt";

func main() {
    x := 10;
    fmt.Println("Value of x:", x);
    fmt.Println("Address of x:", &x);

    y := &x;
    fmt.Println("Value of y:", *y);
    fmt.Println("Address of y:", y);
};