#ifndef STARTDIALOG_H
#define STARTDIALOG_H

#include <QWidget>
#include <QPushButton>
#include <QMessageBox>
#include "inputdialog.h"

class StartDialog : public QPushButton
{
    Q_OBJECT

public:
     StartDialog(QWidget *pwgt = 0) : QPushButton("Нажми", pwgt)
     {
         connect(this, SIGNAL(clicked()),SLOT(slotButtonClicked()));
     }


public slots:
     void slotButtonClicked()
     {
         InputDialog* pInputDialog = new InputDialog;
         if (pInputDialog->exec()== QDialog::Accepted){
             QMessageBox::information(0,"Ваша информация:","Имя: " + pInputDialog->firstName() + "\nФамилия: " + pInputDialog->lastName());
         }
         delete pInputDialog;
     }
};

#endif // STARTDIALOG_H
