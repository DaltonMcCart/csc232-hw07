# hw07-dp-gold-coins

A homework assignment related to dynamic programming in CSC232.

## Due Date: 23:59 Wednesday 15 May 2019

Submit the URL of your repo to the associated Teams assignment.

### Maximum Number of Golden Coins

A table is composed of m x n cells. Each cell contains a number of golden coins. An example is as follows:

```c++
5    3    9
7    2    2
2    3    1
```

You start at the upper-left cell and want to reach the bottom-right cell. At each step, you can go either down or right one cell. Write a program that uses dynamic programming to find the maximum number of golden coins you can collect.  

The output from your program should display the cache table where the maximum number of golden coins collected on a path from the top-left cell to cell (r, c) is stored in cell (r, c). Also output a message indicating the maximum number of coins on a path from the top-left cell to the right-bottom cell. Sample output for the above grid is as follows (**Note**: you do not have to show borders around the cells, and the leading zeros shown in the first row are just an artifact needed for proper column alignment in this simplified markdown format. Your output **shall not** contain these leading zeros and yet still be right-aligned.):

```bash
05  08  17
12  14  19
14  17  20

Maximum number of golden coins we can collect is 20
```

The program should read input from an input file. The file contains the description of an unspecified number of tables. The data for each table starts with two numbers representing the number of rows and columns in the table. This is followed by the number of coins on each row. For example, the top table is represented as follows:

```c++
3  3
5  3  9
7  2  2
2  3  1
```

Another sample input file with three tables is as follows:

```c++
3  3
5  3  9
7  2  2
2  3  1
2  3
7  2  4
1  5  1
4  5
7  3  4  5  3
2  1  4  8  2
9  2  4  3  1
1  2  3  4  6
```

For each input table, display the corresponding cache table following by a message indicating the maximum number of golden coins that we can collect.
