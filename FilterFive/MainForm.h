#pragma once
#include "SecondForm.h"
#include <cmath>

namespace kursovaya2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ reestablishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ filter1ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ filter1ToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ filter1ToolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ filter1ToolStripMenuItem3;
	private: System::Windows::Forms::ToolStripMenuItem^ filter1ToolStripMenuItem4;
	private: System::Windows::Forms::ToolStripMenuItem^ viewToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ upscaleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ downscaleToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ infoToolStripMenuItem;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: Bitmap^ source;
	private: bool imageLoaded = false;
	private: double curr_scale_in_perc = 100.0;
	private: int curr_x = 0; int curr_y = 0;
	private: int filter_id = 0;
	private: int eraser_size = 1;
	private: double wished_scale = 1.0;
	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::ToolStripMenuItem^ applyScaleToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown4;
	private: System::Windows::Forms::Label^ label9;
	private: System::IO::FileSystemWatcher^ fileSystemWatcher1;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;

#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			   this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->reestablishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->toolsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->filter1ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->filter1ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->filter1ToolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->filter1ToolStripMenuItem3 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->filter1ToolStripMenuItem4 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->viewToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->upscaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->downscaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->applyScaleToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->infoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			   this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			   this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			   this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			   this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->label1 = (gcnew System::Windows::Forms::Label());
			   this->label2 = (gcnew System::Windows::Forms::Label());
			   this->label3 = (gcnew System::Windows::Forms::Label());
			   this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label4 = (gcnew System::Windows::Forms::Label());
			   this->button1 = (gcnew System::Windows::Forms::Button());
			   this->label5 = (gcnew System::Windows::Forms::Label());
			   this->label7 = (gcnew System::Windows::Forms::Label());
			   this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label8 = (gcnew System::Windows::Forms::Label());
			   this->label6 = (gcnew System::Windows::Forms::Label());
			   this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			   this->label9 = (gcnew System::Windows::Forms::Label());
			   this->fileSystemWatcher1 = (gcnew System::IO::FileSystemWatcher());
			   this->label10 = (gcnew System::Windows::Forms::Label());
			   this->label11 = (gcnew System::Windows::Forms::Label());
			   this->label12 = (gcnew System::Windows::Forms::Label());
			   this->button2 = (gcnew System::Windows::Forms::Button());
			   this->button3 = (gcnew System::Windows::Forms::Button());
			   this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			   this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			   this->label13 = (gcnew System::Windows::Forms::Label());
			   this->label14 = (gcnew System::Windows::Forms::Label());
			   this->label15 = (gcnew System::Windows::Forms::Label());
			   this->label16 = (gcnew System::Windows::Forms::Label());
			   this->menuStrip1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // menuStrip1
			   // 
			   this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				   this->fileToolStripMenuItem,
					   this->toolsToolStripMenuItem, this->viewToolStripMenuItem, this->infoToolStripMenuItem
			   });
			   this->menuStrip1->Location = System::Drawing::Point(0, 0);
			   this->menuStrip1->Name = L"menuStrip1";
			   this->menuStrip1->Size = System::Drawing::Size(902, 24);
			   this->menuStrip1->TabIndex = 0;
			   this->menuStrip1->Text = L"menuStrip1";
			   // 
			   // fileToolStripMenuItem
			   // 
			   this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				   this->openToolStripMenuItem,
					   this->saveToolStripMenuItem, this->reestablishToolStripMenuItem, this->exitToolStripMenuItem
			   });
			   this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			   this->fileToolStripMenuItem->Size = System::Drawing::Size(48, 20);
			   this->fileToolStripMenuItem->Text = L"Файл";
			   // 
			   // openToolStripMenuItem
			   // 
			   this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			   this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->openToolStripMenuItem->Text = L"Открыть";
			   this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::открытьToolStripMenuItem_Click);
			   // 
			   // saveToolStripMenuItem
			   // 
			   this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			   this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->saveToolStripMenuItem->Text = L"Сохранить";
			   this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::сохранитьToolStripMenuItem_Click);
			   // 
			   // reestablishToolStripMenuItem
			   // 
			   this->reestablishToolStripMenuItem->Name = L"reestablishToolStripMenuItem";
			   this->reestablishToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->reestablishToolStripMenuItem->Text = L"Восстановить";
			   this->reestablishToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::восстановитьToolStripMenuItem_Click);
			   // 
			   // exitToolStripMenuItem
			   // 
			   this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			   this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->exitToolStripMenuItem->Text = L"Выход";
			   this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::выходToolStripMenuItem_Click);
			   // 
			   // toolsToolStripMenuItem
			   // 
			   this->toolsToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				   this->filter1ToolStripMenuItem,
					   this->filter1ToolStripMenuItem1, this->filter1ToolStripMenuItem2, this->filter1ToolStripMenuItem3, this->filter1ToolStripMenuItem4
			   });
			   this->toolsToolStripMenuItem->Name = L"toolsToolStripMenuItem";
			   this->toolsToolStripMenuItem->Size = System::Drawing::Size(95, 20);
			   this->toolsToolStripMenuItem->Text = L"Инструменты";
			   // 
			   // filter1ToolStripMenuItem
			   // 
			   this->filter1ToolStripMenuItem->Name = L"filter1ToolStripMenuItem";
			   this->filter1ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			   this->filter1ToolStripMenuItem->Text = L"Фильтр 1";
			   this->filter1ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::filter1ToolStripMenuItem_Click);
			   // 
			   // filter1ToolStripMenuItem1
			   // 
			   this->filter1ToolStripMenuItem1->Name = L"filter1ToolStripMenuItem1";
			   this->filter1ToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			   this->filter1ToolStripMenuItem1->Text = L"Фильтр 2";
			   this->filter1ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &MainForm::фильтр1ToolStripMenuItem1_Click);
			   // 
			   // filter1ToolStripMenuItem2
			   // 
			   this->filter1ToolStripMenuItem2->Name = L"filter1ToolStripMenuItem2";
			   this->filter1ToolStripMenuItem2->Size = System::Drawing::Size(180, 22);
			   this->filter1ToolStripMenuItem2->Text = L"Фильтр 3";
			   this->filter1ToolStripMenuItem2->Click += gcnew System::EventHandler(this, &MainForm::filter1ToolStripMenuItem2_Click);
			   // 
			   // filter1ToolStripMenuItem3
			   // 
			   this->filter1ToolStripMenuItem3->Name = L"filter1ToolStripMenuItem3";
			   this->filter1ToolStripMenuItem3->Size = System::Drawing::Size(180, 22);
			   this->filter1ToolStripMenuItem3->Text = L"Фильтр 4";
			   this->filter1ToolStripMenuItem3->Click += gcnew System::EventHandler(this, &MainForm::фильтр1ToolStripMenuItem3_Click);
			   // 
			   // filter1ToolStripMenuItem4
			   // 
			   this->filter1ToolStripMenuItem4->Name = L"filter1ToolStripMenuItem4";
			   this->filter1ToolStripMenuItem4->Size = System::Drawing::Size(180, 22);
			   this->filter1ToolStripMenuItem4->Text = L"Фильтр 5";
			   this->filter1ToolStripMenuItem4->Click += gcnew System::EventHandler(this, &MainForm::фильтр1ToolStripMenuItem4_Click);
			   // 
			   // viewToolStripMenuItem
			   // 
			   this->viewToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				   this->upscaleToolStripMenuItem,
					   this->downscaleToolStripMenuItem, this->applyScaleToolStripMenuItem
			   });
			   this->viewToolStripMenuItem->Name = L"viewToolStripMenuItem";
			   this->viewToolStripMenuItem->Size = System::Drawing::Size(39, 20);
			   this->viewToolStripMenuItem->Text = L"Вид";
			   // 
			   // upscaleToolStripMenuItem
			   // 
			   this->upscaleToolStripMenuItem->Name = L"upscaleToolStripMenuItem";
			   this->upscaleToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			   this->upscaleToolStripMenuItem->Text = L"Увеличить масштаб";
			   this->upscaleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::upscaleToolStripMenuItem_Click);
			   // 
			   // downscaleToolStripMenuItem
			   // 
			   this->downscaleToolStripMenuItem->Name = L"downscaleToolStripMenuItem";
			   this->downscaleToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			   this->downscaleToolStripMenuItem->Text = L"Уменьшить масштаб";
			   this->downscaleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::downscaleToolStripMenuItem_Click);
			   // 
			   // applyScaleToolStripMenuItem
			   // 
			   this->applyScaleToolStripMenuItem->Name = L"applyScaleToolStripMenuItem";
			   this->applyScaleToolStripMenuItem->Size = System::Drawing::Size(191, 22);
			   this->applyScaleToolStripMenuItem->Text = L"Применить масштаб";
			   this->applyScaleToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::applyScaleToolStripMenuItem_Click);
			   // 
			   // infoToolStripMenuItem
			   // 
			   this->infoToolStripMenuItem->Name = L"infoToolStripMenuItem";
			   this->infoToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			   this->infoToolStripMenuItem->Text = L"Справка";
			   this->infoToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::infoToolStripMenuItem_Click);
			   // 
			   // openFileDialog1
			   // 
			   this->openFileDialog1->FileName = L"openFileDialog1";
			   // 
			   // pictureBox1
			   // 
			   this->pictureBox1->Location = System::Drawing::Point(0, 0);
			   this->pictureBox1->Name = L"pictureBox1";
			   this->pictureBox1->Size = System::Drawing::Size(572, 419);
			   this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			   this->pictureBox1->TabIndex = 1;
			   this->pictureBox1->TabStop = false;
			   this->pictureBox1->Click += gcnew System::EventHandler(this, &MainForm::pictureBox1_Click);
			   this->pictureBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseClick);
			   this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pictureBox1_MouseMove);
			   // 
			   // saveFileDialog1
			   // 
			   this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::saveFileDialog1_FileOk);
			   // 
			   // numericUpDown1
			   // 
			   this->numericUpDown1->Location = System::Drawing::Point(790, 28);
			   this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			   this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown1->Name = L"numericUpDown1";
			   this->numericUpDown1->Size = System::Drawing::Size(53, 20);
			   this->numericUpDown1->TabIndex = 5;
			   this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MainForm::numericUpDown1_ValueChanged);
			   // 
			   // numericUpDown2
			   // 
			   this->numericUpDown2->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			   this->numericUpDown2->Location = System::Drawing::Point(790, 54);
			   this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 400, 0, 0, 0 });
			   this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			   this->numericUpDown2->Name = L"numericUpDown2";
			   this->numericUpDown2->Size = System::Drawing::Size(53, 20);
			   this->numericUpDown2->TabIndex = 9;
			   this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			   // 
			   // panel1
			   // 
			   this->panel1->AutoScroll = true;
			   this->panel1->Controls->Add(this->pictureBox1);
			   this->panel1->Location = System::Drawing::Point(12, 27);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(572, 419);
			   this->panel1->TabIndex = 10;
			   // 
			   // label1
			   // 
			   this->label1->AutoSize = true;
			   this->label1->BackColor = System::Drawing::SystemColors::Control;
			   this->label1->Location = System::Drawing::Point(590, 30);
			   this->label1->Name = L"label1";
			   this->label1->Size = System::Drawing::Size(176, 13);
			   this->label1->TabIndex = 12;
			   this->label1->Text = L"Коэффициент масштабирования:";
			   // 
			   // label2
			   // 
			   this->label2->AutoSize = true;
			   this->label2->BackColor = System::Drawing::SystemColors::Control;
			   this->label2->Location = System::Drawing::Point(590, 56);
			   this->label2->Name = L"label2";
			   this->label2->Size = System::Drawing::Size(196, 13);
			   this->label2->TabIndex = 13;
			   this->label2->Text = L"Желаемый размер изображения (%):\r\n";
			   // 
			   // label3
			   // 
			   this->label3->AutoSize = true;
			   this->label3->BackColor = System::Drawing::SystemColors::Control;
			   this->label3->Location = System::Drawing::Point(595, 107);
			   this->label3->Name = L"label3";
			   this->label3->Size = System::Drawing::Size(107, 13);
			   this->label3->TabIndex = 14;
			   this->label3->Text = L"Количество зубьев:\r\n";
			   this->label3->Visible = false;
			   // 
			   // numericUpDown3
			   // 
			   this->numericUpDown3->Location = System::Drawing::Point(708, 105);
			   this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 255, 0, 0, 0 });
			   this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown3->Name = L"numericUpDown3";
			   this->numericUpDown3->Size = System::Drawing::Size(53, 20);
			   this->numericUpDown3->TabIndex = 15;
			   this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 4, 0, 0, 0 });
			   this->numericUpDown3->Visible = false;
			   // 
			   // label4
			   // 
			   this->label4->AutoSize = true;
			   this->label4->BackColor = System::Drawing::SystemColors::Control;
			   this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label4->Location = System::Drawing::Point(595, 81);
			   this->label4->Name = L"label4";
			   this->label4->Size = System::Drawing::Size(169, 18);
			   this->label4->TabIndex = 17;
			   this->label4->Text = L"Параметры Фильтра 2:";
			   this->label4->Visible = false;
			   // 
			   // button1
			   // 
			   this->button1->Location = System::Drawing::Point(622, 431);
			   this->button1->Name = L"button1";
			   this->button1->Size = System::Drawing::Size(109, 62);
			   this->button1->TabIndex = 18;
			   this->button1->Text = L"Применить фильтр к половине изображения";
			   this->button1->UseVisualStyleBackColor = true;
			   this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			   // 
			   // label5
			   // 
			   this->label5->AutoSize = true;
			   this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label5->Location = System::Drawing::Point(618, 405);
			   this->label5->Name = L"label5";
			   this->label5->Size = System::Drawing::Size(244, 20);
			   this->label5->TabIndex = 19;
			   this->label5->Text = L"Текущий выбранный фильтр: 0";
			   this->label5->Click += gcnew System::EventHandler(this, &MainForm::label5_Click);
			   // 
			   // label7
			   // 
			   this->label7->AutoSize = true;
			   this->label7->BackColor = System::Drawing::SystemColors::Control;
			   this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label7->Location = System::Drawing::Point(595, 81);
			   this->label7->Name = L"label7";
			   this->label7->Size = System::Drawing::Size(169, 18);
			   this->label7->TabIndex = 21;
			   this->label7->Text = L"Параметры Фильтра 3:";
			   this->label7->Visible = false;
			   // 
			   // numericUpDown5
			   // 
			   this->numericUpDown5->Location = System::Drawing::Point(708, 107);
			   this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			   this->numericUpDown5->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown5->Name = L"numericUpDown5";
			   this->numericUpDown5->Size = System::Drawing::Size(53, 20);
			   this->numericUpDown5->TabIndex = 22;
			   this->numericUpDown5->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown5->Visible = false;
			   this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &MainForm::numericUpDown5_ValueChanged);
			   // 
			   // label8
			   // 
			   this->label8->AutoSize = true;
			   this->label8->BackColor = System::Drawing::SystemColors::Control;
			   this->label8->Location = System::Drawing::Point(596, 109);
			   this->label8->Name = L"label8";
			   this->label8->Size = System::Drawing::Size(93, 13);
			   this->label8->TabIndex = 23;
			   this->label8->Text = L"Размер ластика:\r\n";
			   this->label8->Visible = false;
			   this->label8->Click += gcnew System::EventHandler(this, &MainForm::label8_Click);
			   // 
			   // label6
			   // 
			   this->label6->AutoSize = true;
			   this->label6->BackColor = System::Drawing::SystemColors::Control;
			   this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->label6->Location = System::Drawing::Point(594, 81);
			   this->label6->Name = L"label6";
			   this->label6->Size = System::Drawing::Size(169, 18);
			   this->label6->TabIndex = 24;
			   this->label6->Text = L"Параметры Фильтра 5:";
			   this->label6->Visible = false;
			   // 
			   // numericUpDown4
			   // 
			   this->numericUpDown4->Location = System::Drawing::Point(776, 102);
			   this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			   this->numericUpDown4->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown4->Name = L"numericUpDown4";
			   this->numericUpDown4->Size = System::Drawing::Size(53, 20);
			   this->numericUpDown4->TabIndex = 25;
			   this->numericUpDown4->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			   this->numericUpDown4->Visible = false;
			   this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &MainForm::numericUpDown4_ValueChanged);
			   // 
			   // label9
			   // 
			   this->label9->AutoSize = true;
			   this->label9->BackColor = System::Drawing::SystemColors::Control;
			   this->label9->Location = System::Drawing::Point(594, 104);
			   this->label9->Name = L"label9";
			   this->label9->Size = System::Drawing::Size(176, 13);
			   this->label9->TabIndex = 26;
			   this->label9->Text = L"Коэффициент масштабирования:\r\n";
			   this->label9->Visible = false;
			   // 
			   // fileSystemWatcher1
			   // 
			   this->fileSystemWatcher1->EnableRaisingEvents = true;
			   this->fileSystemWatcher1->SynchronizingObject = this;
			   // 
			   // label10
			   // 
			   this->label10->AutoSize = true;
			   this->label10->Location = System::Drawing::Point(10, 451);
			   this->label10->Name = L"label10";
			   this->label10->Size = System::Drawing::Size(49, 13);
			   this->label10->TabIndex = 27;
			   this->label10->Text = L"Размер:";
			   // 
			   // label11
			   // 
			   this->label11->AutoSize = true;
			   this->label11->BackColor = System::Drawing::SystemColors::Control;
			   this->label11->Location = System::Drawing::Point(144, 452);
			   this->label11->Name = L"label11";
			   this->label11->Size = System::Drawing::Size(117, 13);
			   this->label11->TabIndex = 28;
			   this->label11->Text = L"Координаты пиксела:";
			   // 
			   // label12
			   // 
			   this->label12->AutoSize = true;
			   this->label12->BackColor = System::Drawing::SystemColors::Control;
			   this->label12->Location = System::Drawing::Point(451, 452);
			   this->label12->Name = L"label12";
			   this->label12->Size = System::Drawing::Size(56, 13);
			   this->label12->TabIndex = 29;
			   this->label12->Text = L"Машстаб:";
			   // 
			   // button2
			   // 
			   this->button2->AutoSize = true;
			   this->button2->Location = System::Drawing::Point(849, 51);
			   this->button2->Name = L"button2";
			   this->button2->Size = System::Drawing::Size(43, 23);
			   this->button2->TabIndex = 30;
			   this->button2->Text = L"Apply";
			   this->button2->UseVisualStyleBackColor = true;
			   this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			   // 
			   // button3
			   // 
			   this->button3->Location = System::Drawing::Point(749, 431);
			   this->button3->Name = L"button3";
			   this->button3->Size = System::Drawing::Size(104, 62);
			   this->button3->TabIndex = 31;
			   this->button3->Text = L"Применить фильтр ко всему изображению";
			   this->button3->UseVisualStyleBackColor = true;
			   this->button3->Click += gcnew System::EventHandler(this, &MainForm::button3_Click);
			   // 
			   // pictureBox2
			   // 
			   this->pictureBox2->Location = System::Drawing::Point(26, 471);
			   this->pictureBox2->Name = L"pictureBox2";
			   this->pictureBox2->Size = System::Drawing::Size(256, 269);
			   this->pictureBox2->TabIndex = 32;
			   this->pictureBox2->TabStop = false;
			   // 
			   // pictureBox3
			   // 
			   this->pictureBox3->Location = System::Drawing::Point(306, 468);
			   this->pictureBox3->Name = L"pictureBox3";
			   this->pictureBox3->Size = System::Drawing::Size(256, 269);
			   this->pictureBox3->TabIndex = 33;
			   this->pictureBox3->TabStop = false;
			   // 
			   // label13
			   // 
			   this->label13->AutoSize = true;
			   this->label13->Location = System::Drawing::Point(100, 727);
			   this->label13->Name = L"label13";
			   this->label13->Size = System::Drawing::Size(99, 13);
			   this->label13->TabIndex = 34;
			   this->label13->Text = L"значение пиксела";
			   this->label13->Visible = false;
			   this->label13->Click += gcnew System::EventHandler(this, &MainForm::label13_Click);
			   // 
			   // label14
			   // 
			   this->label14->AutoSize = true;
			   this->label14->Location = System::Drawing::Point(10, 603);
			   this->label14->Name = L"label14";
			   this->label14->Size = System::Drawing::Size(40, 13);
			   this->label14->TabIndex = 35;
			   this->label14->Text = L"кол-во";
			   this->label14->Visible = false;
			   this->label14->Click += gcnew System::EventHandler(this, &MainForm::label14_Click);
			   // 
			   // label15
			   // 
			   this->label15->AutoSize = true;
			   this->label15->Location = System::Drawing::Point(387, 727);
			   this->label15->Name = L"label15";
			   this->label15->Size = System::Drawing::Size(99, 13);
			   this->label15->TabIndex = 36;
			   this->label15->Text = L"значение пиксела";
			   this->label15->Visible = false;
			   // 
			   // label16
			   // 
			   this->label16->AutoSize = true;
			   this->label16->Location = System::Drawing::Point(288, 603);
			   this->label16->Name = L"label16";
			   this->label16->Size = System::Drawing::Size(40, 13);
			   this->label16->TabIndex = 37;
			   this->label16->Text = L"кол-во";
			   this->label16->Visible = false;
			   this->label16->Click += gcnew System::EventHandler(this, &MainForm::label16_Click);
			   // 
			   // MyForm
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->ClientSize = System::Drawing::Size(902, 749);
			   this->Controls->Add(this->label16);
			   this->Controls->Add(this->label15);
			   this->Controls->Add(this->label14);
			   this->Controls->Add(this->label13);
			   this->Controls->Add(this->pictureBox3);
			   this->Controls->Add(this->pictureBox2);
			   this->Controls->Add(this->label6);
			   this->Controls->Add(this->numericUpDown4);
			   this->Controls->Add(this->label4);
			   this->Controls->Add(this->label9);
			   this->Controls->Add(this->label3);
			   this->Controls->Add(this->label7);
			   this->Controls->Add(this->numericUpDown3);
			   this->Controls->Add(this->numericUpDown5);
			   this->Controls->Add(this->label8);
			   this->Controls->Add(this->button3);
			   this->Controls->Add(this->button2);
			   this->Controls->Add(this->label12);
			   this->Controls->Add(this->label11);
			   this->Controls->Add(this->label10);
			   this->Controls->Add(this->label5);
			   this->Controls->Add(this->button1);
			   this->Controls->Add(this->label2);
			   this->Controls->Add(this->label1);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->numericUpDown2);
			   this->Controls->Add(this->numericUpDown1);
			   this->Controls->Add(this->menuStrip1);
			   this->MainMenuStrip = this->menuStrip1;
			   this->Name = L"MyForm";
			   this->Text = L"MyForm";
			   this->Load += gcnew System::EventHandler(this, &MainForm::MyForm_Load);
			   this->menuStrip1->ResumeLayout(false);
			   this->menuStrip1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			   this->panel1->ResumeLayout(false);
			   this->panel1->PerformLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fileSystemWatcher1))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			   this->ResumeLayout(false);
			   this->PerformLayout();

		   }
