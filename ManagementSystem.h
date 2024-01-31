#pragma once

namespace LoginAndSignUp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ManagementSystem
	/// </summary>
	public ref class ManagementSystem : public System::Windows::Forms::Form
	{
	public:
		ManagementSystem(void)
		{
			InitializeComponent();
			//
			//esconder lo de los terminos y condiciones al principio
			pnlTerms->Hide();
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ManagementSystem()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ pnlTerms;

	private: System::Windows::Forms::TextBox^ termstext;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Button^ button3;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(ManagementSystem::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->pnlTerms = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->termstext = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pnlTerms->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 26.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(70, 89);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(144, 42);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sign In";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(74, 207);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(65, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Username";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label3->Location = System::Drawing::Point(74, 296);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(61, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Password";
			this->label3->Click += gcnew System::EventHandler(this, &ManagementSystem::label3_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox1->Location = System::Drawing::Point(77, 232);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(269, 15);
			this->textBox1->TabIndex = 3;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ManagementSystem::textBox1_KeyDown);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(77, 261);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(269, 2);
			this->panel1->TabIndex = 4;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::MenuText;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->textBox2->Location = System::Drawing::Point(77, 325);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(269, 15);
			this->textBox2->TabIndex = 5;
			this->textBox2->UseSystemPasswordChar = true;
			this->textBox2->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &ManagementSystem::textBox2_KeyDown);
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(77, 346);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(269, 2);
			this->panel2->TabIndex = 5;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::SystemColors::Control;
			this->checkBox1->Location = System::Drawing::Point(77, 375);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(114, 18);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"I agree to the";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &ManagementSystem::checkBox1_CheckedChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Verdana", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->label4->Location = System::Drawing::Point(188, 376);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(143, 14);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Terms and Conditions";
			this->label4->Click += gcnew System::EventHandler(this, &ManagementSystem::label4_Click);
			// 
			// button1
			// 
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(77, 425);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 42);
			this->button1->TabIndex = 8;
			this->button1->Text = L"Sign In";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ManagementSystem::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Control;
			this->button2->Location = System::Drawing::Point(191, 425);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(99, 42);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Exit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &ManagementSystem::button2_Click);
			// 
			// pnlTerms
			// 
			this->pnlTerms->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->pnlTerms->Controls->Add(this->button3);
			this->pnlTerms->Controls->Add(this->termstext);
			this->pnlTerms->Controls->Add(this->label5);
			this->pnlTerms->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlTerms->Location = System::Drawing::Point(0, 0);
			this->pnlTerms->Name = L"pnlTerms";
			this->pnlTerms->Size = System::Drawing::Size(752, 524);
			this->pnlTerms->TabIndex = 10;
			this->pnlTerms->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ManagementSystem::ManagementSystem_MouseDown);
			this->pnlTerms->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ManagementSystem::ManagementSystem_MouseMove);
			this->pnlTerms->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ManagementSystem::ManagementSystem_MouseUp);
			// 
			// button3
			// 
			this->button3->FlatAppearance->BorderSize = 2;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Verdana", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->Location = System::Drawing::Point(274, 446);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(99, 42);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Agree";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &ManagementSystem::button3_Click);
			// 
			// termstext
			// 
			this->termstext->BackColor = System::Drawing::Color::Black;
			this->termstext->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->termstext->Font = (gcnew System::Drawing::Font(L"Verdana", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->termstext->ForeColor = System::Drawing::SystemColors::Window;
			this->termstext->Location = System::Drawing::Point(84, 124);
			this->termstext->Multiline = true;
			this->termstext->Name = L"termstext";
			this->termstext->ReadOnly = true;
			this->termstext->Size = System::Drawing::Size(509, 304);
			this->termstext->TabIndex = 1;
			this->termstext->Text = resources->GetString(L"termstext.Text");
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label5->Location = System::Drawing::Point(77, 57);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(364, 38);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Terms and Conditions";
			// 
			// ManagementSystem
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(752, 524);
			this->Controls->Add(this->pnlTerms);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Font = (gcnew System::Drawing::Font(L"Verdana", 24, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(6, 5, 6, 5);
			this->Name = L"ManagementSystem";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"ManagementSystem";
			this->Load += gcnew System::EventHandler(this, &ManagementSystem::ManagementSystem_Load);
			this->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &ManagementSystem::ManagementSystem_MouseDown);
			this->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &ManagementSystem::ManagementSystem_MouseMove);
			this->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &ManagementSystem::ManagementSystem_MouseUp);
			this->pnlTerms->ResumeLayout(false);
			this->pnlTerms->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ManagementSystem_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	//sign in button more functionalities
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		//USERNAME Y PASSWORD DE PRUEBA
		//SE CAMBIARA
		if (textBox1->Text == "admin")
		{
			if (textBox2->Text == "root")
			{
				Application::Exit();
			} else {
				// muestra el mensaje
				MessageBox::Show("Incorrect Password!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		} else {
			MessageBox::Show("Incorrect Username!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	//condition to sign in ONLY if the user agrees to the terms and conditinos
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (checkBox1->Checked == true)
		{
			button1->Enabled = true;
		}
		else {
			button1->Enabled = false;
		}
	}
	//Exit button
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	//boton de "Agree"
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlTerms->Hide();
	}
	//boton para los terms and conditions
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
		pnlTerms->Show();

	}

	//Dragging the form
		   bool dragForm;
		   Point offset;

	private: System::Void ManagementSystem_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//enable dragForm & get mouse position
		dragForm = true;
		offset.X = e->X;
		offset.Y = e->Y;
	}
	private: System::Void ManagementSystem_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		//check whether able to move
		if (dragForm) {
			Point currentScreenPosition = PointToScreen(Point(e->X, e->Y)); //mouse and cursor exact position
			Location = Point(currentScreenPosition.X - offset.Y, currentScreenPosition.Y - offset.X);
		}
	}

	private: System::Void ManagementSystem_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
			//disable dragForm 
		dragForm = false;
	}
	private: System::Void textBox1_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			textBox2->Focus();
		}
	}
	private: System::Void textBox2_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyValue == (int)Keys::Enter) {
			button1->PerformClick();
		}
	}
};
}
