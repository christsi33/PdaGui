#ifndef ORDER_H
#define ORDER_H

#include "orderitem.h"
#include <QString>
#include <QList>

class Order {
private:
    QString tableId;
    QList<OrderItem> items;

public:
    Order(const QString& id = "") : tableId(id) {}

    void addItem(const OrderItem& item) {
        items.append(item);
    }

    double getTotal() const {
        double total = 0;
        for (const OrderItem& item : items)
            total += item.getSubtotal();
        return total;
    }

    QString getReceipt() const {
        QString r;
        r += "=========== RECEIPT ===========\n";
        r += "Table: " + tableId + "\n";
        r += "-------------------------------\n";
        for (const OrderItem& item : items)
            r += item.toString() + "\n";
        r += "-------------------------------\n";
        r += QString("Total: %1 €\n").arg(getTotal(), 0, 'f', 2);
        r += "===============================\n";
        return r;
    }

    const QList<OrderItem>& getItems() const{
        return items;
    }

    void clear() {
        items.clear();
    }

    bool isEmpty() const {
        return items.isEmpty();
    }
};

#endif // ORDER_H
