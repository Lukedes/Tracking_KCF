#pragma once

#include <opencv2/core/utility.hpp>
#include <opencv2/tracking.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "MyForm1.h"

namespace ProjectForm {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Runtime::InteropServices;



	/// <summary>
	/// Riepilogo per MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	private: bool dragging;
	private: Point offset;


	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: aggiungere qui il codice del costruttore.
			//

		}

	protected:
		/// <summary>
		/// Pulire le risorse in uso.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	protected:

	private:
	private: System::Windows::Forms::GroupBox^  groupBox1;
	internal:

	private: System::Windows::Forms::GroupBox^  groupBox2;
	internal: System::Windows::Forms::Button^  button4;
	private:
	internal: System::Windows::Forms::Button^  button5;
	internal: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	internal: System::Windows::Forms::Button^  button1;
	private:
	private: System::Windows::Forms::RadioButton^  radioButton2;
	internal:
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::RadioButton^  radioButton4;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::ToolTip^  toolTip1;
	private: System::Windows::Forms::PictureBox^  pictureBox3;

	private: System::ComponentModel::IContainer^  components;

	internal:

	private:

	protected:

	private:
		/// <summary>
		/// Variabile di progettazione necessaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metodo necessario per il supporto della finestra di progettazione. Non modificare
		/// il contenuto del metodo con l'editor di codice.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->groupBox3);
			this->groupBox1->Location = System::Drawing::Point(42, 162);
			this->groupBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox1->Size = System::Drawing::Size(272, 237);
			this->groupBox1->TabIndex = 51;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Tracking utilizzando la webcam";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 189);
			this->button1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(130, 41);
			this->button1->TabIndex = 52;
			this->button1->Text = L"Avvia il tracking";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton2);
			this->groupBox3->Controls->Add(this->radioButton1);
			this->groupBox3->Location = System::Drawing::Point(22, 77);
			this->groupBox3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox3->Size = System::Drawing::Size(219, 100);
			this->groupBox3->TabIndex = 51;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Numero oggetti da tracciare";
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(8, 55);
			this->radioButton2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(79, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->Text = L"2 oggetti ";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(7, 23);
			this->radioButton1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(79, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"1 oggetto";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::Color::Transparent;
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->groupBox4);
			this->groupBox2->Controls->Add(this->button4);
			this->groupBox2->Controls->Add(this->button5);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Location = System::Drawing::Point(376, 162);
			this->groupBox2->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox2->Size = System::Drawing::Size(296, 237);
			this->groupBox2->TabIndex = 52;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Tracking utilizzando un filmato";
			// 
			// textBox1
			// 
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->textBox1->Location = System::Drawing::Point(24, 41);
			this->textBox1->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(206, 21);
			this->textBox1->TabIndex = 53;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->radioButton3);
			this->groupBox4->Controls->Add(this->radioButton4);
			this->groupBox4->Location = System::Drawing::Point(40, 77);
			this->groupBox4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Padding = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->groupBox4->Size = System::Drawing::Size(216, 100);
			this->groupBox4->TabIndex = 52;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Numero oggetti da tracciare";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(8, 55);
			this->radioButton3->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(79, 17);
			this->radioButton3->TabIndex = 1;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"2 oggetti ";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Checked = true;
			this->radioButton4->Location = System::Drawing::Point(7, 23);
			this->radioButton4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(79, 17);
			this->radioButton4->TabIndex = 0;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"1 oggetto";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(88, 189);
			this->button4->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(130, 41);
			this->button4->TabIndex = 50;
			this->button4->Text = L"Avvia il tracking";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Location = System::Drawing::Point(238, 42);
			this->button5->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(32, 20);
			this->button5->TabIndex = 7;
			this->button5->Text = L"..";
			this->toolTip1->SetToolTip(this->button5, L"Clicca per selezionare il video");
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(21, 25);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(119, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Selezionare il video";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(72, 25);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(131, 124);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 54;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox2->Location = System::Drawing::Point(216, 37);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(430, 101);
			this->pictureBox2->TabIndex = 55;
			this->pictureBox2->TabStop = false;
			// 
			// button2
			// 
			this->button2->AccessibleDescription = L"";
			this->button2->AccessibleName = L"";
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.BackgroundImage")));
			this->button2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Location = System::Drawing::Point(677, 399);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(34, 34);
			this->button2->TabIndex = 56;
			this->button2->Tag = L"";
			this->toolTip1->SetToolTip(this->button2, L"Guida Utente");
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->pictureBox3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox3->Location = System::Drawing::Point(686, 12);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(17, 17);
			this->pictureBox3->TabIndex = 57;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Click += gcnew System::EventHandler(this, &MyForm::pictureBox3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(715, 436);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(4, 3, 4, 3);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Tracking KCF";
			this->TransparencyKey = System::Drawing::Color::Red;
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::MyForm_MouseUp);
			this->groupBox1->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion



	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

		
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->InitialDirectory = "c:\\";
		openFileDialog1->Filter = "Video Files|*.mp4; *.webm; *.avi; *.mkv";
		openFileDialog1->Title = "Seleziona un video";

		
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			this->textBox1->Text = openFileDialog1->FileName;
		}
		if (this->textBox1->Text != "") {
			this->button4->Enabled = true;
		}
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		using namespace cv;
		Rect2d roi;
		Rect2d roi2;
		Mat frame;
	
		Ptr<Tracker> tracker = TrackerKCF::create();
		Ptr<Tracker> tracker2 = TrackerKCF::create();
		
		VideoCapture cap(0);

		if (!cap.isOpened()) { // caso in cui la webcam non sia attiva sul PC
			System::Windows::Forms::DialogResult result; // viene avvisato l'utente
			if ((MessageBox::Show("Impossibile accedere alla webcam, controllare le impostazioni di sicurezza.", "Errore",
				MessageBoxButtons::OK, MessageBoxIcon::Warning) == System::Windows::Forms::DialogResult::OK)) {
				Application::Exit(); // esce dall'applicazione
			}
		}
		// Si chiede all'utente di delimitare il primo oggetto da tracciare
		cap >> frame;
		roi = selectROI("Selezionare il primo oggetto da tracciare", frame);
		cvDestroyWindow("Selezionare il primo oggetto da tracciare");

		if (this->radioButton2->Checked == true) {
			roi2 = selectROI("Selezionare il secondo oggetto da tracciare", frame);
			cvDestroyWindow("Selezionare il secondo oggetto da tracciare");
			if (roi2.width == 0 || roi2.height == 0) 
				cvDestroyWindow("Selezionare il secondo oggetto da tracciare");
		}
		if (roi.width == 0 || roi.height == 0) { 
			cvDestroyWindow("Selezionare il primo oggetto da tracciare");
		}
		
		tracker->init(frame, roi);
		if (this->radioButton2->Checked == true) {
			tracker2->init(frame, roi2); 
		}
		
		for (;;) {
			
			cap >> frame;
			
			if (frame.rows == 0 || frame.cols == 0) {
				destroyAllWindows();
				return;
			}
			
			tracker->update(frame, roi);
			if (this->radioButton2->Checked == true) {
				tracker2->update(frame, roi2);
				rectangle(frame, roi2, Scalar(119, 228, 0), 2, 1);
			}
			rectangle(frame, roi, Scalar(255, 0, 0), 2, 1);
			imshow("Tracker", frame); 
			if (waitKey(1) == 27) {
				destroyAllWindows(); 
				return;
			}
		}
		return;
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		
		std::string video;
		{
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(this->textBox1->Text)).ToPointer();
			video = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}
		using namespace cv;
		Rect2d roi;
		Rect2d roi2;
		Mat frame;
		
		Ptr<Tracker> tracker = TrackerKCF::create();
		Ptr<Tracker> tracker2 = TrackerKCF::create();
		
		VideoCapture cap(video);
		
		cap >> frame;
		roi = selectROI("Selezionare il primo oggetto da tracciare", frame);
		cvDestroyWindow("Selezionare il primo oggetto da tracciare");
		if (this->radioButton3->Checked == true) {
			roi2 = selectROI("Selezionare il secondo oggetto da tracciare", frame);
			cvDestroyWindow("Selezionare il secondo oggetto da tracciare");
			if (roi2.width == 0 || roi2.height == 0) 
				cvDestroyWindow("Selezionare il secondo oggetto da tracciare");
		}
		if (roi.width == 0 || roi.height == 0) { 
			cvDestroyWindow("Selezionare il primo oggetto da tracciare");
		}
		
		tracker->init(frame, roi);
		if (this->radioButton3->Checked == true) {
			tracker2->init(frame, roi2);  
		}
		
		for (;;) {
			
			cap >> frame;
			
			if (frame.rows == 0 || frame.cols == 0) {
				destroyAllWindows();
				return;
			}
			
			tracker->update(frame, roi);
			if (this->radioButton3->Checked == true) {
				tracker2->update(frame, roi2);
				rectangle(frame, roi2, Scalar(119, 228, 0), 2, 1); 	
			}
			rectangle(frame, roi, Scalar(255, 0, 0), 2, 1);
			
			imshow("Tracker", frame);
			if (waitKey(1) == 27) { 
				destroyAllWindows();
				return;
			}
		}
		return;
	}
			 // apre la form per la "guida utante"
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		MyForm1 ^ form = gcnew MyForm1;
		form->ShowDialog();
	}
			 // chiude la form
	private: System::Void pictureBox3_Click(System::Object^  sender, System::EventArgs^  e) {
		Application::Exit();
	}
			 // procedura per spostare la form
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->dragging = false;
	}
	private: System::Void MyForm_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = true;
		this->offset = Point(e->X, e->Y);
	}
	private: System::Void MyForm_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (this->dragging) {
			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	}
	private: System::Void MyForm_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->dragging = false;
	}

	};
}
