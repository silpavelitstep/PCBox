#pragma once
#include <cctype>
#include "pcbox.h"

namespace PCBox {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ PCBox;
	private: System::Windows::Forms::GroupBox^ motherBoard;

	protected:


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ addNewUnit;
	private: System::Windows::Forms::GroupBox^ setInfo;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ power;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ SATAUnits;

	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ freeNewMaketToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ addToToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^ setType;



	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ siInfo;

	private: System::Windows::Forms::TextBox^ siName;

	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::GroupBox^ setPower;
	private: System::Windows::Forms::TextBox^ poPower;


	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::GroupBox^ setSoket;
	private: System::Windows::Forms::TextBox^ soSoket;


	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::GroupBox^ setRAMInfo;




	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ RAMVolume;

	private: System::Windows::Forms::Label^ riMaxVolumeHead;
	private: System::Windows::Forms::TextBox^ topFreq;


	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ downFreq;

	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::GroupBox^ setDrive;
	private: System::Windows::Forms::TextBox^ drVolume;


	private: System::Windows::Forms::ComboBox^ setDriveType;

	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::GroupBox^ setMaxRAMUnitCount;
	private: System::Windows::Forms::TextBox^ RAMCount;


	private: System::Windows::Forms::Label^ label18;
private: System::Windows::Forms::ComboBox^ ddrType;
	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->PCBox = (gcnew System::Windows::Forms::GroupBox());
			this->SATAUnits = (gcnew System::Windows::Forms::GroupBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->power = (gcnew System::Windows::Forms::Label());
			this->motherBoard = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->addNewUnit = (gcnew System::Windows::Forms::GroupBox());
			this->setDrive = (gcnew System::Windows::Forms::GroupBox());
			this->drVolume = (gcnew System::Windows::Forms::TextBox());
			this->setDriveType = (gcnew System::Windows::Forms::ComboBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->setRAMInfo = (gcnew System::Windows::Forms::GroupBox());
			this->ddrType = (gcnew System::Windows::Forms::ComboBox());
			this->setMaxRAMUnitCount = (gcnew System::Windows::Forms::GroupBox());
			this->RAMCount = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->RAMVolume = (gcnew System::Windows::Forms::TextBox());
			this->riMaxVolumeHead = (gcnew System::Windows::Forms::Label());
			this->topFreq = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->downFreq = (gcnew System::Windows::Forms::TextBox());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->setSoket = (gcnew System::Windows::Forms::GroupBox());
			this->soSoket = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->setPower = (gcnew System::Windows::Forms::GroupBox());
			this->poPower = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->setType = (gcnew System::Windows::Forms::ComboBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->setInfo = (gcnew System::Windows::Forms::GroupBox());
			this->siInfo = (gcnew System::Windows::Forms::TextBox());
			this->siName = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->freeNewMaketToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addToToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->PCBox->SuspendLayout();
			this->SATAUnits->SuspendLayout();
			this->motherBoard->SuspendLayout();
			this->addNewUnit->SuspendLayout();
			this->setDrive->SuspendLayout();
			this->setRAMInfo->SuspendLayout();
			this->setMaxRAMUnitCount->SuspendLayout();
			this->setSoket->SuspendLayout();
			this->setPower->SuspendLayout();
			this->setInfo->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// PCBox
			// 
			this->PCBox->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->PCBox->Controls->Add(this->SATAUnits);
			this->PCBox->Controls->Add(this->power);
			this->PCBox->Controls->Add(this->motherBoard);
			this->PCBox->Location = System::Drawing::Point(12, 27);
			this->PCBox->Name = L"PCBox";
			this->PCBox->Size = System::Drawing::Size(450, 477);
			this->PCBox->TabIndex = 0;
			this->PCBox->TabStop = false;
			this->PCBox->Text = L"PCBox";
			this->PCBox->Visible = false;
			// 
			// SATAUnits
			// 
			this->SATAUnits->Controls->Add(this->label8);
			this->SATAUnits->Controls->Add(this->label11);
			this->SATAUnits->Controls->Add(this->label9);
			this->SATAUnits->Controls->Add(this->label10);
			this->SATAUnits->Location = System::Drawing::Point(327, 108);
			this->SATAUnits->Name = L"SATAUnits";
			this->SATAUnits->Size = System::Drawing::Size(117, 282);
			this->SATAUnits->TabIndex = 6;
			this->SATAUnits->TabStop = false;
			this->SATAUnits->Text = L"SATAUnits";
			// 
			// label8
			// 
			this->label8->BackColor = System::Drawing::Color::Coral;
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->Location = System::Drawing::Point(6, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(104, 35);
			this->label8->TabIndex = 2;
			this->label8->Text = L"SATA";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Yellow;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label11->Location = System::Drawing::Point(6, 223);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 35);
			this->label11->TabIndex = 5;
			this->label11->Text = L"SATA";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label9
			// 
			this->label9->BackColor = System::Drawing::Color::Yellow;
			this->label9->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label9->Location = System::Drawing::Point(6, 93);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(104, 35);
			this->label9->TabIndex = 3;
			this->label9->Text = L"SATA";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label10
			// 
			this->label10->BackColor = System::Drawing::Color::Yellow;
			this->label10->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label10->Location = System::Drawing::Point(6, 157);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(104, 35);
			this->label10->TabIndex = 4;
			this->label10->Text = L"SATA";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// power
			// 
			this->power->BackColor = System::Drawing::Color::Red;
			this->power->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->power->Location = System::Drawing::Point(24, 23);
			this->power->Name = L"power";
			this->power->Size = System::Drawing::Size(111, 63);
			this->power->TabIndex = 1;
			this->power->Text = L"Power";
			this->power->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// motherBoard
			// 
			this->motherBoard->BackColor = System::Drawing::Color::Coral;
			this->motherBoard->Controls->Add(this->label6);
			this->motherBoard->Controls->Add(this->label5);
			this->motherBoard->Controls->Add(this->label4);
			this->motherBoard->Controls->Add(this->label3);
			this->motherBoard->Controls->Add(this->label2);
			this->motherBoard->Controls->Add(this->label1);
			this->motherBoard->Location = System::Drawing::Point(24, 108);
			this->motherBoard->Name = L"motherBoard";
			this->motherBoard->Size = System::Drawing::Size(281, 282);
			this->motherBoard->TabIndex = 0;
			this->motherBoard->TabStop = false;
			this->motherBoard->Text = L"MotherBoard";
			// 
			// label6
			// 
			this->label6->BackColor = System::Drawing::Color::Gold;
			this->label6->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label6->Location = System::Drawing::Point(163, 43);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(17, 105);
			this->label6->TabIndex = 5;
			this->label6->Text = L"RAM";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label5
			// 
			this->label5->BackColor = System::Drawing::Color::Gold;
			this->label5->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label5->Location = System::Drawing::Point(140, 43);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(17, 105);
			this->label5->TabIndex = 4;
			this->label5->Text = L"RAM";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label4
			// 
			this->label4->BackColor = System::Drawing::Color::Gold;
			this->label4->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label4->Location = System::Drawing::Point(117, 43);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(17, 105);
			this->label4->TabIndex = 3;
			this->label4->Text = L"RAM";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Red;
			this->label3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label3->Location = System::Drawing::Point(94, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 105);
			this->label3->TabIndex = 2;
			this->label3->Text = L"RAM";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Gold;
			this->label2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label2->Location = System::Drawing::Point(21, 184);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(127, 18);
			this->label2->TabIndex = 1;
			this->label2->Text = L"GPU";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Red;
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->Location = System::Drawing::Point(21, 43);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(46, 45);
			this->label1->TabIndex = 0;
			this->label1->Text = L"CPU";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// addNewUnit
			// 
			this->addNewUnit->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->addNewUnit->Controls->Add(this->setDrive);
			this->addNewUnit->Controls->Add(this->setRAMInfo);
			this->addNewUnit->Controls->Add(this->setSoket);
			this->addNewUnit->Controls->Add(this->setPower);
			this->addNewUnit->Controls->Add(this->setType);
			this->addNewUnit->Controls->Add(this->label7);
			this->addNewUnit->Controls->Add(this->button1);
			this->addNewUnit->Controls->Add(this->setInfo);
			this->addNewUnit->Location = System::Drawing::Point(529, 24);
			this->addNewUnit->Name = L"addNewUnit";
			this->addNewUnit->Size = System::Drawing::Size(603, 480);
			this->addNewUnit->TabIndex = 1;
			this->addNewUnit->TabStop = false;
			this->addNewUnit->Text = L"Add new unit";
			this->addNewUnit->Visible = false;
			// 
			// setDrive
			// 
			this->setDrive->Controls->Add(this->drVolume);
			this->setDrive->Controls->Add(this->setDriveType);
			this->setDrive->Controls->Add(this->label21);
			this->setDrive->Controls->Add(this->label20);
			this->setDrive->Location = System::Drawing::Point(309, 270);
			this->setDrive->Name = L"setDrive";
			this->setDrive->Size = System::Drawing::Size(272, 139);
			this->setDrive->TabIndex = 8;
			this->setDrive->TabStop = false;
			this->setDrive->Text = L"Drive";
			this->setDrive->Visible = false;
			this->setDrive->VisibleChanged += gcnew System::EventHandler(this, &MyForm::SetDrive_VisibleChanged);
			// 
			// drVolume
			// 
			this->drVolume->Location = System::Drawing::Point(15, 105);
			this->drVolume->Name = L"drVolume";
			this->drVolume->Size = System::Drawing::Size(121, 22);
			this->drVolume->TabIndex = 12;
			this->drVolume->Text = L"drVolume";
			this->drVolume->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::DrVolume_KeyPress);
			// 
			// setDriveType
			// 
			this->setDriveType->FormattingEnabled = true;
			this->setDriveType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"CD/DVD ROM", L"HDD/SSD" });
			this->setDriveType->Location = System::Drawing::Point(15, 51);
			this->setDriveType->Name = L"setDriveType";
			this->setDriveType->Size = System::Drawing::Size(121, 24);
			this->setDriveType->Sorted = true;
			this->setDriveType->TabIndex = 11;
			this->setDriveType->Text = L"setDriveType";
			this->setDriveType->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::SetDriveType_SelectedIndexChanged);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label21->Location = System::Drawing::Point(16, 81);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(93, 17);
			this->label21->TabIndex = 10;
			this->label21->Text = L"Volume (MB):";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label20->Location = System::Drawing::Point(18, 28);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(152, 17);
			this->label20->TabIndex = 4;
			this->label20->Text = L"Type(HDD/SSD/ROM):";
			// 
			// setRAMInfo
			// 
			this->setRAMInfo->Controls->Add(this->ddrType);
			this->setRAMInfo->Controls->Add(this->setMaxRAMUnitCount);
			this->setRAMInfo->Controls->Add(this->label19);
			this->setRAMInfo->Controls->Add(this->RAMVolume);
			this->setRAMInfo->Controls->Add(this->riMaxVolumeHead);
			this->setRAMInfo->Controls->Add(this->topFreq);
			this->setRAMInfo->Controls->Add(this->label17);
			this->setRAMInfo->Controls->Add(this->downFreq);
			this->setRAMInfo->Controls->Add(this->label16);
			this->setRAMInfo->Location = System::Drawing::Point(24, 173);
			this->setRAMInfo->Name = L"setRAMInfo";
			this->setRAMInfo->Size = System::Drawing::Size(279, 236);
			this->setRAMInfo->TabIndex = 7;
			this->setRAMInfo->TabStop = false;
			this->setRAMInfo->Text = L"RAM info";
			this->setRAMInfo->Visible = false;
			this->setRAMInfo->VisibleChanged += gcnew System::EventHandler(this, &MyForm::SetRAMInfo_VisibleChanged);
			// 
			// ddrType
			// 
			this->ddrType->FormattingEnabled = true;
			this->ddrType->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"DDR3", L"DDR4" });
			this->ddrType->Location = System::Drawing::Point(190, 131);
			this->ddrType->Name = L"ddrType";
			this->ddrType->Size = System::Drawing::Size(83, 24);
			this->ddrType->Sorted = true;
			this->ddrType->TabIndex = 14;
			this->ddrType->Text = L"ddrType";
			// 
			// setMaxRAMUnitCount
			// 
			this->setMaxRAMUnitCount->Controls->Add(this->RAMCount);
			this->setMaxRAMUnitCount->Controls->Add(this->label18);
			this->setMaxRAMUnitCount->Location = System::Drawing::Point(21, 161);
			this->setMaxRAMUnitCount->Name = L"setMaxRAMUnitCount";
			this->setMaxRAMUnitCount->Size = System::Drawing::Size(252, 59);
			this->setMaxRAMUnitCount->TabIndex = 13;
			this->setMaxRAMUnitCount->TabStop = false;
			this->setMaxRAMUnitCount->Text = L"Max RAM Unit Count";
			this->setMaxRAMUnitCount->Visible = false;
			this->setMaxRAMUnitCount->VisibleChanged += gcnew System::EventHandler(this, &MyForm::SetMaxRAMUnitCount_VisibleChanged);
			// 
			// RAMCount
			// 
			this->RAMCount->Location = System::Drawing::Point(125, 23);
			this->RAMCount->Name = L"RAMCount";
			this->RAMCount->Size = System::Drawing::Size(88, 22);
			this->RAMCount->TabIndex = 6;
			this->RAMCount->Text = L"RAMCount";
			this->RAMCount->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::RAMCount_KeyPress);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label18->Location = System::Drawing::Point(70, 26);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(49, 17);
			this->label18->TabIndex = 4;
			this->label18->Text = L"Count:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label19->Location = System::Drawing::Point(32, 132);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(142, 17);
			this->label19->TabIndex = 11;
			this->label19->Text = L"Type (DDR3, DDR4):";
			// 
			// RAMVolume
			// 
			this->RAMVolume->Location = System::Drawing::Point(190, 92);
			this->RAMVolume->Name = L"RAMVolume";
			this->RAMVolume->Size = System::Drawing::Size(83, 22);
			this->RAMVolume->TabIndex = 10;
			this->RAMVolume->Text = L"RAMVolume";
			this->RAMVolume->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::RAMVolume_KeyPress);
			// 
			// riMaxVolumeHead
			// 
			this->riMaxVolumeHead->AutoSize = true;
			this->riMaxVolumeHead->BackColor = System::Drawing::SystemColors::ControlLight;
			this->riMaxVolumeHead->Location = System::Drawing::Point(54, 97);
			this->riMaxVolumeHead->Name = L"riMaxVolumeHead";
			this->riMaxVolumeHead->Size = System::Drawing::Size(120, 17);
			this->riMaxVolumeHead->TabIndex = 9;
			this->riMaxVolumeHead->Text = L"Max volume (GB):";
			// 
			// topFreq
			// 
			this->topFreq->Location = System::Drawing::Point(190, 59);
			this->topFreq->Name = L"topFreq";
			this->topFreq->Size = System::Drawing::Size(83, 22);
			this->topFreq->TabIndex = 8;
			this->topFreq->Text = L"topFreq";
			this->topFreq->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::TopFreq_KeyPress);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label17->Location = System::Drawing::Point(28, 64);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(146, 17);
			this->label17->TabIndex = 7;
			this->label17->Text = L"Top frequency (MHz):";
			// 
			// downFreq
			// 
			this->downFreq->Location = System::Drawing::Point(190, 25);
			this->downFreq->Name = L"downFreq";
			this->downFreq->Size = System::Drawing::Size(83, 22);
			this->downFreq->TabIndex = 6;
			this->downFreq->Text = L"downFreq";
			this->downFreq->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::DownFreq_KeyPress);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label16->Location = System::Drawing::Point(18, 30);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(156, 17);
			this->label16->TabIndex = 4;
			this->label16->Text = L"Down frequency (MHz):";
			// 
			// setSoket
			// 
			this->setSoket->Controls->Add(this->soSoket);
			this->setSoket->Controls->Add(this->label14);
			this->setSoket->Location = System::Drawing::Point(309, 176);
			this->setSoket->Name = L"setSoket";
			this->setSoket->Size = System::Drawing::Size(126, 86);
			this->setSoket->TabIndex = 6;
			this->setSoket->TabStop = false;
			this->setSoket->Text = L"Soket";
			this->setSoket->Visible = false;
			this->setSoket->VisibleChanged += gcnew System::EventHandler(this, &MyForm::SetSoket_VisibleChanged);
			// 
			// soSoket
			// 
			this->soSoket->Location = System::Drawing::Point(16, 48);
			this->soSoket->Name = L"soSoket";
			this->soSoket->Size = System::Drawing::Size(66, 22);
			this->soSoket->TabIndex = 6;
			this->soSoket->Text = L"soSoket";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label14->Location = System::Drawing::Point(18, 28);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(48, 17);
			this->label14->TabIndex = 4;
			this->label14->Text = L"Soket:";
			// 
			// setPower
			// 
			this->setPower->Controls->Add(this->poPower);
			this->setPower->Controls->Add(this->label15);
			this->setPower->Location = System::Drawing::Point(455, 176);
			this->setPower->Name = L"setPower";
			this->setPower->Size = System::Drawing::Size(126, 86);
			this->setPower->TabIndex = 5;
			this->setPower->TabStop = false;
			this->setPower->Text = L"Power";
			this->setPower->Visible = false;
			this->setPower->VisibleChanged += gcnew System::EventHandler(this, &MyForm::SetPower_VisibleChanged);
			// 
			// poPower
			// 
			this->poPower->Location = System::Drawing::Point(17, 48);
			this->poPower->Name = L"poPower";
			this->poPower->Size = System::Drawing::Size(66, 22);
			this->poPower->TabIndex = 6;
			this->poPower->Text = L"poPower";
			this->poPower->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::PoPower_KeyPress);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label15->Location = System::Drawing::Point(18, 28);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(94, 17);
			this->label15->TabIndex = 4;
			this->label15->Text = L"Power (Watt):";
			// 
			// setType
			// 
			this->setType->FormattingEnabled = true;
			this->setType->Items->AddRange(gcnew cli::array< System::Object^  >(6) {
				L"CPU", L"GPU", L"MotherBoard", L"Power", L"RAM",
					L"SSD/HDD/ROM"
			});
			this->setType->Location = System::Drawing::Point(137, 36);
			this->setType->Name = L"setType";
			this->setType->Size = System::Drawing::Size(121, 24);
			this->setType->Sorted = true;
			this->setType->TabIndex = 4;
			this->setType->Text = L"setType";
			this->setType->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::ComboBox1_SelectedIndexChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label7->Location = System::Drawing::Point(21, 36);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(109, 17);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Select unit type:";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(446, 21);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 39);
			this->button1->TabIndex = 1;
			this->button1->Text = L"ADD";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// setInfo
			// 
			this->setInfo->Controls->Add(this->siInfo);
			this->setInfo->Controls->Add(this->siName);
			this->setInfo->Controls->Add(this->label13);
			this->setInfo->Controls->Add(this->label12);
			this->setInfo->Location = System::Drawing::Point(24, 66);
			this->setInfo->Name = L"setInfo";
			this->setInfo->Size = System::Drawing::Size(557, 94);
			this->setInfo->TabIndex = 2;
			this->setInfo->TabStop = false;
			this->setInfo->Text = L"Main Info";
			this->setInfo->Visible = false;
			this->setInfo->VisibleChanged += gcnew System::EventHandler(this, &MyForm::SetInfo_VisibleChanged);
			// 
			// siInfo
			// 
			this->siInfo->Location = System::Drawing::Point(122, 56);
			this->siInfo->Name = L"siInfo";
			this->siInfo->Size = System::Drawing::Size(341, 22);
			this->siInfo->TabIndex = 7;
			this->siInfo->Text = L"siInfo";
			// 
			// siName
			// 
			this->siName->Location = System::Drawing::Point(122, 23);
			this->siName->Name = L"siName";
			this->siName->Size = System::Drawing::Size(341, 22);
			this->siName->TabIndex = 6;
			this->siName->Text = L"siName";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label13->Location = System::Drawing::Point(18, 61);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(90, 17);
			this->label13->TabIndex = 5;
			this->label13->Text = L"Addition info:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::SystemColors::ControlLight;
			this->label12->Location = System::Drawing::Point(58, 27);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 17);
			this->label12->TabIndex = 4;
			this->label12->Text = L"Name:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->newToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1209, 28);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->freeNewMaketToolStripMenuItem,
					this->addToToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(46, 24);
			this->toolStripMenuItem1->Text = L"File";
			// 
			// freeNewMaketToolStripMenuItem
			// 
			this->freeNewMaketToolStripMenuItem->Name = L"freeNewMaketToolStripMenuItem";
			this->freeNewMaketToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->freeNewMaketToolStripMenuItem->Text = L"Free/New maket";
			this->freeNewMaketToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::FreeNewMaketToolStripMenuItem_Click);
			// 
			// addToToolStripMenuItem
			// 
			this->addToToolStripMenuItem->Name = L"addToToolStripMenuItem";
			this->addToToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->addToToolStripMenuItem->Text = L"Add to";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(201, 26);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ExitToolStripMenuItem_Click);
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(82, 24);
			this->newToolStripMenuItem->Text = L"New unit";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::NewToolStripMenuItem_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->ClientSize = System::Drawing::Size(1209, 594);
			this->Controls->Add(this->addNewUnit);
			this->Controls->Add(this->PCBox);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->PCBox->ResumeLayout(false);
			this->SATAUnits->ResumeLayout(false);
			this->motherBoard->ResumeLayout(false);
			this->addNewUnit->ResumeLayout(false);
			this->addNewUnit->PerformLayout();
			this->setDrive->ResumeLayout(false);
			this->setDrive->PerformLayout();
			this->setRAMInfo->ResumeLayout(false);
			this->setRAMInfo->PerformLayout();
			this->setMaxRAMUnitCount->ResumeLayout(false);
			this->setMaxRAMUnitCount->PerformLayout();
			this->setSoket->ResumeLayout(false);
			this->setSoket->PerformLayout();
			this->setPower->ResumeLayout(false);
			this->setPower->PerformLayout();
			this->setInfo->ResumeLayout(false);
			this->setInfo->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

	private: System::Void FreeNewMaketToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		PCBox->Visible = true;
		motherBoard->BackColor = Color::Coral;
		SATAUnits->Visible = false;
		power->BackColor = Color::Coral;
	}
	private: System::Void ExitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->~MyForm();
	}
	private: System::Void NewToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		addNewUnit->Visible = true;
		setType->Text = "Select...";

	}
	private: System::Void ComboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		//...init
		setRAMInfo->Visible = false;
		setSoket->Visible = false;
		setPower->Visible = false;
		setDrive->Visible = false;
		setInfo->Visible = false;
		setMaxRAMUnitCount->Visible = false;
		//...
		//main info
		setInfo->Visible = true;
		//MotherBoard & CPU & RAM
		if (setType->SelectedItem == "MotherBoard" || setType->SelectedItem == "CPU" || setType->SelectedItem == "RAM") {
			setRAMInfo->Visible = true;
			if (setType->SelectedItem == "RAM")
				riMaxVolumeHead->Text = "Volume (GB):";
			else {
				riMaxVolumeHead->Text = "Max Volume (GB):";
				setSoket->Visible = true;
			}
			if (setType->SelectedItem == "MotherBoard")
				setMaxRAMUnitCount->Visible = true;
		}
		if (setType->SelectedItem == "SSD/HDD/ROM")
			setDrive->Visible = true;
		
		if (setType->SelectedItem == "Power")
			setPower->Visible = true;
		

	}
	private: System::Void SetInfo_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		siName->Text = "";
		siInfo->Text = "";
	}
	private: System::Void SetRAMInfo_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		downFreq->Text = "";
		topFreq->Text = "";
		RAMVolume->Text = "";
		ddrType->Text = "select...";
	}
	private: System::Void SetMaxRAMUnitCount_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		RAMCount->Text = "";
	}
	private: System::Void SetSoket_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		soSoket->Text = "";
	}
	private: System::Void SetPower_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		poPower->Text = "";
	}
	private: System::Void SetDrive_VisibleChanged(System::Object^ sender, System::EventArgs^ e) {
		setDriveType->Text = "Select...";
		drVolume->Text = "";
	}
	private: System::Void SetDriveType_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		drVolume->Enabled = setDriveType->SelectedItem == "HDD/SSD";
		drVolume->Text = "";
	}
	private: System::Void DownFreq_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9')
			e->Handled = true;
	}
	private: System::Void TopFreq_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9')
			e->Handled = true;
	}
	private: System::Void RAMVolume_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9')
			e->Handled = true;
	}
	private: System::Void RAMCount_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '1' || e->KeyChar > '4')
			e->Handled = true;
	}
	private: System::Void PoPower_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9')
			e->Handled = true;
	}
	private: System::Void DrVolume_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar < '0' || e->KeyChar > '9')
			e->Handled = true;
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (setType->SelectedItem =="CPU") {
			CPU cpu;
			

		}
	}
};
}
