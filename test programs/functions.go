package main;

import "fmt";

func add(a, b int) int {
    return a + b;
}

func main() {
    result := add(3, 5);
    fmt.Println("Sum:", result);
};