#pragma endregion
	private: System::Void фильтр1ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		filter_id = 2;
		label3->Visible = true;
		label4->Visible = true;
		numericUpDown3->Visible = true;
		label7->Visible = false;
		label8->Visible = false;
		numericUpDown5->Visible = false;
		label6->Visible = false;
		label9->Visible = false;
		numericUpDown4->Visible = false;
		label5->Text = "Текущий выбранный фильтр: " + filter_id;
	}
	private: System::Void фильтр1ToolStripMenuItem3_Click(System::Object^ sender, System::EventArgs^ e) {
		filter_id = 4;
		label5->Text = "Текущий выбранный фильтр: " + filter_id;
		label7->Visible = false;
		label8->Visible = false;
		numericUpDown5->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		numericUpDown3->Visible = false;
		label6->Visible = false;
		label9->Visible = false;
		numericUpDown4->Visible = false;
	}
	private: System::Void фильтр1ToolStripMenuItem4_Click(System::Object^ sender, System::EventArgs^ e) {
		label6->Visible = true;
		label9->Visible = true;
		numericUpDown4->Visible = true;
		label7->Visible = false;
		label8->Visible = false;
		numericUpDown5->Visible = false;
		label3->Visible = false;
		label4->Visible = false;
		numericUpDown3->Visible = false;
		filter_id = 5;
		label5->Text = "Текущий выбранный фильтр: " + filter_id;
	}
	private: System::Void открытьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			source = gcnew Bitmap(openFileDialog1->FileName);
			pictureBox1->Image = source;
			label10->Text = "Размер: " + source->Width + "x" + source->Height;
			curr_x = source->Width;
			curr_y = source->Height;
			imageLoaded = true;
			pictureBox2->Image = nullptr;
			pictureBox3->Image = nullptr;
		}
	}
	private: System::Void восстановитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		pictureBox1->Image = source;
		curr_scale_in_perc = 100;
		curr_x = source->Width;
		curr_y = source->Height;
		label12->Text = "Масштаб: " + curr_scale_in_perc + "%";
		label10->Text = "Размер: " + curr_x + "x" + curr_y;
		curr_scale_in_perc = 100.0;
		wished_scale = 1.0;
	}
	private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void сохранитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Filter = "BitMap files (*.bmp)|*.bmp|JPEG files (*.jpg)|*.jpg|PNG files (*.png)|*.png";
		saveFileDialog1->FilterIndex = 2;
		saveFileDialog1->RestoreDirectory = true;
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			Bitmap^ bmp = gcnew Bitmap(pictureBox1->Image);
			bmp->Save(saveFileDialog1->FileName);
		}
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (imageLoaded) {
			Bitmap^ bmp = gcnew Bitmap(pictureBox1->Image);
			Color clr;
			if ((e->X > 0) && (e->X < pictureBox1->Image->Width) &&
				(e->Y > 0) && (e->Y < pictureBox1->Image->Height))
			{
				clr = bmp->GetPixel(e->X, e->Y);
			}
			label11->Text = "Координаты пиксела: X:" + e->X + " Y:" + e->Y + " | R:" + clr.R + " G:" + clr.G + " B:" + clr.B;
		}
		if (e->Button == System::Windows::Forms::MouseButtons::Left && filter_id == 3) {
			Bitmap^ bmp = gcnew Bitmap(pictureBox1->Image);
			for (int i = -eraser_size; i < eraser_size; i++)
				for (int j = -eraser_size; j < eraser_size; j++)
				{
					// проверка, что мы не выходим за пределы изображения
					if ((e->X + i > 0) && (e->X + i < pictureBox1->Image->Width) &&
						(e->Y + j > 0) && (e->Y + j < pictureBox1->Image->Height))
					{
						bmp->SetPixel(e->X + i, e->Y + j, Color::White);
					}
				}
			pictureBox1->Image = bmp;
		}
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void upscaleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int scale_coef = (int)numericUpDown1->Value;
		wished_scale *= scale_coef;
		Bitmap^ bitmap1 = source;
		Graphics^ Gr1 = Graphics::FromImage(bitmap1);
		Bitmap^ bitmap2 = gcnew Bitmap(bitmap1->Width * wished_scale, bitmap1->Height * wished_scale, Gr1);
		Graphics^ Gr2 = Graphics::FromImage(bitmap2);
		Rectangle compressionRectangle = Rectangle(0, 0, bitmap1->Width * wished_scale, bitmap1->Height * wished_scale);
		Gr2->DrawImage(bitmap1, compressionRectangle);
		pictureBox1->Image = bitmap2;
		pictureBox1->Size = bitmap2->Size;
		curr_scale_in_perc *= scale_coef;
		label12->Text = "Масштаб: " + curr_scale_in_perc + "%";
		curr_x *= scale_coef;
		curr_y *= scale_coef;
		label10->Text = "Размер: " + curr_x + "x" + curr_y;
	}
	private: System::Void downscaleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		int scale_coef = (int)numericUpDown1->Value;
		wished_scale /= scale_coef;
		Bitmap^ bitmap1 = source;
		Graphics^ Gr1 = Graphics::FromImage(bitmap1);
		Bitmap^ bitmap2 = gcnew Bitmap(bitmap1->Width * wished_scale, bitmap1->Height * wished_scale, Gr1);
		Graphics^ Gr2 = Graphics::FromImage(bitmap2);
		Rectangle compressionRectangle = Rectangle(0, 0, bitmap1->Width * wished_scale, bitmap1->Height * wished_scale);
		Gr2->DrawImage(bitmap1, compressionRectangle);
		pictureBox1->Image = bitmap2;
		pictureBox1->Size = bitmap2->Size;
		curr_scale_in_perc /= scale_coef;
		label12->Text = "Масштаб: " + curr_scale_in_perc + "%";
		curr_x /= scale_coef;
		curr_y /= scale_coef;
		label10->Text = "Размер: " + curr_x + "x" + curr_y;
	}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void applyScaleToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	double scale_coef = (double)((double)numericUpDown2->Value / 100);
	wished_scale = scale_coef;
	Bitmap^ bitmap1 = source;
	Graphics^ Gr1 = Graphics::FromImage(bitmap1);
	Bitmap^ bitmap2 = gcnew Bitmap(bitmap1->Width * wished_scale, bitmap1->Height * wished_scale, Gr1);
	Graphics^ Gr2 = Graphics::FromImage(bitmap2);
	Rectangle compressionRectangle = Rectangle(0, 0, bitmap1->Width * wished_scale, bitmap1->Height * wished_scale);
	Gr2->DrawImage(bitmap1, compressionRectangle);
	pictureBox1->Image = bitmap2;
	pictureBox1->Size = bitmap2->Size;
	curr_scale_in_perc = wished_scale * 100;
	label12->Text = "Масштаб: " + curr_scale_in_perc + "%";
	curr_x = source->Width * wished_scale;
	curr_y = source->Height * wished_scale;
	label10->Text = "Размер: " + curr_x + "x" + curr_y;
}
private: System::Void infoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	SecondForm^ f2 = gcnew SecondForm();
	f2->Show();
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void filter1ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	filter_id = 1;
	label5->Text = "Текущий выбранный фильтр: " + filter_id;
	label3->Visible = false;
	label4->Visible = false;
	numericUpDown3->Visible = false;
	label7->Visible = false;
	label8->Visible = false;
	numericUpDown5->Visible = false;
	label6->Visible = false;
	label9->Visible = false;
	numericUpDown4->Visible = false;
}
private: System::Void filter1ToolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	label3->Visible = false;
	label4->Visible = false;
	numericUpDown3->Visible = false;
	label7->Visible = true;
	label8->Visible = true;
	numericUpDown5->Visible = true;
	label6->Visible = false;
	label9->Visible = false;
	numericUpDown4->Visible = false;
	filter_id = 3;
	label5->Text = "Текущий выбранный фильтр: " + filter_id;
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void apply1filter(bool toFullImage) {
	int k = 0;
	if (toFullImage)
		k = 1;
	else
		k = 2;
	Bitmap^ bmp = gcnew Bitmap(pictureBox1->Image);
	for (int x = 0; x < bmp->Width / k; x++) {
		for (int y = 0; y < bmp->Height; y++) {
			Color clr = bmp->GetPixel(x, y);
			bmp->SetPixel(x, y, Color::FromArgb(clr.A, clr.R, clr.G * 0.647, 0));
		}
	}
	pictureBox1->Image = bmp;
}
private: static int getColorSawFiltered(int n, int c) {
		   // разница между уровнями
		   int dC = 256 / n;
		   // определяем индекс левого пограничного уровня
		   int l1 = (int)floor((double)c / dC);
		   // от заданного цвета вычитаем значение левого пограничного уровня
		   return (c - l1 * dC) * n;
}

