#include "mereboardsimple.h"
#include "ui_mereboardsimple.h"

MereBoardSimple::MereBoardSimple(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MereBoardSimple)
{
    ui->setupUi(this);
}

MereBoardSimple::~MereBoardSimple()
{
    delete ui;
}
