#ifndef INPUTDIALOG_H
#define INPUTDIALOG_H

#include <QDialog>
#include <QLineEdit>

class  QLineEdit;


class InputDialog : public QDialog
{
    Q_OBJECT

public:
     InputDialog(QWidget *pwgt = 0);
     QString firstName() const;
     QString lastName() const;

private:
    QLineEdit * m_ptxtFirstName;
    QLineEdit * m_ptxtLastName;

};

#endif // INPUTDIALOG_H
