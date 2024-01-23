#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <KTextEditor/Document>
#include <KTextEditor/Editor>
#include <KTextEditor/View>

#include <QWidget>

class MainWindow : public QWidget
{

public:
  KTextEditor::View *view;
  KTextEditor::Editor *editor;
  KTextEditor::Document *doc;
  MainWindow();
signals:
public slots:
};

#endif // MAINWINDOW_H
