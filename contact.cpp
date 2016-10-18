#include "contact.h"

Contact::Contact(QWidget *parent)
	: QWidget(parent)
{
	EmailLabel = new QLabel(QStringLiteral("�����ʼ���"));
	EmailLineEdit = new QLineEdit(this);
	AddrLabel = new QLabel(QStringLiteral("��ϵ��ַ��"));
	AddrLineEdit = new QLineEdit(this);
	CodeLabel = new QLabel(QStringLiteral("�������룺"));
	CodeLineEdit = new QLineEdit(this);
	MoviTelLabel = new QLabel(QStringLiteral("�ƶ��绰��"));
	MoviTelLineEdit = new QLineEdit(this);
	MoviTelCheckBox = new QCheckBox(QStringLiteral("��������"));
	ProTelLabel = new QLabel(QStringLiteral("�칫�绰��"));
	ProTelLineEdit = new QLineEdit(this);
	mainLayout = new QGridLayout(this);
	mainLayout->setMargin(15);
	mainLayout->setSpacing(10);
	mainLayout->addWidget(EmailLabel, 0, 0);
	mainLayout->addWidget(EmailLineEdit, 0, 1);
	mainLayout->addWidget(AddrLabel, 1, 0);
	mainLayout->addWidget(AddrLineEdit, 1, 1);
	mainLayout->addWidget(CodeLabel, 2, 0);
	mainLayout->addWidget(CodeLineEdit, 2, 1);
	mainLayout->addWidget(MoviTelLabel, 3, 0);
	mainLayout->addWidget(MoviTelLineEdit, 3, 1);
	mainLayout->addWidget(MoviTelCheckBox, 3, 2);
	mainLayout->addWidget(ProTelLabel, 4, 0);
	mainLayout->addWidget(ProTelLineEdit, 4, 1);
	mainLayout->setSizeConstraint(QLayout::SetFixedSize);
}

