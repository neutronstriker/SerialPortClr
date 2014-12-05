#pragma once


namespace gk {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	int r[9] = {0,0,0,0,0,0,0,0,0};

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
	
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::IO::Ports::SerialPort^  serialPort1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Label^  label13;




	protected: 

	protected: 
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->serialPort1 = (gcnew System::IO::Ports::SerialPort(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// serialPort1
			// 
			this->serialPort1->PortName = L"com1";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(45, 117);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(80, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"OFF";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"COM8", L"COM9"});
			this->comboBox1->Location = System::Drawing::Point(160, 32);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(90, 21);
			this->comboBox1->TabIndex = 2;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(145, 59);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 33);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Connect";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(41, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(209, 13);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Enter Bluetooth Module Serial Port Number";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(34, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Relay";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(80, 101);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(160, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(13, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"2";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(338, 101);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"4";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(247, 101);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(13, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"3";
			this->label6->Click += gcnew System::EventHandler(this, &Form1::label6_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(415, 101);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(13, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"5";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(501, 101);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(13, 13);
			this->label8->TabIndex = 11;
			this->label8->Text = L"6";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(592, 101);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(13, 13);
			this->label9->TabIndex = 12;
			this->label9->Text = L"7";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(131, 117);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(81, 31);
			this->button3->TabIndex = 13;
			this->button3->Text = L"OFF";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(218, 117);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(81, 31);
			this->button4->TabIndex = 14;
			this->button4->Text = L"OFF";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(392, 117);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(81, 31);
			this->button5->TabIndex = 15;
			this->button5->Text = L"OFF";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(305, 117);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(81, 31);
			this->button6->TabIndex = 16;
			this->button6->Text = L"OFF";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(479, 117);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(81, 31);
			this->button7->TabIndex = 17;
			this->button7->Text = L"OFF";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Form1::button7_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(564, 117);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(81, 31);
			this->button8->TabIndex = 18;
			this->button8->Text = L"OFF";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Form1::button8_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(651, 117);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(81, 31);
			this->button9->TabIndex = 19;
			this->button9->Text = L"OFF";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Form1::button9_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Location = System::Drawing::Point(504, -1);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(262, 99);
			this->groupBox1->TabIndex = 20;
			this->groupBox1->TabStop = false;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(673, 101);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(13, 13);
			this->label10->TabIndex = 21;
			this->label10->Text = L"8";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::HotTrack;
			this->label11->Location = System::Drawing::Point(24, 18);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(356, 52);
			this->label11->TabIndex = 22;
			this->label11->Text = L"Bluetooth Controlled Home Automation \r\nUsing PC and Android";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Arial Black", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(220, 70);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(253, 18);
			this->label12->TabIndex = 23;
			this->label12->Text = L"Desgined By Srinivas and Pradeep";
			// 
			// button10
			// 
			this->button10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F));
			this->button10->Location = System::Drawing::Point(218, 154);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(307, 35);
			this->button10->TabIndex = 24;
			this->button10->Text = L"OFF";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Form1::button10_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(348, 192);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(69, 16);
			this->label13->TabIndex = 25;
			this->label13->Text = L"All Relays";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(774, 212);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Bluetooth Home Automation";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:System::Void SendPort(String^ str,int button)
			{
				 if(serialPort1->IsOpen)
				 {

				 serialPort1->Write(str);
					r[button] = ~r[button];
				
				 }
				 else
					 MessageBox::Show("Port is Disconnected, First Connect to A Serial Port","Warning");
				
			}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
			
			if(r[0] == 0)
			{
				
				SendPort("A",0);
				if(r[0] != 0)
				button1->Text = "ON"; 
			}
			else 
			{
				SendPort("a",0);
				if(r[0] == 0)
				button1->Text = "OFF";
			}
	
			
			
			;

			 }
	

	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				
			 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			 
		
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 
			 if(serialPort1->IsOpen)
			 {
				serialPort1->Close();
				button2->Text = "Connect"; 
			 }
			 else
			 {
				String^ str = comboBox1->Text;
				button2->Text = "Disconnect";
				serialPort1->PortName = str;
				serialPort1->Open();
			 }
				 
	
				
		 }


		
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(r[1] == 0)
			{
				
				SendPort("B",1);
				if(r[1] != 0)
				button3->Text = "ON"; 
			}
			else 
			{
				SendPort("b",1);
				if(r[1] == 0)
					button3->Text = "OFF";
			}
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(r[2] == 0)
			{
				
				SendPort("C",2);
				if(r[2] != 0)
				button4->Text = "ON"; 
			}
			else 
			{
				SendPort("c",2);
				if(r[2] == 0)
				button4->Text = "OFF";
			}
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(r[3] == 0)
			{
				
				SendPort("D",3);
				if(r[3] != 0)
				button6->Text = "ON"; 
			}
			else 
			{
				SendPort("d",3);
				if(r[3] == 0)
				button6->Text = "OFF";
			}
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(r[4] == 0)
			{
				
				SendPort("E",4);
				if(r[4] != 0)
				button5->Text = "ON"; 
			}
			else 
			{
				SendPort("e",4);
				if(r[4] == 0)
				button5->Text = "OFF";
			}
		 }
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(r[5] == 0)
			{
				
				SendPort("F",5);
				if(r[5] != 0)
				button7->Text = "ON"; 
			}
			else 
			{
				SendPort("f",5);
				if(r[5] == 0)
				button7->Text = "OFF";
			}
		 }
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(r[6] == 0)
			{
				
				SendPort("G",6);
				if(r[6] != 0)
				button8->Text = "ON"; 
			}
			else 
			{
				SendPort("g",6);
				if(r[6] == 0)
				button8->Text = "OFF";
			}
		 }
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(r[7] == 0)
			{
				
				SendPort("H",7);
				if(r[7] != 0)
				button9->Text = "ON"; 
			}
			else 
			{
				SendPort("h",7);
				if(r[7] == 0)
				button9->Text = "OFF";
			}
		 }
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {

			 if(r[8] == 0)
			{
				
				SendPort("I",8);
				if(r[8] != 0)
				button10->Text = "ON"; 
			}
			else 
			{
				SendPort("i",8);
				if(r[8] == 0)
				button10->Text = "OFF";
			}
		 }
};
}

