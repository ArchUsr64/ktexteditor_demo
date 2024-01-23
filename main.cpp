#include <KTextEditor/Document>
#include <KTextEditor/Editor>
#include <KTextEditor/View>

#include <QApplication>
#include <QWidget>

struct MainWindow : QWidget {
  KTextEditor::View *view;
  KTextEditor::Editor *editor;
  KTextEditor::Document *doc;
  MainWindow() {
    this->editor = KTextEditor::Editor::instance();
    this->doc = editor->createDocument(this);
    this->view = doc->createView(this);
  };
};

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainWindow main_window;
  main_window.show();
  return a.exec();
}
