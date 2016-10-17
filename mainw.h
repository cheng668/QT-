#ifndef MAINW_H
#define MAINW_H

#include <QMainWindow>
#include "content.h"
#include <qtextcodec.h>
#include <qsplitter.h>
#include <qlistwidget.h>
#include <QHBoxLayout>

class mainw : public QMainWindow
{
	Q_OBJECT

public:
	mainw(QWidget *parent =0);
	~mainw();

private:
	
};

#endif // MAINW_H
