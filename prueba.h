#ifndef PRUEBA_H
#define PRUEBA_H

#include <QDialog>

namespace Ui {
class prueba;
}

class prueba : public QDialog
{
    Q_OBJECT

public:
    explicit prueba(QWidget *parent = 0);
    ~prueba();
	


	void hola();

private:
    Ui::prueba *ui;
};

#endif // PRUEBA_H
