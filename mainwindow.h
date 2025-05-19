#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMap>
#include "product.h"
#include "order.h"

QT_BEGIN_NAMESPACE
namespace Ui {class MainWindow;}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QList<Product> menu;
    QString selectedTable;
    QMap<QString, Order> orders;

    void loadMenu();
    void updateOrderView();
    void showMenu(int start, int end);
};
#endif // MAINWINDOW_H
