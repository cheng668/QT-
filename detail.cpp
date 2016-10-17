#include "detail.h"

Detail::Detail(QWidget *parent)
	: QWidget(parent)
{
	NationalLabel = new QLabel(tr("����/��ַ��"));
	NationalComboBox = new QComboBox(this);
	NationalComboBox->insertItem(0, tr("�й�"));
	NationalComboBox->insertItem(1, tr("����"));
	NationalComboBox->insertItem(2, tr("Ӣ��"));
	ProvinceLabel = new QLabel(tr("ʡ�ݣ�"));
	ProvinceComboBox = new QComboBox(this);
	ProvinceComboBox->insertItem(0, tr("����ʡ"));
	ProvinceComboBox->insertItem(1, tr("ɽ��ʡ"));
	ProvinceComboBox->insertItem(2, tr("�㶫ʡ"));
	CityLabel = new QLabel(tr("���У�"));
	CityLineEdit = new QLineEdit;
	IntroductLabel = new QLabel(tr("����˵����"));
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