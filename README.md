## Resolution Finder

Resolution Finder is a simple C++ program that identifies resolutions with a 4:3 aspect ratio based on a given total number of pixels. This project demonstrates basic programming concepts such as loops, conditionals, and data structures in C++.

### Features

- Finds all possible resolutions with a 4:3 aspect ratio given a specified number of total pixels.
- Outputs the resolutions in a readable format.
- Provides an example of usage within the main function.

### Getting Started

#### Prerequisites

To compile and run this program, you need:

- A C++ compiler (e.g., g++, clang++)
- A text editor or an IDE (e.g., Visual Studio Code, CLion)

#### Installation

1. Clone the repository:
    ```bash
    git clone https://github.com/GEROGIANNIS/resolution-finder.git
    ```
2. Navigate to the project directory:
    ```bash
    cd resolution-finder
    ```

#### Usage

1. Open the `main.cpp` file in your text editor or IDE.
2. Compile the program using your C++ compiler. For example, using g++:
    ```bash
    g++ -o resolution_finder main.cpp
    ```
3. Run the compiled program:
    ```bash
    ./resolution_finder
    ```

### Example

The example in the `main.cpp` file checks for resolutions with a 4:3 aspect ratio given a total of 38,400 pixels. The output will display all possible resolutions that meet this criterion.

#### Sample Output

```
Resolutions with 4:3 aspect ratio and 30000 pixels:
200x150
```

### Contributing

Contributions are welcome! Please feel free to submit a pull request or open an issue to discuss changes or improvements.

### License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

### Acknowledgements

This project was created to demonstrate basic C++ programming techniques. It can be expanded for educational purposes or adapted for more complex resolution calculations.
