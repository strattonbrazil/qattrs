#include <QApplication>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QTableView>

#include "attribute_editor.h"

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QMainWindow window;
    window.setWindowTitle("test - qattrs");
    window.setMinimumSize(300, 500);
    window.setLayout(new QVBoxLayout());

    QTableView* table = new QTableView();
    table->setModel(new AttributeEditor());
    window.layout()->addWidget(table);
    

    window.show();

    return app.exec();
}
