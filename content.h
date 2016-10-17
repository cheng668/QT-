#ifndef CONTENT_H
#define CONTENT_H

#include <QWidget>
#include <QStackedWidget>
#include <QPushButton>
#include <qframe.h>
#include "baseinfo.h"
#include "contact.h"
#include "detail.h"


class Content : public QWidget
{
    Q_OBJECT

public:
    Content(QWidget *parent = 0);
    ~Content();

	QStackedWidget *stack;
	QPushButton *AmendBtn;
	QPushButton *CloseBtn;
	BaseInfo *baseInfo;
	Contact *contact;
	Detail *detail;

};

#endif // CONTENT_H
