#ifndef PORTCOMBOBOX_H
#define PORTCOMBOBOX_H

#include <QComboBox>


class PortComboBox : public QComboBox {
    Q_OBJECT
public:
    virtual void showPopup();
    explicit PortComboBox(QComboBox *parent = 0);
    ~PortComboBox();
};

#endif // PORTCOMBOBOX_H
