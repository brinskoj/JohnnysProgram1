/**********************************************************************
*********************************************************************** 
***********************************************************************
***																	***
***						ID INFORMATION								***
***                                                        			***
***   Programmers				:			Johnny Brinsko		 	***
***   Assignment #				:   		PROGRAM 1			   	***
***   Assignment Name			:			It's About Time			***
***   Course # and Title		:	   		CISC 192 - C++			***
***   Class Meeting Time		:	   		TTh 9:35 - 12:40		***
***   Instructor				:			Professor Forman		***
***   Hours						:			21						***
***   Difficulty				:			6						***
***   Completion Date			:			10/23/2012				***
***   Project Name				:  			It's About Time		 	***	 
***																	***
***********************************************************************
***********************************************************************
***                                       							***
***						PROGRAM DESCRIPTION              			***
***																	***
***	 
***                                                         		***
***********************************************************************
***********************************************************************
***																	***
***					Event-Defined Function List						***
***                                                         		***
***		
***																	***
***********************************************************************
***********************************************************************
***																	***
***					Custom-Defined Function List					***
***                                                         		***
***		
***		
***																	***
***********************************************************************
***********************************************************************
***																	***
***                         CREDITS				                    ***
***                                                         		***
***   		Thanks for assistance and inspiration from:        		***
***                                                         		***
***				   Professor Forman and Tim							***
***                                                         		***
***   		Thanks for the opportunity to assist and inspire:     	***
***								                               		***
***				   Professor Forman and Tim							***
***                                                         		***
***********************************************************************
***********************************************************************
***																	***
***						      MEDIA				                    ***
***																	***
***		
***																	***
***********************************************************************
***********************************************************************
**********************************************************************/

#pragma once

namespace JohnnysProgram1_a {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
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
	private: System::Windows::Forms::Button^  buttonStart;
	private: System::Windows::Forms::Label^  labelTitle;
	private: System::Windows::Forms::Label^  labelDescription;
	private: System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::Button^  buttonToLogin;
	private: System::Windows::Forms::PictureBox^  pictureBoxDateTime;
	private: System::Windows::Forms::Timer^  timerDateTime;
	private: System::Windows::Forms::TextBox^  textBoxPassword;
	private: System::Windows::Forms::TextBox^  textBoxAccount;
	private: System::Windows::Forms::Label^  labelAccount;
	private: System::Windows::Forms::Label^  labelPassword;
	private: System::Windows::Forms::Button^  buttonLogin;
	private: System::Windows::Forms::Label^  labelShowAcctNum;
	private: System::Windows::Forms::Label^  labelShowPassword;
	private: System::Windows::Forms::Label^  labelEnterUserName;
	private: System::Windows::Forms::TextBox^  textBoxUserName;
	private: System::Windows::Forms::Label^  labelEnterTime;
	private: System::Windows::Forms::TextBox^  textBoxTime;
	private: System::Windows::Forms::Button^  buttonSubmitTime;
	private: System::Windows::Forms::Label^  labelTime;
	private: System::Windows::Forms::Timer^  timerPause;
	private: System::Windows::Forms::PictureBox^  pictureBoxClock;



