#include "mainwindow.h"

MainWindow::MainWindow() {
  this->editor = KTextEditor::Editor::instance();
  this->doc = editor->createDocument(this);
  this->view = doc->createView(this);
}
