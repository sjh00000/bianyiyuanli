#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>
using namespace std;

void program()
{
    declaration_stat();
    statement_list();
}

void declaration_stat()
{

}

void statement_list()
{

}

void statement()
{

}

void if_stat()
{

}

void while_stat()
{

}

void for_stat()
{

}

void write_stat()
{

}

void read_stat()
{

}

void compound_stat()
{

}

void assignment_expression()
{

}

void assignment_stat()
{

}

void bool_expression()
{

}

void arithmetic_expression()
{

}

void term()
{

}

void factor()
{

}

int main() {
    ifstream file("test.txt");
    if (!file)
    {
        cerr << "无法打开文件" << endl;
        return 1;
    }
    string word;
    while (file >> word)
    {
        program();
    }
    file.close();
    return 0;
}
