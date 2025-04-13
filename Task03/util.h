#include "logic.h"

#include <iostream>
#include <string>

#define BUF 100

using namespace std;

string convert(int matrix[BUF][BUF], int size);
void init_random(int matrix[BUF][BUF], int size, int a, int b);
void init_user(int matrix[BUF][BUF], int size);