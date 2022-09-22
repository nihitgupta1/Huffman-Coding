#include <iostream>
#include "huffman.hpp"
using namespace std;

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        cout << "Failed to detect files!";
        exit(1);
    }

    Huffman f(argv[1], argv[2]);
    f.compress();
    cout << "Compressed successfully" << endl;

    return 0;
}