#include "mainw.h"

mainw::mainw(QWidget *parent)
	: QMainWindow(parent)
{
	QFont font("AR PL KaitiM GB", 12);
	this->setFont(font);
	QWidget *w = new QWidget(this);
	QHBoxLayout *mainHLayout = new QHBoxLayout(w);
	QSplitter *splitterMain = new QSplitter(Qt::Horizontal, this);
	splitterMain->setOpaqueResize(true);
	QListWidget *list = new QListWidget(this);
	list->insertItem(0, QStringLiteral("������Ϣ"));
	list->insertItem(1, QStringLiteral("��ϵ��ʽ"));
	list->insertItem(2, QStringLiteral("��ϸ����"));
	
	Content *content = new Content(this);
	splitterMain->addWidget(list);
	splitterMain->addWidget(content);

	QObject::connect(list, SIGNAL(currentRowChanged(int)), content->stack, SLOT(setCurrentIndex(int)));

	splitterMain->setWindowTitle(QStringLiteral("�޸��û�����"));
	splitterMain->setMinimumSize(splitterMain->minimumSize());
	splitterMain->setMaximumSize(splitterMain->maximumSize());
	splitterMain->setVisible(true);
	mainHLayout->addWidget(splitterMain);
	this->setCentralWidget(w);

}

mainw::~mainw()
{

}
