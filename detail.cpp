#include "detail.h"

Detail::Detail(QWidget *parent)
	: QWidget(parent)
{
	NationalLabel = new QLabel(QStringLiteral("����/��ַ��"));
	NationalComboBox = new QComboBox(this);
	NationalComboBox->insertItem(0, QStringLiteral("�й�"));
	NationalComboBox->insertItem(1, QStringLiteral("����"));
	NationalComboBox->insertItem(2, QStringLiteral("Ӣ��"));
	ProvinceLabel = new QLabel(QStringLiteral("ʡ�ݣ�"));
	ProvinceComboBox = new QComboBox(this);
	ProvinceComboBox->insertItem(0, QStringLiteral("����ʡ"));
	ProvinceComboBox->insertItem(1, QStringLiteral("ɽ��ʡ"));
	ProvinceComboBox->insertItem(2, QStringLiteral("�㶫ʡ"));
	CityLabel = new QLabel(QStringLiteral("���У�"));
	CityLineEdit = new QLineEdit;
	IntroductLabel = new QLabel(QStringLiteral("����˵����"));
	IntroductTextEdit = new QTextEdit;
	mainLayout = new QGridLayout(this);
	mainLayout->setMargin(15);
	mainLayout->setSpacing(10);
	mainLayout->addWidget(NationalLabel, 0, 0);
	mainLayout->addWidget(NationalComboBox, 0, 1);
	mainLayout->addWidget(ProvinceLabel, 1, 0);
	mainLayout->addWidget(ProvinceComboBox, 1, 1);
	mainLayout->addWidget(CityLabel, 2, 0);
	mainLayout->addWidget(CityLineEdit, 2, 1);
	mainLayout->addWidget(IntroductLabel, 3, 0);
	mainLayout->addWidget(IntroductTextEdit, 3, 1);
}
