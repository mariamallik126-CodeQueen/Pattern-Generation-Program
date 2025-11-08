#include <iostream>
#include <iomanip>
#include <string>
#include <limits>

using namespace std;

// Function prototypes
void displayMenu();
int getValidatedInput(int min, int max);
void clearScreen();
void pauseScreen();

// Pattern generation functions
void generateRightTriangle(int size);
void generateLeftTriangle(int size);
void generatePyramid(int size);
void generateInvertedPyramid(int size);
void generateDiamond(int size);
void generateHollowSquare(int size);
void generateNumberPyramid(int size);
void generateFloydTriangle(int size);
void generateButterfly(int size);
void generateHollowDiamond(int size);

int main() {
    int choice, size;
    bool running = true;

    cout << "=======================================" << endl;
    cout << "   GEOMETRIC PATTERN GENERATOR" << endl;
    cout << "=======================================" << endl;
    cout << endl;

    while (running) {
        displayMenu();
        
        cout << "Enter your choice (1-11): ";
        choice = getValidatedInput(1, 11);

        if (choice == 11) {
            cout << "\nThank you for using Pattern Generator!" << endl;
            cout << "Goodbye!" << endl;
            running = false;
            break;
        }

        cout << "\nEnter pattern size (5-50): ";
        size = getValidatedInput(5, 50);

        cout << "\n=======================================" << endl;
        cout << "           GENERATED PATTERN" << endl;
        cout << "=======================================" << endl;
        cout << endl;

        switch (choice) {
            case 1:
                generateRightTriangle(size);
                break;
            case 2:
                generateLeftTriangle(size);
                break;
            case 3:
                generatePyramid(size);
                break;
            case 4:
                generateInvertedPyramid(size);
                break;
            case 5:
                generateDiamond(size);
                break;
            case 6:
                generateHollowSquare(size);
                break;
            case 7:
                generateNumberPyramid(size);
                break;
            case 8:
                generateFloydTriangle(size);
                break;
            case 9:
                generateButterfly(size);
                break;
            case 10:
                generateHollowDiamond(size);
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << endl;
        pauseScreen();
        clearScreen();
    }

    return 0;
}

void displayMenu() {
    cout << "\n=======================================" << endl;
    cout << "           PATTERN MENU" << endl;
    cout << "=======================================" << endl;
    cout << "1.  Right Triangle" << endl;
    cout << "2.  Left Triangle" << endl;
    cout << "3.  Pyramid" << endl;
    cout << "4.  Inverted Pyramid" << endl;
    cout << "5.  Diamond" << endl;
    cout << "6.  Hollow Square" << endl;
    cout << "7.  Number Pyramid" << endl;
    cout << "8.  Floyd's Triangle" << endl;
    cout << "9.  Butterfly Pattern" << endl;
    cout << "10. Hollow Diamond" << endl;
    cout << "11. Exit" << endl;
    cout << "=======================================" << endl;
    cout << endl;
}

int getValidatedInput(int min, int max) {
    int value;
    
    while (true) {
        cin >> value;
        
        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input! Please enter a number between " 
                 << min << " and " << max << ": ";
        }
        else if (value < min || value > max) {
            cout << "Out of range! Please enter a number between " 
                 << min << " and " << max << ": ";
        }
        else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return value;
        }
    }
}

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

void pauseScreen() {
    cout << "\nPress Enter to continue...";
    cin.get();
}

// Pattern 1: Right Triangle
void generateRightTriangle(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 2: Left Triangle
void generateLeftTriangle(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i; j++) {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 3: Pyramid
void generatePyramid(int size) {
    for (int i = 1; i <= size; i++) {
        // Print spaces
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 4: Inverted Pyramid
void generateInvertedPyramid(int size) {
    for (int i = size; i >= 1; i--) {
        // Print spaces
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 5: Diamond
void generateDiamond(int size) {
    // Upper half
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    
    // Lower half
    for (int i = size - 1; i >= 1; i--) {
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= (2 * i - 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
}

// Pattern 6: Hollow Square
void generateHollowSquare(int size) {
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            if (i == 1 || i == size || j == 1 || j == size) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// Pattern 7: Number Pyramid
void generateNumberPyramid(int size) {
    for (int i = 1; i <= size; i++) {
        // Print spaces
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }
        // Print ascending numbers
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        // Print descending numbers
        for (int j = i - 1; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}

// Pattern 8: Floyd's Triangle
void generateFloydTriangle(int size) {
    int num = 1;
    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= i; j++) {
            cout << setw(3) << num << " ";
            num++;
        }
        cout << endl;
    }
}

// Pattern 9: Butterfly Pattern
void generateButterfly(int size) {
    // Upper half
    for (int i = 1; i <= size; i++) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Spaces
        for (int j = 1; j <= 2 * (size - i); j++) {
            cout << "  ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    
    // Lower half
    for (int i = size - 1; i >= 1; i--) {
        // Left stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        // Spaces
        for (int j = 1; j <= 2 * (size - i); j++) {
            cout << "  ";
        }
        // Right stars
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// Pattern 10: Hollow Diamond
void generateHollowDiamond(int size) {
    // Upper half
    for (int i = 1; i <= size; i++) {
        // Leading spaces
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }
        
        // Stars and spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
    
    // Lower half
    for (int i = size - 1; i >= 1; i--) {
        // Leading spaces
        for (int j = 1; j <= size - i; j++) {
            cout << " ";
        }
        
        // Stars and spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            if (j == 1 || j == (2 * i - 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
