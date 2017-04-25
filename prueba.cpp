#include "prueba.h"
#include "ui_prueba.h"

prueba::prueba(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::prueba)
{
    ui->setupUi(this);
}

prueba::~prueba()
{
    delete ui;
}

void prueba::hola()
{
    ui->label->setText("Hola mundo");
}

//si sirve