private: System::Void apply2filter(bool toFullImage) {
	int k = 0;
	if (toFullImage)
		k = 1;
	else
		k = 2;
	Bitmap^ bmp = gcnew Bitmap(pictureBox1->Image);
	int n_saw_angles = (int)numericUpDown3->Value;
	for (int x = 0; x < bmp->Width / k; x++) {
		for (int y = 0; y < bmp->Height; y++) {
			Color clr = bmp->GetPixel(x, y);
			int R = getColorSawFiltered(n_saw_angles, clr.R);
			int G = getColorSawFiltered(n_saw_angles, clr.G);
			int B = getColorSawFiltered(n_saw_angles, clr.B);
			Color sawFilteredColor = Color::FromArgb(clr.A, R, G, B);
			bmp->SetPixel(x, y, sawFilteredColor);
		}
	}
	pictureBox1->Image = bmp;
}
private: System::Void apply3filter() {
	// Bitmap^ bmp = gcnew Bitmap(pictureBox1->Image);
}

System::Void equalizeHistogram(List<int>% pdata, int width, int height, int max_val)
{
	int total = width * height;
	int n_bins = max_val + 1;

	// Compute histogram
	List<int> hist(n_bins);
	for (int i = 0; i < n_bins; i++) {
		hist.Add(0);
	}
	for (int i = 0; i < total; ++i) {
		hist[pdata[i]]++;
	}

	// Build LUT from cumulative histrogram

	// Find first non-zero bin
	int i = 0;
	while (!hist[i]) ++i;

	if (hist[i] == total) {
		for (int j = 0; j < total; ++j) {
			pdata[j] = i;
		}
		return;
	}

	// Compute scale
	float scale = (n_bins - 1.f) / (total - hist[i]);

	// Initialize lut
	List<int> lut(n_bins);
	i++;
	for (int i = 0; i < n_bins; i++) {
		lut.Add(0);
	}

	int sum = 0;
	for (; i < hist.Count; ++i) {
		sum += hist[i];
		// the value is saturated in range [0, max_val]
		lut[i] = System::Math::Max(0, System::Math::Min(int(round(sum * scale)), max_val));
	}

	// Apply equalization
	for (int i = 0; i < total; ++i) {
		pdata[i] = lut[pdata[i]];
	}
}

