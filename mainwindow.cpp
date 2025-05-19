#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMap>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QInputDialog>
#include "product.h"
#include "order.h"

void MainWindow::loadMenu(){
    //brunch
    menu.append(Product(1,"Benedict Eggs",6.80));
    menu.append(Product(2,"Omelette",6.00));
    menu.append(Product(3, "Pancakes with honey or chocolate and fruits", 5.80));
    menu.append(Product(4, "Avocado Toast with poached egg", 6.50));
    menu.append(Product(5, "Breakfast Baguette", 4.80));
    menu.append(Product(6, "Yogurt with honey & granola", 4.50));
    //coffee
    menu.append(Product(7,"Single Espresso",3.00));
    menu.append(Product(8, "Double Espresso", 3.50));
    menu.append(Product(9, "Freddo Espresso", 4.00));
    menu.append(Product(10, "Cappuccino", 4.50));
    menu.append(Product(11, "Freddo Cappuccino", 4.50));
    menu.append(Product(12, "Latte", 4.80));
    menu.append(Product(13, "Flat White", 4.80));
    menu.append(Product(14, "Single Greek", 2.50));
    menu.append(Product(15, "Double Greek", 3.00));
    menu.append(Product(16, "Chocolate (hot or cold)", 4.50));
    menu.append(Product(17, "Tea", 3.50));
    menu.append(Product(18, "Redbull", 5.00));
    menu.append(Product(19, "Smoothie", 5.50));
    //food
    menu.append(Product(20,"Club Sandwich with potatoes",7.80));
    menu.append(Product(21,"Burger Classic",8.50));
    menu.append(Product(22,"Burger Crispy",7.90));
    menu.append(Product(23,"Toast XL", 4.00));
    menu.append(Product(24,"Caesar's salad", 6.80));
    //drinks
    menu.append(Product(25,"Dry White Wine (by the glass)",6.00));
    menu.append(Product(26,"Semi-Dry Rose Wine (by the glass)",6.00));
    menu.append(Product(27,"Dry Red Wine (by the glass)",6.00));
    menu.append(Product(28,"Aperol Spritz",9.00));
    menu.append(Product(29,"Mojito",9.00));
    menu.append(Product(30,"Espresso Martini",10.00));
    menu.append(Product(31,"Pornstar",10.00));
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadMenu();
    //invisible buttons
    ui->btnBrunch->setVisible(false);
    ui->btnCoffee->setVisible(false);
    ui->btnFood->setVisible(false);
    ui->btnDrinks->setVisible(false);

    connect(ui->btnTable1, &QPushButton::clicked,this,[this](){
        selectedTable = "1";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTable2, &QPushButton::clicked,this,[this](){
        selectedTable = "2";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTable3, &QPushButton::clicked,this,[this](){
        selectedTable = "3";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTable4, &QPushButton::clicked,this,[this](){
        selectedTable = "4";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTable5, &QPushButton::clicked,this,[this](){
        selectedTable = "5";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTable6, &QPushButton::clicked,this,[this](){
        selectedTable = "6";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTable7, &QPushButton::clicked,this,[this](){
        selectedTable = "7";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTable8, &QPushButton::clicked,this,[this](){
        selectedTable = "8";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTable9, &QPushButton::clicked,this,[this](){
        selectedTable = "9";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTableS1, &QPushButton::clicked,this,[this](){
        selectedTable = "S1";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTableS2, &QPushButton::clicked,this,[this](){
        selectedTable = "S2";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTableS3, &QPushButton::clicked,this,[this](){
        selectedTable = "S3";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTableS4, &QPushButton::clicked,this,[this](){
        selectedTable = "S4";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTableS5, &QPushButton::clicked,this,[this](){
        selectedTable = "S5";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTableS6, &QPushButton::clicked,this,[this](){
        selectedTable = "S6";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTableS7, &QPushButton::clicked,this,[this](){
        selectedTable = "S7";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTableS8, &QPushButton::clicked,this,[this](){
        selectedTable = "S8";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnTableS9, &QPushButton::clicked,this,[this](){
        selectedTable = "S9";
        ui->labelTable->setText("Table: " + selectedTable);
        //visible buttons
        ui->btnBrunch->setVisible(true);
        ui->btnCoffee->setVisible(true);
        ui->btnFood->setVisible(true);
        ui->btnDrinks->setVisible(true);
        //create order
        if (!orders.contains(selectedTable))
            orders[selectedTable] = Order(selectedTable);
        updateOrderView();
    });

    connect(ui->btnBrunch, &QPushButton::clicked,this, [this](){
        showMenu(1,6);
    });

    connect(ui->btnCoffee, &QPushButton::clicked,this, [this](){
        showMenu(7,19);
    });

    connect(ui->btnFood, &QPushButton::clicked,this, [this](){
        showMenu(20,24);
    });

    connect(ui->btnDrinks, &QPushButton::clicked,this, [this](){
        showMenu(25,31);
    });

    connect(ui->btnAddToOrder, &QPushButton::clicked,this,[this](){
        QListWidgetItem* selectedItem = ui->listWidget->currentItem();
        if(!selectedItem) return;

        int id = selectedItem->data(Qt::UserRole).toInt();

        for(const Product& p: menu){
            if(p.id == id){
                int quantity = ui->spinQuantity->value();
                if(quantity<=0){
                    QMessageBox::warning(this,"Attention","Quantity must be grater then 0!");
                    return;
                }
                QString comment = ui->lineComm->text();
                OrderItem item(p,quantity,comment);
                orders[selectedTable].addItem(item);

                ui->listWidgetOrder->addItem(
                    QString("[Table %1]%2").arg(selectedTable, item.toString()));
                break;
            }
        }
        ui->lineComm->clear();
    });

    connect(ui->btnPrintReceipt, &QPushButton::clicked, this, [this]() {
        if (orders.isEmpty()) {
            QMessageBox::information(this, "No Orders", "There are no active orders.");
            return;
        }

        // Δημιουργούμε λίστα με τα ανοιχτά τραπέζια
        QStringList tableIds;
        for (const QString& key : orders.keys()) {
            if (!orders[key].isEmpty()) {
                tableIds.append(key);
            }
        }

        if (tableIds.isEmpty()) {
            QMessageBox::information(this, "No Active Orders", "There are no open orders to print.");
            return;
        }

        // Ζητάμε από τον χρήστη να επιλέξει τραπέζι
        bool ok;
        QString selected = QInputDialog::getItem(this, "Επιλογή Τραπεζιού",
                                                 "Ποιο τραπέζι θες να εκτυπωθεί;", tableIds, 0, false, &ok);

        if (!ok || selected.isEmpty())
            return;

        // Εκτύπωση απόδειξης για το επιλεγμένο τραπέζι
        QString receipt = orders[selected].getReceipt();

        QFile file("orders.txt");
        if (file.open(QIODevice::WriteOnly | QIODevice::Text | QIODevice::Append)) {
            QTextStream out(&file);
            out << receipt << "\n----------------------\n";
            file.close();
        }

        QMessageBox::information(this, "Απόδειξη", receipt);

        // Καθαρίζουμε την παραγγελία μόνο για το τραπέζι που εκτυπώθηκε
        orders[selected] = Order(selected);

        if (selected == selectedTable) {
            ui->listWidgetOrder->clear();
        }
    });

}

void MainWindow::showMenu(int start, int end){
    ui->listWidget->clear();
    for(int i=start-1; i<end; ++i){
        const Product& p=menu[i];
        QListWidgetItem* item = new QListWidgetItem(p.toString());
        item->setData(Qt::UserRole,p.id);
        ui->listWidget->addItem(item);
    }
}

void MainWindow::updateOrderView(){
    ui->listWidgetOrder->clear();
    if(!orders.contains(selectedTable)) return;

    for(const OrderItem& item:orders[selectedTable].getItems()){
        ui->listWidgetOrder->addItem(item.toString());
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
