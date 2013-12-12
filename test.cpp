#include <QApplication>
#include <QMainWindow>
#include <QVBoxLayout>
#include <QTableView>

#include "attribute_editor.h"

class MyClass : public Bindable
{
public:
  MyClass() {
    QString xres("{ 'var' : 'xres', 'name' : 'Image Width', 'type' : 'int', 'min' : 1, 'max' : 4096, 'value' : 1024 }");
    QString yres("{ 'var' : 'yres', 'name' : 'Image Height', 'type' : 'int', 'min' : 1, 'max' : 4096, 'value' : 768 }");
    QString samplingWidth("{ 'var' : 'samplingWidth', 'name' : 'Sampling Width', 'type' : 'float', 'min' : 1, 'max' : 8, 'value' : 3 }");
    QString exposure("{ 'var' : 'exposure', 'name' : 'Exposure', 'type' : 'float', 'min' : 0.001, 'max' : 1000, 'value' : 1.0 }");

    QStringList atts;
    atts << xres << yres << samplingWidth << exposure;

    addAttributes(atts);
  }
};

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QMainWindow window;
    window.setWindowTitle("test - qattrs");
    window.setMinimumSize(300, 500);

    QTableView* table = new QTableView();
    AttributeEditor* editor = new AttributeEditor(0);
    table->setModel(editor);
    window.setCentralWidget(table);
    window.show();

    Bindable* bindable = new MyClass();
    editor->update(bindable);
    //editor

    return app.exec();
}
