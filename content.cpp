#include "content.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
Content::Content(QWidget *parent)
	: QWidget(parent)
{
	stack = new QStackedWidget(this);
	stack->setFrameStyle(QFrame::Panel | QFrame::Raised);
	baseInfo = new BaseInfo(stack);
	//contact = new Contact(stack);
	//detail = new Detail(stack);
	stack->addWidget(baseInfo);
	//stack->addWidget(contact);
	//stack->addWidget(detail);
	//QWidget *w = new QWidget(this);
	//stack->addWidget(w);
	AmendBtn = new QPushButton(tr("ÐÞ¸Ä"));
	CloseBtn = new QPushButton(tr("¹Ø±Õ"));
	
	QHBoxLayout *BtnLayout = new QHBoxLayout();
	BtnLayout->addStretch(1);
	BtnLayout->addWidget(AmendBtn);
	BtnLayout->addWidget(CloseBtn);

	QVBoxLayout *RightLayout = new QVBoxLayout(this);
	RightLayout->setMargin(10);
	RightLayout->setSpacing(6);
	RightLayout->addWidget(stack);
	RightLayout->addLayout(BtnLayout);
	this->setLayout(RightLayout);

	
}

Content::~Content()
{

}
