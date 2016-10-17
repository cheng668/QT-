#ifndef CONTACT_H
#define CONTACT_H

#include <QWidget>
#include <QLabel>
#include <qgridlayout.h>
#include <qcheckbox.h>
#include <qlineedit.h>

class Contact : public QWidget
{
	Q_OBJECT

public:
	Contact(QWidget *parent = 0);

private:
	QLabel *EmailLabel;
	QLineEdit *EmailLineEdit;
	QLabel *AddrLabel;
	QLineEdit *AddrLineEdit;
	QLabel *CodeLabel;
	QLineEdit *CodeLineEdit;
	QLabel *MoviTelLabel;
	QLineEdit *MoviTelLineEdit;
	QCheckBox *MoviTelCheckBox;
	QLabel *ProTelLabel;
	QLineEdit *ProTelLineEdit;
	QGridLayout *mainLayout;	
};

#endif // CONTACT_H
