#include <QApplication>

#include<QPushButton>

int main(int argc, char *argv[])

{

    QApplication a(argc, argv);

    QPushButton HelloWorld("Woo i has mad a fucking GUI after 5 hours!!!!");

    HelloWorld.resize(800,500);

    HelloWorld.show();

    return a.exec();

}
