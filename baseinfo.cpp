#include "baseinfo.h"

BaseInfo::BaseInfo(QWidget *parent) :
    QWidget(parent)
{
	QWidget *mainwidget = new QWidget(this);
	UserNameLabel = new QLabel(QStringLiteral("用户名："));
	UserNameLineEdit = new QLineEdit(this);
	NameLabel = new QLabel(QStringLiteral("姓名："));
	NameLineEdit = new QLineEdit(this);
	SexLabel = new QLabel(QStringLiteral("性别："));
	SexComboBox = new QComboBox(this);
	SexComboBox->addItem(QStringLiteral("女"));
	SexComboBox->addItem(QStringLiteral("男"));
	DepartmentLabel = new QLabel(QStringLiteral("部门："));
	DepartmentTextEdit = new QTextEdit(this);
	AgeLabel = new QLabel(QStringLiteral("年龄："));
	AgeLineEdit = new QLineEdit(this);
	OtherLabel = new QLabel(QStringLiteral("备注："));
	OtherLabel->setFrameStyle(QFrame::Panel | QFrame::Sunken);
	LeftLayout = new QGridLayout();
	LeftLayout->addWidget(UserNameLabel, 0, 0);
	LeftLayout->addWidget(UserNameLineEdit, 0, 1);
	LeftLayout->addWidget(NameLabel, 1, 0);
	LeftLayout->addWidget(NameLineEdit, 1, 1);
	LeftLayout->addWidget(SexLabel, 2, 0);
	LeftLayout->addWidget(SexComboBox, 2, 1);
	LeftLayout->addWidget(DepartmentLabel, 3, 0);
	LeftLayout->addWidget(DepartmentTextEdit, 3, 1);
	LeftLayout->addWidget(AgeLabel, 4, 0);
	LeftLayout->addWidget(AgeLineEdit, 4, 1);
	LeftLayout->addWidget(OtherLabel, 5, 0, 1, 2);
	LeftLayout->setColumnStretch(0, 1);
	LeftLayout->setColumnStretch(1, 3);
	//右侧
	HeadLabel = new QLabel(QStringLiteral("头像："));
	HeadIconLabel = new QLabel(this);
	QPixmap icon("312.png");
	HeadIconLabel->setPixmap(icon);
	HeadIconLabel->resize(icon.width(), icon.height());
	UpdateHeadBtn = new QPushButton(QStringLiteral("更新"));
	TopRigheLaout = new QHBoxLayout();
	TopRigheLaout->setSpacing(20);
	TopRigheLaout->addWidget(HeadLabel);
	TopRigheLaout->addWidget(HeadIconLabel);
	TopRigheLaout->addWidget(UpdateHeadBtn);
	IntroductionLabel = new QLabel(QStringLiteral("个人说明："));
	IntroductionTextEdit = new QTextEdit(this);
	RightLayout = new QVBoxLayout();
	RightLayout->setMargin(10);
	RightLayout->addLayout(TopRigheLaout);
	RightLayout->addWidget(IntroductionLabel);
	RightLayout->addWidget(IntroductionTextEdit);
	//TopRigheLaout->setParent(RightLayout);

	mainLayout = new QGridLayout(mainwidget);
	mainLayout->setMargin(15);
	mainLayout->setSpacing(10);
	mainLayout->addLayout(LeftLayout, 0, 0);
	mainLayout->addLayout(RightLayout, 0, 1);
	mainLayout->setSizeConstraint(QLayout::SetFixedSize);
	//LeftLayout->setParent();
	setLayout(mainLayout);
}
