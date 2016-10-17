#ifndef DETAIL_H
#define DETAIL_H

#include <QWidget>
#include <qlabel.h>
#include <qcombobox.h>
#include <qlineedit.h>
#include <qtextedit.h>
#include <qgridlayout.h>

class Detail : public QWidget
{
	Q_OBJECT

public:
	Detail(QWidget *parent = 0);

private:
	QLabel *NationalLabel;
	QComboBox *NationalComboBox;
	QLabel *ProvinceLabel;
	QComboBox *ProvinceComboBox;
	QLabel *CityLabel;
	QLineEdit *CityLineEdit;
	QLabel *IntroductLabel;
	QTextEdit *IntroductTextEdit;
	QGridLayout *mainLayout;
};

#endif // DETAIL_H