private: System::Void apply4filter(bool toFullImage) {
	int k = 0;
	if (toFullImage)
		k = 1;
	else
		k = 2;
	Bitmap^ bmp = gcnew Bitmap(pictureBox1->Image);
	// перебираем в циклах все пиксели исходного изображения
	List<int> a;
	for (int j = 0; j < bmp->Height; j++)
		for (int i = 0; i < bmp->Width; i++)
		{
			// получаем (i, j) пиксель
			UInt32 pixel = (UInt32)(bmp->GetPixel(i, j).ToArgb());
			// получаем компоненты цветов пикселя
			float R = (float)((pixel & 0x00FF0000) >> 16); // красный
			float G = (float)((pixel & 0x0000FF00) >> 8); // зеленый
			float B = (float)(pixel & 0x000000FF); // синий
			// делаем цвет черно-белым (оттенки серого) - находим среднее арифметическое
			R = G = B = (R + G + B) / 3.0f;
			// собираем новый пиксель по частям (по каналам)
			UInt32 newPixel = 0xFF000000 | ((UInt32)R << 16) | ((UInt32)G << 8) | ((UInt32)B);
			// добавляем его в Bitmap нового изображения
			bmp->SetPixel(i, j, Color::FromArgb((int)newPixel));
			a.Add(Color::FromArgb((int)newPixel).R);
		}
	List<int> hist1;
	for (int i = 0; i < 256; i++) {
		hist1.Add(0);
	}

	for (int i = 0; i < a.Count; i++) {
		hist1[a[i]]++;
	}

	for (int x = 0; x < 256; x++) {
		Graphics^ g = pictureBox2->CreateGraphics();
		Pen^ p = gcnew Pen(Color::Black, 1.0f);
		Point pt1 = Point(x, 269);
		Point pt2 = Point(x, 269 - hist1[x] / 20);
		g->DrawLine(p, pt1, pt2);
	}
	// выводим черно-белый Bitmap в pictureBox1
	pictureBox1->Image = bmp;
	equalizeHistogram(a, bmp->Width, bmp->Height, 255);
	int s = 0;
	for (int j = 0; j < bmp->Height; j++) {
		for (int i = 0; i < bmp->Width / k; i++)
		{
			bmp->SetPixel(i, j, Color::FromArgb((int)a[i + s], (int)a[i + s], (int)a[i + s]));
		}
		s += bmp->Width;
	}


	List<int> hist2;
	for (int i = 0; i < 256; i++) {
		hist2.Add(0);
	}

	for (int i = 0; i < a.Count; i++) {
		hist2[a[i]]++;
	}

	for (int x = 0; x < 256; x++) {
		Graphics^ g = pictureBox3->CreateGraphics();
		Pen^ p = gcnew Pen(Color::Black, 1.0f);
		Point pt1 = Point(x, 269);
		Point pt2 = Point(x, 269 - hist2[x] / 20);
		g->DrawLine(p, pt1, pt2);
	}
}
private: System::Void apply5filter() {
	Bitmap^ bmp1 = gcnew Bitmap(pictureBox1->Image);
	int filter5_scale_coef = (int)numericUpDown4->Value;
	Bitmap^ bmp2 = gcnew Bitmap(pictureBox1->Width / filter5_scale_coef, pictureBox1->Height);
	List<Color> a;
	for (int x = 0; x < bmp1->Width; x += filter5_scale_coef) {
		for (int y = 0; y < bmp1->Height; y++) {
			a.Add(bmp1->GetPixel(x, y));
		}
	}
	int i = 0;
	for (int x = 0; x < bmp2->Width; x++) {
		for (int y = 0; y < bmp2->Height; y++) {
			Color clr = bmp1->GetPixel(x, y);
			bmp2->SetPixel(x, y, a[y + i]);
		}
		i += bmp2->Height;
	}
	pictureBox1->Image = bmp2;
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (filter_id)
	{
	case 1:
		apply1filter(false);
		break;
	case 2:
		apply2filter(false);
		break;
	case 3:
		apply3filter();
		break;
	case 4:
		//pictureBox2->Image = nullptr;
		//pictureBox3->Image = nullptr;
		apply4filter(false);
		label13->Visible = true;
		label14->Visible = true;
		label15->Visible = true;
		label16->Visible = true;
		break;
	case 5:
		apply5filter();
		break;
	default:
		break;
	}
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void numericUpDown5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
	eraser_size = (int)numericUpDown5->Value;
}
private: System::Void numericUpDown4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	double scale_coef = (double)((double)numericUpDown2->Value / 100);
	wished_scale = scale_coef;
	Bitmap^ bitmap1 = source;
	Graphics^ Gr1 = Graphics::FromImage(bitmap1);
	Bitmap^ bitmap2 = gcnew Bitmap(bitmap1->Width * wished_scale, bitmap1->Height * wished_scale, Gr1);
	Graphics^ Gr2 = Graphics::FromImage(bitmap2);
	Rectangle compressionRectangle = Rectangle(0, 0, bitmap1->Width * wished_scale, bitmap1->Height * wished_scale);
	Gr2->DrawImage(bitmap1, compressionRectangle);
	pictureBox1->Image = bitmap2;
	pictureBox1->Size = bitmap2->Size;
	curr_scale_in_perc = wished_scale * 100;
	label12->Text = "Масштаб: " + curr_scale_in_perc + "%";
	curr_x = source->Width * wished_scale;
	curr_y = source->Height * wished_scale;
	label10->Text = "Размер: " + curr_x + "x" + curr_y;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (filter_id)
	{
	case 1:
		apply1filter(true);
		break;
	case 2:
		apply2filter(true);
		break;
	case 3:
		apply3filter();
		break;
	case 4:
		//pictureBox2->Image = nullptr;
		//pictureBox3->Image = nullptr;
		apply4filter(true);
		label13->Visible = true;
		label14->Visible = true;
		label15->Visible = true;
		label16->Visible = true;
		break;
	case 5:
		apply5filter();
		break;
	default:
		break;
	}
}
private: System::Void pictureBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left && filter_id == 3) {
			Bitmap^ bmp = gcnew Bitmap(pictureBox1->Image);
			for (int i = -eraser_size; i < eraser_size; i++)
				for (int j = -eraser_size; j < eraser_size; j++)
				{
					// проверка, что мы не выходим за пределы изображения
					if ((e->X + i > 0) && (e->X + i < pictureBox1->Image->Width) &&
						(e->Y + j > 0) && (e->Y + j < pictureBox1->Image->Height))
					{
						bmp->SetPixel(e->X + i, e->Y + j, Color::White);
					}
				}
			pictureBox1->Image = bmp;
		}
}
private: System::Void label13_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label16_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label14_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}