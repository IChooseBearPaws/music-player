#include "create_list.h"

create_list::create_list(QWidget *parent) : QWidget(parent)
{
    this ->resize(350, 200);
    name = new QLineEdit(this);
    name ->setGeometry(40, 40, 200, 40);

    ok = new QPushButton(this);
    ok ->setText("确定");
    ok ->setGeometry(40, 100, 70, 40);

    cancel = new QPushButton(this);
    cancel ->setText("取消");
    cancel ->setGeometry(180, 100, 70, 40);

    connect(ok, &QPushButton::clicked, [=] () {
        this ->hide();
        emit create_ok(name ->text());
    });

    connect(cancel, &QPushButton::clicked, [=] () {
        this ->hide();
    });
}
