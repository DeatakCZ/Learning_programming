#include <iostream>
#include <QCoreApplication>

int main(int argc, char *argv[])
{
    int stopIt;
    std::cout << "Qt version: " << qVersion() << std::endl;
    std::cin >> stopIt;
}
