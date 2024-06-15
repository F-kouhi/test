#include <QApplication>
#include "mainwindow.h"
#include <iostream>
using namespace std;

size_t WriteCallback(void *contents, size_t size, size_t nmemb, std::string *data)
{
    data->append((char *) contents, size * nmemb);
    return size * nmemb;
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    cout << "hello\n";
    cout << "bye\n";

    return a.exec();
}
