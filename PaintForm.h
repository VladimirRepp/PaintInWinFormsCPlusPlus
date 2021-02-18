#pragma once

namespace PaintinWinFormsC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Сводка для PaintForm
	/// </summary>
	public ref class PaintForm : public System::Windows::Forms::Form
	{
	public:
		PaintForm(void);
		

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~PaintForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ действияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ создатьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сохранитьКакToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^ панельЭлементовToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBoxToolbar;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownSize;
	private: System::Windows::Forms::Button^ buttonActiveTexture;
	private: System::Windows::Forms::Button^ buttonActiveCircle;
	private: System::Windows::Forms::Button^ buttonActiveSquare;
	private: System::Windows::Forms::Button^ buttonActiveLine;
	private: System::Windows::Forms::Button^ buttonApplySize;
	private: System::Windows::Forms::Button^ buttonClearCanvas;
	private: System::Windows::Forms::Button^ buttonColor;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::GroupBox^ groupBoxSettingsSquare;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightSquare;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthSquare;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::GroupBox^ groupBoxSettingsCircle;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightCircle;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidthCircle;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::GroupBox^ groupBoxSettingsTexture;


	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightTexture;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownWidtnTexture;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBoxCreateProject;
	private: System::Windows::Forms::Button^ buttonOpenProject;
	private: System::Windows::Forms::Button^ buttonCreateNewProject;
	private: System::Windows::Forms::NumericUpDown^ numericUpDownHeightForm;

	private: System::Windows::Forms::NumericUpDown^ numericUpDownWigtnForm;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::RadioButton^ radioButtonSetSize;
	private: System::Windows::Forms::RadioButton^ radioButtonOriginalSize;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ buttonApplyTexture;

	private: System::Windows::Forms::Button^ buttonChooseTexture;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->действияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->создатьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сохранитьКакToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->панельЭлементовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBoxToolbar = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownSize = (gcnew System::Windows::Forms::NumericUpDown());
			this->buttonActiveTexture = (gcnew System::Windows::Forms::Button());
			this->buttonActiveCircle = (gcnew System::Windows::Forms::Button());
			this->buttonActiveSquare = (gcnew System::Windows::Forms::Button());
			this->buttonActiveLine = (gcnew System::Windows::Forms::Button());
			this->buttonApplySize = (gcnew System::Windows::Forms::Button());
			this->buttonClearCanvas = (gcnew System::Windows::Forms::Button());
			this->buttonColor = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettingsSquare = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownHeightSquare = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWidthSquare = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettingsCircle = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDownHeightCircle = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWidthCircle = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettingsTexture = (gcnew System::Windows::Forms::GroupBox());
			this->buttonApplyTexture = (gcnew System::Windows::Forms::Button());
			this->buttonChooseTexture = (gcnew System::Windows::Forms::Button());
			this->numericUpDownHeightTexture = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWidtnTexture = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBoxCreateProject = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonSetSize = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonOriginalSize = (gcnew System::Windows::Forms::RadioButton());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->buttonOpenProject = (gcnew System::Windows::Forms::Button());
			this->buttonCreateNewProject = (gcnew System::Windows::Forms::Button());
			this->numericUpDownHeightForm = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownWigtnForm = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBoxToolbar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSize))->BeginInit();
			this->groupBoxSettingsSquare->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightSquare))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthSquare))->BeginInit();
			this->groupBoxSettingsCircle->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightCircle))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthCircle))->BeginInit();
			this->groupBoxSettingsTexture->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightTexture))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidtnTexture))->BeginInit();
			this->groupBoxCreateProject->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightForm))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWigtnForm))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->действияToolStripMenuItem,
					this->оПрограммеToolStripMenuItem, this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(826, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// действияToolStripMenuItem
			// 
			this->действияToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->создатьToolStripMenuItem,
					this->сохранитьКакToolStripMenuItem, this->панельЭлементовToolStripMenuItem
			});
			this->действияToolStripMenuItem->Name = L"действияToolStripMenuItem";
			this->действияToolStripMenuItem->Size = System::Drawing::Size(70, 20);
			this->действияToolStripMenuItem->Text = L"Действия";
			// 
			// создатьToolStripMenuItem
			// 
			this->создатьToolStripMenuItem->Name = L"создатьToolStripMenuItem";
			this->создатьToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->создатьToolStripMenuItem->Text = L"Создать";
			this->создатьToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::создатьToolStripMenuItem_Click);
			// 
			// сохранитьКакToolStripMenuItem
			// 
			this->сохранитьКакToolStripMenuItem->Name = L"сохранитьКакToolStripMenuItem";
			this->сохранитьКакToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->сохранитьКакToolStripMenuItem->Text = L"Сохранить как ";
			this->сохранитьКакToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::сохранитьКакToolStripMenuItem_Click);
			// 
			// панельЭлементовToolStripMenuItem
			// 
			this->панельЭлементовToolStripMenuItem->Name = L"панельЭлементовToolStripMenuItem";
			this->панельЭлементовToolStripMenuItem->Size = System::Drawing::Size(177, 22);
			this->панельЭлементовToolStripMenuItem->Text = L"Панель элементов";
			this->панельЭлементовToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::панельЭлементовToolStripMenuItem_Click);
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::оПрограммеToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &PaintForm::выходToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 24);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(826, 395);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->SizeChanged += gcnew System::EventHandler(this, &PaintForm::pictureBox1_SizeChanged);
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &PaintForm::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &PaintForm::pictureBox1_MouseUp);
			// 
			// groupBoxToolbar
			// 
			this->groupBoxToolbar->Controls->Add(this->numericUpDownSize);
			this->groupBoxToolbar->Controls->Add(this->buttonActiveTexture);
			this->groupBoxToolbar->Controls->Add(this->buttonActiveCircle);
			this->groupBoxToolbar->Controls->Add(this->buttonActiveSquare);
			this->groupBoxToolbar->Controls->Add(this->buttonActiveLine);
			this->groupBoxToolbar->Controls->Add(this->buttonApplySize);
			this->groupBoxToolbar->Controls->Add(this->buttonClearCanvas);
			this->groupBoxToolbar->Controls->Add(this->buttonColor);
			this->groupBoxToolbar->Controls->Add(this->label2);
			this->groupBoxToolbar->Controls->Add(this->label1);
			this->groupBoxToolbar->Location = System::Drawing::Point(12, 37);
			this->groupBoxToolbar->Name = L"groupBoxToolbar";
			this->groupBoxToolbar->Size = System::Drawing::Size(497, 129);
			this->groupBoxToolbar->TabIndex = 2;
			this->groupBoxToolbar->TabStop = false;
			this->groupBoxToolbar->Text = L"Панель элементов";
			this->groupBoxToolbar->Visible = false;
			// 
			// numericUpDownSize
			// 
			this->numericUpDownSize->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->numericUpDownSize->Location = System::Drawing::Point(175, 82);
			this->numericUpDownSize->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownSize->Name = L"numericUpDownSize";
			this->numericUpDownSize->Size = System::Drawing::Size(71, 26);
			this->numericUpDownSize->TabIndex = 9;
			this->numericUpDownSize->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// buttonActiveTexture
			// 
			this->buttonActiveTexture->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonActiveTexture->Location = System::Drawing::Point(381, 82);
			this->buttonActiveTexture->Name = L"buttonActiveTexture";
			this->buttonActiveTexture->Size = System::Drawing::Size(98, 29);
			this->buttonActiveTexture->TabIndex = 8;
			this->buttonActiveTexture->Text = L"Текстура";
			this->buttonActiveTexture->UseVisualStyleBackColor = true;
			this->buttonActiveTexture->Click += gcnew System::EventHandler(this, &PaintForm::buttonActiveTexture_Click);
			// 
			// buttonActiveCircle
			// 
			this->buttonActiveCircle->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonActiveCircle->Location = System::Drawing::Point(277, 82);
			this->buttonActiveCircle->Name = L"buttonActiveCircle";
			this->buttonActiveCircle->Size = System::Drawing::Size(98, 29);
			this->buttonActiveCircle->TabIndex = 7;
			this->buttonActiveCircle->Text = L"Круг";
			this->buttonActiveCircle->UseVisualStyleBackColor = true;
			this->buttonActiveCircle->Click += gcnew System::EventHandler(this, &PaintForm::buttonActiveCircle_Click);
			// 
			// buttonActiveSquare
			// 
			this->buttonActiveSquare->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonActiveSquare->Location = System::Drawing::Point(381, 47);
			this->buttonActiveSquare->Name = L"buttonActiveSquare";
			this->buttonActiveSquare->Size = System::Drawing::Size(98, 29);
			this->buttonActiveSquare->TabIndex = 6;
			this->buttonActiveSquare->Text = L"Квадрат";
			this->buttonActiveSquare->UseVisualStyleBackColor = true;
			this->buttonActiveSquare->Click += gcnew System::EventHandler(this, &PaintForm::buttonActiveSquare_Click);
			// 
			// buttonActiveLine
			// 
			this->buttonActiveLine->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonActiveLine->Location = System::Drawing::Point(277, 47);
			this->buttonActiveLine->Name = L"buttonActiveLine";
			this->buttonActiveLine->Size = System::Drawing::Size(98, 29);
			this->buttonActiveLine->TabIndex = 5;
			this->buttonActiveLine->Text = L"Линия";
			this->buttonActiveLine->UseVisualStyleBackColor = true;
			this->buttonActiveLine->Click += gcnew System::EventHandler(this, &PaintForm::buttonActiveLine_Click);
			// 
			// buttonApplySize
			// 
			this->buttonApplySize->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonApplySize->Location = System::Drawing::Point(18, 82);
			this->buttonApplySize->Name = L"buttonApplySize";
			this->buttonApplySize->Size = System::Drawing::Size(151, 29);
			this->buttonApplySize->TabIndex = 4;
			this->buttonApplySize->Text = L"Применить размер";
			this->buttonApplySize->UseVisualStyleBackColor = true;
			this->buttonApplySize->Click += gcnew System::EventHandler(this, &PaintForm::buttonApplySize_Click);
			// 
			// buttonClearCanvas
			// 
			this->buttonClearCanvas->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonClearCanvas->Location = System::Drawing::Point(99, 47);
			this->buttonClearCanvas->Name = L"buttonClearCanvas";
			this->buttonClearCanvas->Size = System::Drawing::Size(147, 29);
			this->buttonClearCanvas->TabIndex = 3;
			this->buttonClearCanvas->Text = L"Очистить холст";
			this->buttonClearCanvas->UseVisualStyleBackColor = true;
			this->buttonClearCanvas->Click += gcnew System::EventHandler(this, &PaintForm::buttonClearCanvas_Click);
			// 
			// buttonColor
			// 
			this->buttonColor->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonColor->Location = System::Drawing::Point(18, 47);
			this->buttonColor->Name = L"buttonColor";
			this->buttonColor->Size = System::Drawing::Size(75, 29);
			this->buttonColor->TabIndex = 2;
			this->buttonColor->Text = L"Цвет";
			this->buttonColor->UseVisualStyleBackColor = true;
			this->buttonColor->Click += gcnew System::EventHandler(this, &PaintForm::buttonColor_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(331, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 28);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Фигуры";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(47, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(199, 28);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Параметры кисти";
			// 
			// groupBoxSettingsSquare
			// 
			this->groupBoxSettingsSquare->Controls->Add(this->numericUpDownHeightSquare);
			this->groupBoxSettingsSquare->Controls->Add(this->numericUpDownWidthSquare);
			this->groupBoxSettingsSquare->Controls->Add(this->label4);
			this->groupBoxSettingsSquare->Controls->Add(this->label3);
			this->groupBoxSettingsSquare->Location = System::Drawing::Point(30, 172);
			this->groupBoxSettingsSquare->Name = L"groupBoxSettingsSquare";
			this->groupBoxSettingsSquare->Size = System::Drawing::Size(182, 73);
			this->groupBoxSettingsSquare->TabIndex = 3;
			this->groupBoxSettingsSquare->TabStop = false;
			this->groupBoxSettingsSquare->Text = L"Настройка квадрата";
			this->groupBoxSettingsSquare->Visible = false;
			// 
			// numericUpDownHeightSquare
			// 
			this->numericUpDownHeightSquare->Location = System::Drawing::Point(102, 43);
			this->numericUpDownHeightSquare->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightSquare->Name = L"numericUpDownHeightSquare";
			this->numericUpDownHeightSquare->Size = System::Drawing::Size(74, 20);
			this->numericUpDownHeightSquare->TabIndex = 3;
			this->numericUpDownHeightSquare->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownWidthSquare
			// 
			this->numericUpDownWidthSquare->Location = System::Drawing::Point(6, 44);
			this->numericUpDownWidthSquare->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidthSquare->Name = L"numericUpDownWidthSquare";
			this->numericUpDownWidthSquare->Size = System::Drawing::Size(74, 20);
			this->numericUpDownWidthSquare->TabIndex = 2;
			this->numericUpDownWidthSquare->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(99, 23);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(61, 18);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Высота";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(6, 23);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 18);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Ширина";
			// 
			// groupBoxSettingsCircle
			// 
			this->groupBoxSettingsCircle->Controls->Add(this->numericUpDownHeightCircle);
			this->groupBoxSettingsCircle->Controls->Add(this->numericUpDownWidthCircle);
			this->groupBoxSettingsCircle->Controls->Add(this->label5);
			this->groupBoxSettingsCircle->Controls->Add(this->label6);
			this->groupBoxSettingsCircle->Location = System::Drawing::Point(644, 185);
			this->groupBoxSettingsCircle->Name = L"groupBoxSettingsCircle";
			this->groupBoxSettingsCircle->Size = System::Drawing::Size(182, 71);
			this->groupBoxSettingsCircle->TabIndex = 5;
			this->groupBoxSettingsCircle->TabStop = false;
			this->groupBoxSettingsCircle->Text = L"Настройка круга";
			this->groupBoxSettingsCircle->Visible = false;
			// 
			// numericUpDownHeightCircle
			// 
			this->numericUpDownHeightCircle->Location = System::Drawing::Point(102, 43);
			this->numericUpDownHeightCircle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightCircle->Name = L"numericUpDownHeightCircle";
			this->numericUpDownHeightCircle->Size = System::Drawing::Size(74, 20);
			this->numericUpDownHeightCircle->TabIndex = 3;
			this->numericUpDownHeightCircle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownWidthCircle
			// 
			this->numericUpDownWidthCircle->Location = System::Drawing::Point(6, 44);
			this->numericUpDownWidthCircle->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWidthCircle->Name = L"numericUpDownWidthCircle";
			this->numericUpDownWidthCircle->Size = System::Drawing::Size(74, 20);
			this->numericUpDownWidthCircle->TabIndex = 2;
			this->numericUpDownWidthCircle->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(99, 23);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 18);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Высота";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(6, 23);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(61, 18);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Ширина";
			// 
			// groupBoxSettingsTexture
			// 
			this->groupBoxSettingsTexture->Controls->Add(this->buttonApplyTexture);
			this->groupBoxSettingsTexture->Controls->Add(this->buttonChooseTexture);
			this->groupBoxSettingsTexture->Controls->Add(this->numericUpDownHeightTexture);
			this->groupBoxSettingsTexture->Controls->Add(this->numericUpDownWidtnTexture);
			this->groupBoxSettingsTexture->Controls->Add(this->label7);
			this->groupBoxSettingsTexture->Controls->Add(this->label8);
			this->groupBoxSettingsTexture->Location = System::Drawing::Point(515, 46);
			this->groupBoxSettingsTexture->Name = L"groupBoxSettingsTexture";
			this->groupBoxSettingsTexture->Size = System::Drawing::Size(182, 102);
			this->groupBoxSettingsTexture->TabIndex = 6;
			this->groupBoxSettingsTexture->TabStop = false;
			this->groupBoxSettingsTexture->Text = L"Настройка текстуры";
			this->groupBoxSettingsTexture->Visible = false;
			// 
			// buttonApplyTexture
			// 
			this->buttonApplyTexture->Location = System::Drawing::Point(101, 73);
			this->buttonApplyTexture->Name = L"buttonApplyTexture";
			this->buttonApplyTexture->Size = System::Drawing::Size(75, 23);
			this->buttonApplyTexture->TabIndex = 5;
			this->buttonApplyTexture->Text = L"Применить";
			this->buttonApplyTexture->UseVisualStyleBackColor = true;
			this->buttonApplyTexture->Click += gcnew System::EventHandler(this, &PaintForm::buttonApplyTexture_Click);
			// 
			// buttonChooseTexture
			// 
			this->buttonChooseTexture->Location = System::Drawing::Point(6, 73);
			this->buttonChooseTexture->Name = L"buttonChooseTexture";
			this->buttonChooseTexture->Size = System::Drawing::Size(75, 23);
			this->buttonChooseTexture->TabIndex = 4;
			this->buttonChooseTexture->Text = L"Выбрать";
			this->buttonChooseTexture->UseVisualStyleBackColor = true;
			this->buttonChooseTexture->Click += gcnew System::EventHandler(this, &PaintForm::buttonChooseTexture_Click);
			// 
			// numericUpDownHeightTexture
			// 
			this->numericUpDownHeightTexture->Location = System::Drawing::Point(102, 44);
			this->numericUpDownHeightTexture->Name = L"numericUpDownHeightTexture";
			this->numericUpDownHeightTexture->Size = System::Drawing::Size(74, 20);
			this->numericUpDownHeightTexture->TabIndex = 3;
			this->numericUpDownHeightTexture->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownWidtnTexture
			// 
			this->numericUpDownWidtnTexture->Location = System::Drawing::Point(6, 44);
			this->numericUpDownWidtnTexture->Name = L"numericUpDownWidtnTexture";
			this->numericUpDownWidtnTexture->Size = System::Drawing::Size(74, 20);
			this->numericUpDownWidtnTexture->TabIndex = 2;
			this->numericUpDownWidtnTexture->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(99, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(61, 18);
			this->label7->TabIndex = 1;
			this->label7->Text = L"Высота";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(6, 23);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 18);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Ширина";
			// 
			// groupBoxCreateProject
			// 
			this->groupBoxCreateProject->Controls->Add(this->radioButtonSetSize);
			this->groupBoxCreateProject->Controls->Add(this->radioButtonOriginalSize);
			this->groupBoxCreateProject->Controls->Add(this->label11);
			this->groupBoxCreateProject->Controls->Add(this->buttonOpenProject);
			this->groupBoxCreateProject->Controls->Add(this->buttonCreateNewProject);
			this->groupBoxCreateProject->Controls->Add(this->numericUpDownHeightForm);
			this->groupBoxCreateProject->Controls->Add(this->numericUpDownWigtnForm);
			this->groupBoxCreateProject->Controls->Add(this->label9);
			this->groupBoxCreateProject->Controls->Add(this->label10);
			this->groupBoxCreateProject->Location = System::Drawing::Point(258, 174);
			this->groupBoxCreateProject->Name = L"groupBoxCreateProject";
			this->groupBoxCreateProject->Size = System::Drawing::Size(337, 122);
			this->groupBoxCreateProject->TabIndex = 5;
			this->groupBoxCreateProject->TabStop = false;
			this->groupBoxCreateProject->Text = L"Создать проект";
			// 
			// radioButtonSetSize
			// 
			this->radioButtonSetSize->AutoSize = true;
			this->radioButtonSetSize->Location = System::Drawing::Point(234, 85);
			this->radioButtonSetSize->Name = L"radioButtonSetSize";
			this->radioButtonSetSize->Size = System::Drawing::Size(76, 17);
			this->radioButtonSetSize->TabIndex = 8;
			this->radioButtonSetSize->TabStop = true;
			this->radioButtonSetSize->Text = L"Заданный";
			this->radioButtonSetSize->UseVisualStyleBackColor = true;
			// 
			// radioButtonOriginalSize
			// 
			this->radioButtonOriginalSize->AutoSize = true;
			this->radioButtonOriginalSize->Location = System::Drawing::Point(152, 85);
			this->radioButtonOriginalSize->Name = L"radioButtonOriginalSize";
			this->radioButtonOriginalSize->Size = System::Drawing::Size(76, 17);
			this->radioButtonOriginalSize->TabIndex = 7;
			this->radioButtonOriginalSize->TabStop = true;
			this->radioButtonOriginalSize->Text = L"Исходный";
			this->radioButtonOriginalSize->UseVisualStyleBackColor = true;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(184, 64);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(107, 18);
			this->label11->TabIndex = 6;
			this->label11->Text = L"Размер фона:";
			// 
			// buttonOpenProject
			// 
			this->buttonOpenProject->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonOpenProject->Location = System::Drawing::Point(6, 75);
			this->buttonOpenProject->Name = L"buttonOpenProject";
			this->buttonOpenProject->Size = System::Drawing::Size(126, 35);
			this->buttonOpenProject->TabIndex = 5;
			this->buttonOpenProject->Text = L"Открыть";
			this->buttonOpenProject->UseVisualStyleBackColor = true;
			this->buttonOpenProject->Click += gcnew System::EventHandler(this, &PaintForm::buttonOpenProject_Click);
			// 
			// buttonCreateNewProject
			// 
			this->buttonCreateNewProject->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 14.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->buttonCreateNewProject->Location = System::Drawing::Point(6, 27);
			this->buttonCreateNewProject->Name = L"buttonCreateNewProject";
			this->buttonCreateNewProject->Size = System::Drawing::Size(126, 35);
			this->buttonCreateNewProject->TabIndex = 4;
			this->buttonCreateNewProject->Text = L"Создать";
			this->buttonCreateNewProject->UseVisualStyleBackColor = true;
			this->buttonCreateNewProject->Click += gcnew System::EventHandler(this, &PaintForm::buttonCreateNewProject_Click);
			// 
			// numericUpDownHeightForm
			// 
			this->numericUpDownHeightForm->Location = System::Drawing::Point(250, 28);
			this->numericUpDownHeightForm->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownHeightForm->Name = L"numericUpDownHeightForm";
			this->numericUpDownHeightForm->Size = System::Drawing::Size(74, 20);
			this->numericUpDownHeightForm->TabIndex = 3;
			this->numericUpDownHeightForm->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDownWigtnForm
			// 
			this->numericUpDownWigtnForm->Location = System::Drawing::Point(154, 29);
			this->numericUpDownWigtnForm->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownWigtnForm->Name = L"numericUpDownWigtnForm";
			this->numericUpDownWigtnForm->Size = System::Drawing::Size(74, 20);
			this->numericUpDownWigtnForm->TabIndex = 2;
			this->numericUpDownWigtnForm->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(247, 8);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(61, 18);
			this->label9->TabIndex = 1;
			this->label9->Text = L"Высота";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(154, 8);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(61, 18);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Ширина";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// PaintForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(826, 419);
			this->Controls->Add(this->groupBoxCreateProject);
			this->Controls->Add(this->groupBoxSettingsTexture);
			this->Controls->Add(this->groupBoxSettingsCircle);
			this->Controls->Add(this->groupBoxSettingsSquare);
			this->Controls->Add(this->groupBoxToolbar);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"PaintForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Простой пример Paint на WinForms C++";
			this->Load += gcnew System::EventHandler(this, &PaintForm::PaintForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBoxToolbar->ResumeLayout(false);
			this->groupBoxToolbar->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSize))->EndInit();
			this->groupBoxSettingsSquare->ResumeLayout(false);
			this->groupBoxSettingsSquare->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightSquare))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthSquare))->EndInit();
			this->groupBoxSettingsCircle->ResumeLayout(false);
			this->groupBoxSettingsCircle->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightCircle))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidthCircle))->EndInit();
			this->groupBoxSettingsTexture->ResumeLayout(false);
			this->groupBoxSettingsTexture->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightTexture))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWidtnTexture))->EndInit();
			this->groupBoxCreateProject->ResumeLayout(false);
			this->groupBoxCreateProject->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownHeightForm))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownWigtnForm))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		Graphics^ canvas;//полотно
		List <Point>^ points;//точки по котрым рисуем линию
		Pen^ pen;//перо
		bool draw;//можно ли рисовать
		Bitmap^ background;//фон
		Color color;
		Bitmap^ texture;
		float size;
		bool clearAll;
		String^ filename;
		int statePen;
		/*
			statePen = 1 - линия
			statePen = 2 - квадрат
			statePen = 3 - круг
			statePen = 4 - текстура
		*/

	private: System::Void pictureBox1_SizeChanged(System::Object^ sender, System::EventArgs^ e);
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e);
	private: System::Void PaintForm_Load(System::Object^ sender, System::EventArgs^ e);
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void создатьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void сохранитьКакToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void панельЭлементовToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonApplySize_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonColor_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonClearCanvas_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonActiveLine_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonActiveSquare_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonActiveTexture_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonActiveCircle_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonCreateNewProject_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonOpenProject_Click(System::Object^ sender, System::EventArgs^ e);
	private: void DrawBackground();
	private: System::Void buttonChooseTexture_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void buttonApplyTexture_Click(System::Object^ sender, System::EventArgs^ e);
};
}
