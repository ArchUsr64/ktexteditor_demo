#include <KTextEditor/Document>
#include <KTextEditor/Editor>
#include <KTextEditor/View>

#include <QApplication>
#include <QWidget>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  QWidget main_window;

  // get access to the global editor singleton
  auto editor = KTextEditor::Editor::instance();

  // create a new document
  auto doc = editor->createDocument(&main_window);

  // create a widget to display the document
  auto view = doc->createView(&main_window);

  main_window.show();
  return a.exec();
}