	private: System::ComponentModel::IContainer^  components;
	protected: 

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
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->labelTitle = (gcnew System::Windows::Forms::Label());
			this->labelDescription = (gcnew System::Windows::Forms::Label());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->buttonToLogin = (gcnew System::Windows::Forms::Button());
			this->pictureBoxDateTime = (gcnew System::Windows::Forms::PictureBox());
			this->timerDateTime = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAccount = (gcnew System::Windows::Forms::TextBox());
			this->labelAccount = (gcnew System::Windows::Forms::Label());
			this->labelPassword = (gcnew System::Windows::Forms::Label());
			this->buttonLogin = (gcnew System::Windows::Forms::Button());
			this->labelShowAcctNum = (gcnew System::Windows::Forms::Label());
			this->labelShowPassword = (gcnew System::Windows::Forms::Label());
			this->labelEnterUserName = (gcnew System::Windows::Forms::Label());
			this->textBoxUserName = (gcnew System::Windows::Forms::TextBox());
			this->labelEnterTime = (gcnew System::Windows::Forms::Label());
			this->textBoxTime = (gcnew System::Windows::Forms::TextBox());
			this->buttonSubmitTime = (gcnew System::Windows::Forms::Button());
			this->labelTime = (gcnew System::Windows::Forms::Label());
			this->timerPause = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBoxClock = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxDateTime))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxClock))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonStart
			// 
			this->buttonStart->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->buttonStart->Location = System::Drawing::Point(594, 527);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(75, 23);
			this->buttonStart->TabIndex = 0;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &Form1::buttonStart_Click);
			// 
			// labelTitle
			// 
			this->labelTitle->BackColor = System::Drawing::Color::Transparent;
			this->labelTitle->Font = (gcnew System::Drawing::Font(L"Magneto", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelTitle->ForeColor = System::Drawing::Color::Crimson;
			this->labelTitle->Location = System::Drawing::Point(159, 13);
			this->labelTitle->Name = L"labelTitle";
			this->labelTitle->Size = System::Drawing::Size(1093, 86);
			this->labelTitle->TabIndex = 1;
			this->labelTitle->Text = L"Welcome to Johnny\'s Intergalactic Internet Service on Intergalactic Travel!";
			this->labelTitle->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelTitle->Visible = false;
			// 
			// labelDescription
			// 
			this->labelDescription->BackColor = System::Drawing::Color::DarkOrange;
			this->labelDescription->Font = (gcnew System::Drawing::Font(L"Segoe Print", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelDescription->Location = System::Drawing::Point(111, 147);
			this->labelDescription->Name = L"labelDescription";
			this->labelDescription->Size = System::Drawing::Size(1080, 247);
			this->labelDescription->TabIndex = 2;
			this->labelDescription->Visible = false;
			// 
			// buttonExit
			// 
			this->buttonExit->Location = System::Drawing::Point(916, 397);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(275, 97);
			this->buttonExit->TabIndex = 3;
			this->buttonExit->Text = L"Exit";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Visible = false;
			this->buttonExit->Click += gcnew System::EventHandler(this, &Form1::buttonExit_Click);
			// 
			// buttonToLogin
			// 
			this->buttonToLogin->Location = System::Drawing::Point(635, 397);
			this->buttonToLogin->Name = L"buttonToLogin";
			this->buttonToLogin->Size = System::Drawing::Size(275, 97);
			this->buttonToLogin->TabIndex = 4;
			this->buttonToLogin->Text = L"Continue";
			this->buttonToLogin->UseVisualStyleBackColor = true;
			this->buttonToLogin->Visible = false;
			this->buttonToLogin->Click += gcnew System::EventHandler(this, &Form1::buttonToLogin_Click);
			// 
			// pictureBoxDateTime
			// 
			this->pictureBoxDateTime->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(139)), 
				static_cast<System::Int32>(static_cast<System::Byte>(58)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->pictureBoxDateTime->Location = System::Drawing::Point(807, 500);
			this->pictureBoxDateTime->Name = L"pictureBoxDateTime";
			this->pictureBoxDateTime->Size = System::Drawing::Size(445, 50);
			this->pictureBoxDateTime->TabIndex = 5;
			this->pictureBoxDateTime->TabStop = false;
			this->pictureBoxDateTime->Visible = false;
			// 
			// timerDateTime
			// 
			this->timerDateTime->Interval = 1000;
			this->timerDateTime->Tick += gcnew System::EventHandler(this, &Form1::timerDateTime_Tick);
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(994, 236);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(200, 38);
			this->textBoxPassword->TabIndex = 6;
			this->textBoxPassword->Visible = false;
			// 
			// textBoxAccount
			// 
			this->textBoxAccount->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBoxAccount->Location = System::Drawing::Point(994, 192);
			this->textBoxAccount->Name = L"textBoxAccount";
			this->textBoxAccount->Size = System::Drawing::Size(200, 38);
			this->textBoxAccount->TabIndex = 7;
			this->textBoxAccount->Visible = false;
			// 
			// labelAccount
			// 
			this->labelAccount->BackColor = System::Drawing::Color::Transparent;
			this->labelAccount->Font = (gcnew System::Drawing::Font(L"Magneto", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelAccount->ForeColor = System::Drawing::Color::Cyan;
			this->labelAccount->Location = System::Drawing::Point(638, 192);
			this->labelAccount->Name = L"labelAccount";
			this->labelAccount->Size = System::Drawing::Size(350, 38);
			this->labelAccount->TabIndex = 8;
			this->labelAccount->Text = L"Account Number:";
			this->labelAccount->Visible = false;
			// 
			// labelPassword
			// 
			this->labelPassword->BackColor = System::Drawing::Color::Transparent;
			this->labelPassword->Font = (gcnew System::Drawing::Font(L"Magneto", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelPassword->ForeColor = System::Drawing::Color::Cyan;
			this->labelPassword->Location = System::Drawing::Point(638, 236);
			this->labelPassword->Name = L"labelPassword";
			this->labelPassword->Size = System::Drawing::Size(350, 38);
			this->labelPassword->TabIndex = 9;
			this->labelPassword->Text = L"Password:";
			this->labelPassword->Visible = false;
			// 
			// buttonLogin
			// 
			this->buttonLogin->Location = System::Drawing::Point(635, 397);
			this->buttonLogin->Name = L"buttonLogin";
			this->buttonLogin->Size = System::Drawing::Size(275, 97);
			this->buttonLogin->TabIndex = 10;
			this->buttonLogin->Text = L"Login";
			this->buttonLogin->UseVisualStyleBackColor = true;
			this->buttonLogin->Visible = false;
			this->buttonLogin->Click += gcnew System::EventHandler(this, &Form1::buttonLogin_Click);
			// 
			// labelShowAcctNum
			// 
			this->labelShowAcctNum->BackColor = System::Drawing::Color::Transparent;
			this->labelShowAcctNum->Font = (gcnew System::Drawing::Font(L"Magneto", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelShowAcctNum->ForeColor = System::Drawing::Color::Lime;
			this->labelShowAcctNum->Location = System::Drawing::Point(994, 192);
			this->labelShowAcctNum->Name = L"labelShowAcctNum";
			this->labelShowAcctNum->Size = System::Drawing::Size(266, 38);
			this->labelShowAcctNum->TabIndex = 11;
			this->labelShowAcctNum->Visible = false;
			// 
			// labelShowPassword
			// 
			this->labelShowPassword->BackColor = System::Drawing::Color::Transparent;
			this->labelShowPassword->Font = (gcnew System::Drawing::Font(L"Magneto", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelShowPassword->ForeColor = System::Drawing::Color::Lime;
			this->labelShowPassword->Location = System::Drawing::Point(994, 236);
			this->labelShowPassword->Name = L"labelShowPassword";
			this->labelShowPassword->Size = System::Drawing::Size(266, 38);
			this->labelShowPassword->TabIndex = 12;
			this->labelShowPassword->Visible = false;
			// 
			// labelEnterUserName
			// 
			this->labelEnterUserName->BackColor = System::Drawing::Color::LightCoral;
			this->labelEnterUserName->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelEnterUserName->ForeColor = System::Drawing::Color::Navy;
			this->labelEnterUserName->Location = System::Drawing::Point(710, 99);
			this->labelEnterUserName->Name = L"labelEnterUserName";
			this->labelEnterUserName->Size = System::Drawing::Size(278, 38);
			this->labelEnterUserName->TabIndex = 13;
			this->labelEnterUserName->Text = L"Enter your name:";
			this->labelEnterUserName->Visible = false;
			// 
			// textBoxUserName
			// 
			this->textBoxUserName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBoxUserName->Location = System::Drawing::Point(1000, 99);
			this->textBoxUserName->Name = L"textBoxUserName";
			this->textBoxUserName->Size = System::Drawing::Size(194, 35);
			this->textBoxUserName->TabIndex = 14;
			this->textBoxUserName->Visible = false;
			// 
			// labelEnterTime
			// 
			this->labelEnterTime->BackColor = System::Drawing::Color::LightCoral;
			this->labelEnterTime->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelEnterTime->ForeColor = System::Drawing::Color::Navy;
			this->labelEnterTime->Location = System::Drawing::Point(710, 147);
			this->labelEnterTime->Name = L"labelEnterTime";
			this->labelEnterTime->Size = System::Drawing::Size(278, 173);
			this->labelEnterTime->TabIndex = 15;
			this->labelEnterTime->Text = L"Enter start time of your internet service by hour (0-23) and minute (0-59):";
			this->labelEnterTime->Visible = false;
			// 
			// textBoxTime
			// 
			this->textBoxTime->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBoxTime->Location = System::Drawing::Point(1000, 277);
			this->textBoxTime->Name = L"textBoxTime";
			this->textBoxTime->Size = System::Drawing::Size(194, 40);
			this->textBoxTime->TabIndex = 16;
			this->textBoxTime->Visible = false;
			// 
			// buttonSubmitTime
			// 
			this->buttonSubmitTime->Location = System::Drawing::Point(635, 397);
			this->buttonSubmitTime->Name = L"buttonSubmitTime";
			this->buttonSubmitTime->Size = System::Drawing::Size(275, 97);
			this->buttonSubmitTime->TabIndex = 17;
			this->buttonSubmitTime->Text = L"Submit";
			this->buttonSubmitTime->UseVisualStyleBackColor = true;
			this->buttonSubmitTime->Visible = false;
			this->buttonSubmitTime->Click += gcnew System::EventHandler(this, &Form1::buttonSubmitTime_Click);
			// 
			// labelTime
			// 
			this->labelTime->BackColor = System::Drawing::Color::LightCoral;
			this->labelTime->Font = (gcnew System::Drawing::Font(L"Consolas", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->labelTime->ForeColor = System::Drawing::Color::Navy;
			this->labelTime->Location = System::Drawing::Point(12, 442);
			this->labelTime->Name = L"labelTime";
			this->labelTime->Size = System::Drawing::Size(212, 108);
			this->labelTime->TabIndex = 18;
			this->labelTime->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->labelTime->Visible = false;
			// 
			// timerPause
			// 
			this->timerPause->Interval = 1000;
			this->timerPause->Tick += gcnew System::EventHandler(this, &Form1::timerPause_Tick);
			// 
			// pictureBoxClock
			// 
			this->pictureBoxClock->BackColor = System::Drawing::Color::Transparent;
			this->pictureBoxClock->Location = System::Drawing::Point(307, 170);
			this->pictureBoxClock->Name = L"pictureBoxClock";
			this->pictureBoxClock->Size = System::Drawing::Size(220, 220);
			this->pictureBoxClock->TabIndex = 19;
			this->pictureBoxClock->TabStop = false;
			this->pictureBoxClock->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1264, 562);
			this->Controls->Add(this->pictureBoxClock);
			this->Controls->Add(this->labelTime);
			this->Controls->Add(this->buttonSubmitTime);
			this->Controls->Add(this->textBoxTime);
			this->Controls->Add(this->labelEnterTime);
			this->Controls->Add(this->textBoxUserName);
			this->Controls->Add(this->labelEnterUserName);
			this->Controls->Add(this->labelShowPassword);
			this->Controls->Add(this->labelShowAcctNum);
			this->Controls->Add(this->buttonLogin);
			this->Controls->Add(this->labelPassword);
			this->Controls->Add(this->labelAccount);
			this->Controls->Add(this->textBoxAccount);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->pictureBoxDateTime);
			this->Controls->Add(this->buttonToLogin);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->labelTitle);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->labelDescription);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"Form1";
			this->Text = L"Johnnys Program 1: It\'s About Time";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxDateTime))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBoxClock))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

///////////////////////////////////////////////////////////////
//			GLOBAL CONSTANTS
///////////////////////////////////////////////////////////////

	static const String^ PROGRAMMERS_NAME = "Johnny B";

///////////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////////
//		DECLARE GLOBAL/INSTANCE VARIABLES 
///////////////////////////////////////////////////////////////

	String^					acctNum;
	String^					password;
	String^					userName;
	int						counter;
	static	int				countWait = 4;
	static	const	int		xCenter = 110;
	static	const	int		yCenter = 110;
	Drawing::Font^			daFont;
	Drawing::Brush^			daBrush;
	Drawing::Graphics^		g;

///////////////////////////////////////////////////////////////

/**************************************************************
***************************************************************
***                                                			***
***    EVENT-DRIVEN FUNCTION DECLARATIONS AND DEFINITIONS   ***
***                                                			***
***************************************************************
**************************************************************/

/**************************************************************
***                                                			***
***    buttonExit_Click										***
***                                                			***
**************************************************************/

private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 buttonExit->Visible = false;
			 buttonSubmitTime->Visible = false;
			 labelTitle->Visible = false;
			 labelEnterUserName->Visible = false;
			 labelEnterTime->Visible = false;
			 textBoxUserName->Visible = false;
			 textBoxTime->Visible = false;
			 pictureBoxClock->Visible = false;
			 labelTime->Visible = false;
			 timerDateTime->Enabled = false;
			 pictureBoxDateTime->Visible = false;
			 this->BackgroundImage = Image::FromFile("img/blackedout.png");
			 farewell();
		 }

/**************************************************************
***                                                			***
***    buttonLogin_Click									***
***                                                			***
**************************************************************/

	private: System::Void buttonLogin_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
			 acctNum			= "Your Mom";
			 String^ password	= "Goes To College";
			 counter			= 1;


			 buttonLogin->Visible = false;
			 textBoxAccount->Visible = false;
			 textBoxPassword->Visible = false;
			 labelShowAcctNum->Visible = true;
			 labelShowPassword->Visible = true;
			 labelTitle->Text = "Thank you for entering:";
			 acctNum = getAcctNum();
			 getPassword(password);
			 timerPause->Enabled = true;	// timer calls echoCredentials() for five seconds, then deploys setupClock()
			 echoCredentials(acctNum, password);
			 
		 }

/**************************************************************
***                                                			***
***    buttonStart_Click									***
***                                                			***
**************************************************************/

	private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 timerDateTime->Enabled = true;
			 buttonStart->Visible = false;
			 welcome();
			 pictureBoxDateTime->Visible = true;
			 buttonExit->Visible = true;
			 buttonToLogin->Visible = true;
		 }

/**************************************************************
***                                                			***
***    buttonSubmitTime_Click								***
***                                                			***
**************************************************************/

	private: System::Void buttonSubmitTime_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 
			 int		usersTime,
						hour = 99,
						minute = 88;

			 labelTime->Visible = true;
			 pictureBoxClock->Visible = true;
			 userName = textBoxUserName->Text;
			 int::TryParse(textBoxTime->Text, usersTime);
			 parseTime(usersTime, hour, minute);
			 labelTitle->BackColor = Color::WhiteSmoke;
			 labelTitle->Text = "Thank you, " + userName + ", for entering a time of " + usersTime.ToString()
								+ ". Your Internet will turn on at " + hour.ToString() + ":" + minute.ToString();
			 drawTime(hour, minute, "Consolas", 48);
			 drawClock(hour, minute);
		 }

/**************************************************************
***                                                			***
***    buttonToLogin_Click									***
***                                                			***
**************************************************************/

	private: System::Void buttonToLogin_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			 buttonToLogin->Visible = false;
			 buttonLogin->Visible = true;
			 labelDescription->Visible = false;
			 labelAccount->Visible = true;
			 labelPassword->Visible = true;
			 labelTitle->Text = "Please enter your Login credentials";
			 labelAccount->Text = "Account Number:";
			 labelPassword->Text = "Password:";
			 textBoxAccount->Visible = true;
			 textBoxPassword->Visible = true;
			 textBoxAccount->Focus();
		 }

/**************************************************************
***                                                			***
***    timerPause_Tick										***
***                                                			***
***		Wait five seconds before hiding Exit button and		***
***		 then calls setupClock function.					***
***                                                			***
**************************************************************/

	private: System::Void timerPause_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {

			 if (counter >= 5)
			 {
				 timerPause->Enabled = false;
				 setupClock();
			 }

			 else
			 {
				 labelTitle->Text = "Please wait for " + countWait + " seconds";
				 counter++;
				 countWait--;
			 }
		 }

/**************************************************************
***                                                			***
***    timerShowDateTime_Tick								***
***                                                			***
***		Calls showDateTime function every second.			***
***                                                			***
**************************************************************/

	private: System::Void timerDateTime_Tick(System::Object^  sender, System::EventArgs^  e) 
		 {
			 showDateTime();
		 }

/**************************************************************
***************************************************************
***                                                			***
***				END EVENT-DRIVEN FUNCTIONS					***
***                                                			***
***************************************************************
**************************************************************/

/**************************************************************
***************************************************************
***                                                			***
***  CUSTOM-DEFINED FUNCTION DECLARATIONS AND DEFINITIONS   ***
***                                                			***
***************************************************************
**************************************************************/
	
/**************************************************************
***                                                			***
***		countdown											***
***                                                			***
***		Calls playCountdown function. Calls					***
***		 johnnysDraw[0-3] functions, starting with 3 in		***
***		 descending order. Uses for-loop to start the		***
***		 number in top left at one-fourth the size. The		***
***		 number will move toward the center, getting bigger	***
***		 in increments of .25 scaling factor.				***
***                                                			***
**************************************************************/

	Void countdown()
	{
		//g = this->CreateGraphics();
		//g->DrawImage(Image::FromFile("img/blackedout.png"), 0, 0, 1268, 562);
		this->BackColor = Color::Black;
		playCountdown();
		Threading::Thread::Sleep(500);		// Wait for audio to buffer

		//johnnysDraw3();
		for (float i = 4; i >= 1; i -= .25)
		{
			johnnysDraw3(i);
			Threading::Thread::Sleep( 50 );
			this->Refresh();
			//g->DrawImage(Image::FromFile("img/blackedout.png"), 0, 0, 1268, 562);
		}
		johnnysDraw3(1);
		Threading::Thread::Sleep(300);
		this->Refresh();
		//g->DrawImage(Image::FromFile("img/blackedout.png"), 0, 0, 1268, 562);

		//johnnysDraw2();
		for (float i = 4; i >= 1; i -= .25)
		{
			johnnysDraw2(i);
			Threading::Thread::Sleep( 50 );
			this->Refresh();
			//g->DrawImage(Image::FromFile("img/blackedout.png"), 0, 0, 1268, 562);
		}
		johnnysDraw2(1);
		Threading::Thread::Sleep(300);
		this->Refresh();
		//g->DrawImage(Image::FromFile("img/blackedout.png"), 0, 0, 1268, 562);

		//johnnysDraw1();
		for (float i = 4; i >= 1; i -= .25)
		{
			johnnysDraw1(i);
			Threading::Thread::Sleep( 50 );
			this->Refresh();
			//g->DrawImage(Image::FromFile("img/blackedout.png"), 0, 0, 1268, 562);
		}
		johnnysDraw1(1);
		Threading::Thread::Sleep(300);
		this->Refresh();
		//g->DrawImage(Image::FromFile("img/blackedout.png"), 0, 0, 1268, 562);
		
		//johnnysDraw0();
		for (float i = 4; i >= 1; i -= .25)
		{
			johnnysDraw0(i);
			Threading::Thread::Sleep( 50 );
			this->Refresh();
			//g->DrawImage(Image::FromFile("img/blackedout.png"), 0, 0, 1268, 562);
		}
		johnnysDraw0(1);
		Threading::Thread::Sleep(300);
		this->Refresh();
		//g->DrawImage(Image::FromFile("img/blackedout.png"), 0, 0, 1268, 562);

		g->DrawImage(Image::FromFile("img/Bombexplosion.jpg"), 0, 0, 1268, 562);
		Threading::Thread::Sleep(3000);
	}

/**************************************************************
***                                                			***
***    drawClock											***
***                                                			***
***		
***                                                			***
**************************************************************/

	Void drawClock(int hour, int minute)
	{
		pictureBoxClock->Refresh();
		drawMinute(minute);
		drawHour(hour, minute);
	}

	Void drawHour(int hour, int minute)
	{
		
		int		hourLength,
				x,
				y;
		double	angle;
		Pen^	bluePen;


		g = pictureBoxClock->CreateGraphics();
		angle = (hour + minute / 60.) * (360 / 12);
		hourLength = 45;
		x = xCenter + hourLength * Math::Sin(angle * Math::PI / 180);
		y = yCenter - hourLength * Math::Cos(angle * Math::PI / 180);
		
		bluePen = gcnew Pen(Color::Blue, 3);
		g->DrawLine(bluePen, xCenter, yCenter, x, y);
	}

	Void drawMinute(int minute)
	{
		
		int		hourLength,
				x,
				y;
		double	angle;
		Pen^	redPen;


		g = pictureBoxClock->CreateGraphics();
		angle = minute * 6.;
		hourLength = 80;
		x = xCenter + hourLength * Math::Sin(angle * Math::PI / 180);
		y = yCenter - hourLength * Math::Cos(angle * Math::PI / 180);
		
		redPen = gcnew Pen(Color::Red, 3);
		g->DrawLine(redPen, xCenter, yCenter, x, y);
	}

/**************************************************************
***                                                			***
***    drawHorizontal										***
***                                                			***
***		Draws a red horizontal line at specified length,	***
***		 starting at specified column and row. Scale will	***
***		 determine how small to draw the line.				***
***                                                			***
**************************************************************/

	Void drawHorizontal(int x, int y, int length, float scale)
	{
		///////////////////////////////////////////////////////////////
		//		DECLARE GLOBAL/INSTANCE VARIABLES 
		///////////////////////////////////////////////////////////////
		Pen^	daPen	=	gcnew Pen( Color::Red, 4 );
		///////////////////////////////////////////////////////////////

		g = this->CreateGraphics();
		g->DrawLine( daPen, x / scale, y / scale, (x + length) / scale, y / scale );
	}

	Void drawTime(int hour, int minute, String^ fontName, int fontSize)
	{
		labelTime->Font = (gcnew System::Drawing::Font(L""+fontName+"", fontSize, System::Drawing::FontStyle::Regular, 
							System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
		labelTime->Text = hour.ToString() + ":" + minute.ToString();
	}

/**************************************************************
***                                                			***
***    drawVertical											***
***                                                			***
***		Draws a red vertical line at specified length,		***
***		 starting at specified column and row. Scale will	***
***		 determine how small to draw the line.				***
***                                                			***
**************************************************************/

	Void drawVertical(int x, int y, int length, float scale)
	{
		///////////////////////////////////////////////////////////////
		//		DECLARE GLOBAL/INSTANCE VARIABLES 
		///////////////////////////////////////////////////////////////
		Pen^	daPen	=	gcnew Pen( Color::Red, 4  );
		///////////////////////////////////////////////////////////////

		g = this->CreateGraphics();
		g->DrawLine( daPen, x / scale, y / scale, x / scale, (y + length) / scale );
	}

/**************************************************************
***                                                			***
***    echoCredentials										***
***                                                			***
***		
***                                                			***
**************************************************************/
		
	Void echoCredentials(String^ acctNum, String^ password)
	{
		labelShowAcctNum->Text = acctNum;
		labelShowPassword->Text = password;
	}

	Void farewell()
	{
		countdown();
		MessageBox::Show( "Thank you, " + userName + ", for employing " + PROGRAMMERS_NAME + "'s Internet Service.", "Thank you");
		MessageBox::Show( 
				"*************************************************************************************\n"
				 "**************************************** ID INFO ************************************\n\n"
				 "	Programmer		:	Johnny Brinsko\n"
				 "	Assignment #		:	PROGRAM 1\n"
				 "	Assignment Name		:	It's About Time\n"
				 "	Course # and Title		:	CISC 192  - C++\n"
				 "	Class Meeting Time		:	TTh 9:35 - 12:40\n"
				 "	Instructor			:	Professor Forman\n"
				 "	Hours			:	21\n"
				 "	Difficulty			:	6\n"
				 "	Completion Date		:	10/23/2012\n"
				 "	Project Name		:	It's About Time\n\n"
				 "**************************************************************************************\n"
				 "**************************************** CREDITS ************************************\n\n"
				 "	Thanks to Professor Forman, Tim, Jeremy, and Gerardo \n"
				 "		for completing the learning triangle together\n\n"
				 "*************************************************************************************\n"
				 "**************************************** MEDIA *************************************\n\n"
				 "Dali clocks:\n"
				 "http://fingerfood.typepad.com/.a/6a012875949499970c0120a737211e970b-800wi"
				 "\n\nBomb explosions picture:\n"
				 "http://www.icie.us/web/wp-content/uploads/2012/08/Bomb-explosion.jpg"
				 "\n\nTime ticking audio:\n"
				 "http://www.denhaku.com/r_box/sr16/sr16perc/histicks.wav"
				 "\n\nClock face:\n"
				 "http://i.telegraph.co.uk/multimedia/archive/00958/money-graphics-2005_958909a.jpg"
				 "\n\nApollo 11 launch countdown audio:\n"
				 "http://www.youtube.com/watch?v=zGNryrsT7OI"
				 "\n\nBomb explosion audio:\n"
				 "http://www.youtube.com/watch?v=wxRLWHYmftQ");
		MessageBox::Show(
				 "*************************************************************************************\n"
				 "************************************** # OF STARS **********************************\n\n"
				 "10 stars\n\n"
				 "*************************************************************************************\n"
				 "**************************************** STARS *************************************\n\n"
				 "1. Demo steps #1 - #4 by 16 Oct\n"
				 "2. Demo steps #1 - #5 by 18 Oct\n"
				 "3. Include in the story board your tentative plans for all your STARS\n"
				 "4. Include all the graphic images, fonts, colors, etc. you plan to use\n"
				 "5. Continuously display the current time\n"
				 "6. Throughout the program, play the sound of a clock ticking in the background\n"
				 "7. Create a colorful \"time\" motif using different images throughout your program\n"
				 );
			Close();
	}

/**************************************************************
***                                                			***
***    getAcctNum											***
***                                                			***
***		Returns string value located in textBoxAccount		***
***                                                			***
**************************************************************/

	String^ getAcctNum()
	{
		return textBoxAccount->Text;
	}

/**************************************************************
***                                                			***
***    getPassword											***
***                                                			***
***		Uses call-by-reference to define thePassword as		***
***		 text input from textBoxPassword					***
***                                                			***
**************************************************************/

	Void getPassword(String^& thePassword)
	{
		thePassword = textBoxPassword->Text;
	}

/******************************************************************************
johnnysDraw3 to johnnysDraw0 (descending order)

	Draws specified number using drawHorizontal and drawVertical functions.
	Creates a double line for each whole line.
	Takes into account the specified size with scale parameter.


Comments to the right of drawHorizontal and drawVertical functions 
signify which segment of the numberal it draws

			1
		---------
		|		|
	   4|		|2
		|	3	|
		---------
		|		|
	   6|		|5
		|	7	|
		---------

*******************************************************************************/

	Void johnnysDraw3(float scale)
	{
		drawHorizontal(559, 35, 150, scale);	//1
		drawHorizontal(559, 40, 150, scale);	//1
		drawVertical(711, 42, 150, scale);		//2
		drawVertical(716, 42, 150, scale);		//2
		drawHorizontal(559, 194, 150, scale);	//3
		drawHorizontal(559, 199, 150, scale);	//3
		drawVertical(711, 201, 150, scale);		//5
		drawVertical(716, 201, 150, scale);		//5
		drawHorizontal(559, 353, 150, scale);	//7
		drawHorizontal(559, 358, 150, scale);	//7
	}

	Void johnnysDraw2(float scale)
	{
		drawHorizontal(559, 35, 150, scale);	//1
		drawHorizontal(559, 40, 150, scale);	//1
		drawVertical(711, 42, 150, scale);		//2
		drawVertical(716, 42, 150, scale);		//2
		drawHorizontal(559, 194, 150, scale);	//3
		drawHorizontal(559, 199, 150, scale);	//3
		drawVertical(552, 201, 150, scale);		//6
		drawVertical(557, 201, 150, scale);		//6
		drawHorizontal(559, 353, 150, scale);	//7
		drawHorizontal(559, 358, 150, scale);	//7
	}

	Void johnnysDraw1(float scale)
	{
		drawVertical(711, 42, 150, scale);		//2
		drawVertical(716, 42, 150, scale);		//2
		drawVertical(711, 201, 150, scale);		//5
		drawVertical(716, 201, 150, scale);		//5
	}

	Void johnnysDraw0(float scale)
	{
		drawHorizontal(559, 35, 150, scale);	//1
		drawHorizontal(559, 40, 150, scale);	//1
		drawVertical(711, 42, 150, scale);		//2
		drawVertical(716, 42, 150, scale);		//2
		drawVertical(552, 42, 150, scale);		//4
		drawVertical(557, 42, 150, scale);		//4
		drawVertical(711, 201, 150, scale);		//5
		drawVertical(716, 201, 150, scale);		//5
		drawVertical(552, 201, 150, scale);		//6
		drawVertical(557, 201, 150, scale);		//6
		drawHorizontal(559, 353, 150, scale);	//7
		drawHorizontal(559, 358, 150, scale);	//7
	}

/**************************************************************
***                                                			***
***    parseTime											***
***                                                			***
***		
***                                                			***
**************************************************************/

	Void parseTime(int usersTime, int& hour, int& minute)
	{
		hour = usersTime / 100;
		minute = usersTime % 100;
	}

/**************************************************************
***                                                			***
***    playCountdown										***
***                                                			***
***		Plays countdown.wav									***
***                                                			***
**************************************************************/

	Void playCountdown()
	{
		/////////////////////////////////////////////////////////////
		//		DECLARE GLOBAL/INSTANCE VARIABLES 
		/////////////////////////////////////////////////////////////
		System::Media::SoundPlayer countdown ( "wav/countdownexplosion.wav");
		/////////////////////////////////////////////////////////////

		countdown.Play();
	}

/**************************************************************
***                                                			***
***    playClockTick										***
***                                                			***
***		Plays a clock-ticking sound effect					***
***                                                			***
**************************************************************/

	Void playClockTick()
	{
		///////////////////////////////////////////////////////////////
		//		DECLARE GLOBAL/INSTANCE VARIABLES 
		///////////////////////////////////////////////////////////////
		System::Media::SoundPlayer sndPlayer ("wav/clocktick.wav");
		///////////////////////////////////////////////////////////////

		sndPlayer.Play();
	}

/**************************************************************
***                                                			***
***    setupClock											***
***                                                			***
***		
***                                                			***
**************************************************************/

	Void setupClock()
	{
		//g = this->CreateGraphics();
		//g->DrawImage(Image::FromFile("img/clockgearspinkfloydclocknohands.jpg"), 0, 0, 1268, 562);
		this->BackgroundImage = Image::FromFile( "img/clockgearspinkfloydclocknohands.jpg" );
		labelAccount->Visible = false;
		labelPassword->Visible = false;
		labelShowAcctNum->Visible = false;
		labelShowPassword->Visible = false;
		labelEnterUserName->Visible = true;
		labelEnterTime->Visible = true;
		textBoxUserName->Visible = true;
		textBoxTime->Visible = true;
		buttonSubmitTime->Visible = true;
		labelTitle->Text = "When would you like to activate your Internet?";
	}

/**************************************************************
***                                                			***
***    showDateTime											***
***                                                			***
***		Refreshes pictureBoxBottom and draws DateTime as	***
***		 a string in Cyan color with OCR A font size 20.	***
***		 Calls playClockTick for sound effects.				***
***                                                			***
**************************************************************/

	Void showDateTime()
	{
		g = pictureBoxDateTime->CreateGraphics();
		pictureBoxDateTime->Refresh();
		daFont = gcnew System::Drawing::Font("Segoe Print", 22);
		daBrush = gcnew SolidBrush(Color::Yellow);
		g->DrawString( DateTime::Now.ToString(), daFont, daBrush, 0, 0);
		playClockTick();
	}

/**************************************************************
***                                                			***
***    welcome												***
***                                                			***
***		
***                                                			***
**************************************************************/

	Void welcome()
	{
		countdown();
		//g = this->CreateGraphics();
		//g->DrawImage(Image::FromFile("img/daliclockscaled.jpg"), 0, 0, 1268, 562);
		this->BackgroundImage = Image::FromFile( "img/daliclock.jpg" );
		labelTitle->Visible = true;
		labelTitle->Text = "Welcome to " + PROGRAMMERS_NAME 
							+ "'s Intergalactic Internet Service on Intergalactic Travel!";
		labelDescription->Visible = true;
		labelDescription->Text = "You are never out of touch with your family, friends, "
								+ "or business associates when you travel to distant heavenly "
								+ "bodies with Intergalactic Travel. During your flight, just "
								+ "register to our internet service to let us know when you wish "
								+ "to schedule your web surfing from outer space with rates that "
								+ "are down to Earth!";
	}

/**************************************************************
***************************************************************
***                                                			***
***                         END		                 		***
***  CUSTOM-DEFINED FUNCTION DECLARATIONS AND DEFINITIONS   ***
***                                                			***
***************************************************************
**************************************************************/


};
}


