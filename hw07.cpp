/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2019
 *
 * @authors Jim Daehn <jdaehn@missouristate.edu>
 *          TODO: Put your name here
 * @brief HW 7: Dynamic Programming - Maximum Number of Gold Coins
 *        Due Date: 23:59 Wednesday 15 May 2019
 */

#include <fstream>
#include <iomanip>
#include <iostream>

// Function Prototypes - You must implement these functions.

/**
 * Display the contents of a two-dimensional integer array.
 *
 * @param table the two dimensional array whose contents is displayed in tabular
  *       format
 * @param numRows the number of rows in the two dimensional array
 * @param numColumns the number of columns in the two dimensional array
 * @post The contents of table are displayed in tabular format to the standard
 *       output device. The contents of the table are unchanged.
 */
void display(int **table, const int &numRows, const int &numColumns);

/**
 * Calculate the maximum number of gold coins collected in traveling from the
 * upper left-hand corner of a table to the bottom right-hand corner.
 *
 * @param table the two dimensional array whose contents are some number of gold
 *        coins in each cell
 * @param numRows the number of rows in the two dimensional array
 * @param numColumns the number of columns in the two dimensional array
 * @return The maximum number o fgold coins that can be collected in traversing
 *         the table from the upper left-hand corner to the lower right-hand
 *         corner
 * @post The contents of the table are unchanged.
 */
int maxNumCoins(int **table, const int &numRows, const int &numColumns);

/**
 * Calculate the maximum value between two integers.
 *
 * @param a one integer in the comparison
 * @param b the other integer in the comparison
 * @return The maximum of a and b is returned.
 * @post Neither a nor b is changed.
 */
int max(const int &a, const int &b);

/**
 * Entry point of this application.
 *
 * @param argc the number of command-line arguments
 * @param argv the command-line arguments
 */
int main(int argc, char **argv) {
    // The data file containing grid data
    std::string inputFile;
    // Check to see if the user has supplied a specific input file for consumption
    if (argc > 1) {
        inputFile = argv[1];
    } else {
        inputFile = "data.txt";
    }

    // A stream containing input data to process
    std::ifstream dataFile(inputFile, std::ios::in);

    // Check if stream is valid
    if (!dataFile) {
        std::cout << "Could not open " << inputFile << "..." << std::endl;
        // Invalid file, exit prematurely
        exit(EXIT_FAILURE);
    } else {
        // We have a valid file that is assumed to be properly formatted
        // As long as there is data to read...
        while (!dataFile.eof()) {
            // First items to read are the number of rows and columns for the current
            // grid
            int rows;
            int cols;

            // Get the number of rows and columns for the current grid
            dataFile >> rows >> cols;

            // create the array needed... a dynamic, two-dimensional array is an int**
            int **grid;
            // Create the rows
            grid = new int *[rows];
            // Create the columns
            for (int i{0}; i < rows; ++i) {
                grid[i] = new int[cols];
            }

            // read data into array
            for (int row{0}; row < rows; ++row) {
                for (int col{0}; col < cols; ++col) {
                    // read data from input file
                    dataFile >> grid[row][col];
                }
            }

            // Compute the maximum number of golded coins that can be collected
            int max = maxNumCoins(grid, rows, cols);
            std::cout << std::endl
                      << "Maximum number of golden coins we can collect is " << max
                      << std::endl << std::endl;

            // we're done processing the current grid so let's get rid of it. If more
            // data exists, a new grid with the appropriate dimensions will be created
            // in the next iteration of this loop.
            for (int i{0}; i < rows; ++i) {
                delete[] grid[i];
                grid[i] = nullptr;
            }
            delete[] grid;
            grid = nullptr;
        }
    }

    // No more data; program ends
    return EXIT_SUCCESS;
}

void display(int **table, const int &rows, const int &cols) {
    // TODO: Display the data in the given array in tabular format.
    // Each value should be printed in a field width of 5. Numbers should be
    // right-aligned in each column
}


int maxNumCoins(int **grid, const int &rows, const int &cols) {
    // TODO: Compute this value using a dynamic programming approach.
    // Adjust the return value accordingly as this is merely a stub.
    return 0;
}

int max(const int &a, const int &b) {
    // TODO: Compute this value. Adjust the return value accordingly as this is
    // merely a stub.
    return 0;
}
