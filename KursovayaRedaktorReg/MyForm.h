#pragma once
#include <iostream>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <sstream>
namespace KursovayaRedaktorReg {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ chooseFile;

	private: System::Windows::Forms::Button^ closeFile;
	private: System::Windows::Forms::ListBox^ listBoxChapters;

	private: System::Windows::Forms::Label^ labelChapter;
	private: System::Windows::Forms::Label^ labelTakeOne;
	private: System::Windows::Forms::OpenFileDialog^ dialog;
	private: System::Windows::Forms::ListView^ listViewParams;
	private: System::Windows::Forms::ColumnHeader^ columnHeader1;
	private: System::Windows::Forms::ColumnHeader^ columnHeader2;
	private: System::Windows::Forms::ColumnHeader^ columnHeader3;
	private: System::Windows::Forms::Button^ ChangeParam;
	private: System::Windows::Forms::Panel^ panelChangeParam;
	private: System::Windows::Forms::TextBox^ textBoxParamType;

	private: System::Windows::Forms::TextBox^ textBoxParamName;
	private: System::Windows::Forms::TextBox^ textBoxParamValue;
	private: System::Windows::Forms::Button^ buttonBackToParams;
	private: System::Windows::Forms::Button^ buttonCompleteChange;
	private: System::Windows::Forms::Panel^ panelChooseNumberSystem;
	private: System::Windows::Forms::RadioButton^ radioButtonDec;
	private: System::Windows::Forms::RadioButton^ radioButtonHex;
	private: System::Windows::Forms::DataGridView^ dataGridViewHexValue;
	private: System::Windows::Forms::Label^ labelParamType;
	private: System::Windows::Forms::Label^ labelDataName;
	private: System::Windows::Forms::Button^ buttonSaveChangesInFile;

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->chooseFile = (gcnew System::Windows::Forms::Button());
			this->closeFile = (gcnew System::Windows::Forms::Button());
			this->listBoxChapters = (gcnew System::Windows::Forms::ListBox());
			this->labelChapter = (gcnew System::Windows::Forms::Label());
			this->labelTakeOne = (gcnew System::Windows::Forms::Label());
			this->dialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->listViewParams = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->ChangeParam = (gcnew System::Windows::Forms::Button());
			this->panelChangeParam = (gcnew System::Windows::Forms::Panel());
			this->labelParamType = (gcnew System::Windows::Forms::Label());
			this->labelDataName = (gcnew System::Windows::Forms::Label());
			this->dataGridViewHexValue = (gcnew System::Windows::Forms::DataGridView());
			this->panelChooseNumberSystem = (gcnew System::Windows::Forms::Panel());
			this->radioButtonDec = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonHex = (gcnew System::Windows::Forms::RadioButton());
			this->buttonBackToParams = (gcnew System::Windows::Forms::Button());
			this->buttonCompleteChange = (gcnew System::Windows::Forms::Button());
			this->textBoxParamValue = (gcnew System::Windows::Forms::TextBox());
			this->textBoxParamType = (gcnew System::Windows::Forms::TextBox());
			this->textBoxParamName = (gcnew System::Windows::Forms::TextBox());
			this->buttonSaveChangesInFile = (gcnew System::Windows::Forms::Button());
			this->panelChangeParam->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewHexValue))->BeginInit();
			this->panelChooseNumberSystem->SuspendLayout();
			this->SuspendLayout();
			// 
			// chooseFile
			// 
			this->chooseFile->Location = System::Drawing::Point(28, 531);
			this->chooseFile->Name = L"chooseFile";
			this->chooseFile->Size = System::Drawing::Size(132, 36);
			this->chooseFile->TabIndex = 0;
			this->chooseFile->Text = L"������� ���� �� ����������";
			this->chooseFile->UseVisualStyleBackColor = true;
			this->chooseFile->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// closeFile
			// 
			this->closeFile->Location = System::Drawing::Point(620, 531);
			this->closeFile->Margin = System::Windows::Forms::Padding(2);
			this->closeFile->Name = L"closeFile";
			this->closeFile->Size = System::Drawing::Size(106, 36);
			this->closeFile->TabIndex = 2;
			this->closeFile->Text = L"������� ����";
			this->closeFile->UseVisualStyleBackColor = true;
			this->closeFile->Visible = false;
			this->closeFile->Click += gcnew System::EventHandler(this, &MyForm::closeFile_Click);
			// 
			// listBoxChapters
			// 
			this->listBoxChapters->FormattingEnabled = true;
			this->listBoxChapters->Location = System::Drawing::Point(28, 54);
			this->listBoxChapters->Margin = System::Windows::Forms::Padding(2);
			this->listBoxChapters->Name = L"listBoxChapters";
			this->listBoxChapters->Size = System::Drawing::Size(704, 134);
			this->listBoxChapters->TabIndex = 3;
			this->listBoxChapters->Visible = false;
			this->listBoxChapters->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listBoxChapters_MouseDoubleClick);
			// 
			// labelChapter
			// 
			this->labelChapter->AutoSize = true;
			this->labelChapter->Location = System::Drawing::Point(25, 39);
			this->labelChapter->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->labelChapter->Name = L"labelChapter";
			this->labelChapter->Size = System::Drawing::Size(261, 13);
			this->labelChapter->TabIndex = 4;
			this->labelChapter->Text = L"������� ������� ���������� � �������� ����� ";
			this->labelChapter->Visible = false;
			// 
			// labelTakeOne
			// 
			this->labelTakeOne->AutoSize = true;
			this->labelTakeOne->Location = System::Drawing::Point(361, 39);
			this->labelTakeOne->Name = L"labelTakeOne";
			this->labelTakeOne->Size = System::Drawing::Size(275, 13);
			this->labelTakeOne->TabIndex = 5;
			this->labelTakeOne->Text = L"�������� ���� ��� �������������� ��� ����������";
			this->labelTakeOne->Visible = false;
			// 
			// dialog
			// 
			this->dialog->FileName = L"openFileDialog1";
			// 
			// listViewParams
			// 
			this->listViewParams->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader1,
					this->columnHeader2, this->columnHeader3
			});
			this->listViewParams->FullRowSelect = true;
			this->listViewParams->HideSelection = false;
			this->listViewParams->Location = System::Drawing::Point(27, 193);
			this->listViewParams->MultiSelect = false;
			this->listViewParams->Name = L"listViewParams";
			this->listViewParams->Size = System::Drawing::Size(705, 308);
			this->listViewParams->TabIndex = 6;
			this->listViewParams->UseCompatibleStateImageBehavior = false;
			this->listViewParams->View = System::Windows::Forms::View::Details;
			this->listViewParams->Visible = false;
			this->listViewParams->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::listViewParams_MouseDoubleClick);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"��������";
			this->columnHeader1->Width = 100;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"���";
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"��������";
			this->columnHeader3->Width = 540;
			// 
			// ChangeParam
			// 
			this->ChangeParam->Location = System::Drawing::Point(293, 531);
			this->ChangeParam->Name = L"ChangeParam";
			this->ChangeParam->Size = System::Drawing::Size(131, 36);
			this->ChangeParam->TabIndex = 7;
			this->ChangeParam->Text = L"�������� ��������";
			this->ChangeParam->UseVisualStyleBackColor = true;
			this->ChangeParam->Visible = false;
			this->ChangeParam->Click += gcnew System::EventHandler(this, &MyForm::ChangeParam_Click);
			// 
			// panelChangeParam
			// 
			this->panelChangeParam->Controls->Add(this->labelParamType);
			this->panelChangeParam->Controls->Add(this->labelDataName);
			this->panelChangeParam->Controls->Add(this->dataGridViewHexValue);
			this->panelChangeParam->Controls->Add(this->panelChooseNumberSystem);
			this->panelChangeParam->Controls->Add(this->buttonBackToParams);
			this->panelChangeParam->Controls->Add(this->buttonCompleteChange);
			this->panelChangeParam->Controls->Add(this->textBoxParamValue);
			this->panelChangeParam->Controls->Add(this->textBoxParamType);
			this->panelChangeParam->Controls->Add(this->textBoxParamName);
			this->panelChangeParam->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panelChangeParam->Location = System::Drawing::Point(0, 0);
			this->panelChangeParam->Name = L"panelChangeParam";
			this->panelChangeParam->Size = System::Drawing::Size(738, 586);
			this->panelChangeParam->TabIndex = 8;
			this->panelChangeParam->Visible = false;
			// 
			// labelParamType
			// 
			this->labelParamType->AutoSize = true;
			this->labelParamType->Location = System::Drawing::Point(545, 8);
			this->labelParamType->Name = L"labelParamType";
			this->labelParamType->Size = System::Drawing::Size(26, 13);
			this->labelParamType->TabIndex = 10;
			this->labelParamType->Text = L"���";
			// 
			// labelDataName
			// 
			this->labelDataName->AutoSize = true;
			this->labelDataName->Location = System::Drawing::Point(39, 8);
			this->labelDataName->Name = L"labelDataName";
			this->labelDataName->Size = System::Drawing::Size(58, 13);
			this->labelDataName->TabIndex = 9;
			this->labelDataName->Text = L"��������";
			// 
			// dataGridViewHexValue
			// 
			this->dataGridViewHexValue->AllowUserToAddRows = false;
			this->dataGridViewHexValue->AllowUserToDeleteRows = false;
			this->dataGridViewHexValue->AllowUserToResizeColumns = false;
			this->dataGridViewHexValue->AllowUserToResizeRows = false;
			this->dataGridViewHexValue->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewHexValue->Location = System::Drawing::Point(12, 263);
			this->dataGridViewHexValue->Name = L"dataGridViewHexValue";
			this->dataGridViewHexValue->Size = System::Drawing::Size(714, 304);
			this->dataGridViewHexValue->TabIndex = 8;
			this->dataGridViewHexValue->Visible = false;
			this->dataGridViewHexValue->CellValidating += gcnew System::Windows::Forms::DataGridViewCellValidatingEventHandler(this, &MyForm::dataGridViewHexValue_CellValidating);
			// 
			// panelChooseNumberSystem
			// 
			this->panelChooseNumberSystem->Controls->Add(this->radioButtonDec);
			this->panelChooseNumberSystem->Controls->Add(this->radioButtonHex);
			this->panelChooseNumberSystem->Location = System::Drawing::Point(268, 205);
			this->panelChooseNumberSystem->Name = L"panelChooseNumberSystem";
			this->panelChooseNumberSystem->Size = System::Drawing::Size(141, 52);
			this->panelChooseNumberSystem->TabIndex = 7;
			this->panelChooseNumberSystem->Visible = false;
			// 
			// radioButtonDec
			// 
			this->radioButtonDec->AutoSize = true;
			this->radioButtonDec->Location = System::Drawing::Point(12, 3);
			this->radioButtonDec->Name = L"radioButtonDec";
			this->radioButtonDec->Size = System::Drawing::Size(98, 17);
			this->radioButtonDec->TabIndex = 5;
			this->radioButtonDec->TabStop = true;
			this->radioButtonDec->Text = L"������������";
			this->radioButtonDec->UseVisualStyleBackColor = true;
			this->radioButtonDec->Click += gcnew System::EventHandler(this, &MyForm::radioButtonDec_CheckedChanged);
			// 
			// radioButtonHex
			// 
			this->radioButtonHex->AutoSize = true;
			this->radioButtonHex->Checked = true;
			this->radioButtonHex->Location = System::Drawing::Point(12, 26);
			this->radioButtonHex->Name = L"radioButtonHex";
			this->radioButtonHex->Size = System::Drawing::Size(127, 17);
			this->radioButtonHex->TabIndex = 6;
			this->radioButtonHex->TabStop = true;
			this->radioButtonHex->Text = L"�����������������";
			this->radioButtonHex->UseVisualStyleBackColor = true;
			this->radioButtonHex->Click += gcnew System::EventHandler(this, &MyForm::radioButtonHex_CheckedChanged);
			// 
			// buttonBackToParams
			// 
			this->buttonBackToParams->Location = System::Drawing::Point(562, 205);
			this->buttonBackToParams->Name = L"buttonBackToParams";
			this->buttonBackToParams->Size = System::Drawing::Size(123, 34);
			this->buttonBackToParams->TabIndex = 4;
			this->buttonBackToParams->Text = L"�����";
			this->buttonBackToParams->UseVisualStyleBackColor = true;
			this->buttonBackToParams->Click += gcnew System::EventHandler(this, &MyForm::buttonBackToParams_Click);
			// 
			// buttonCompleteChange
			// 
			this->buttonCompleteChange->Location = System::Drawing::Point(31, 205);
			this->buttonCompleteChange->Name = L"buttonCompleteChange";
			this->buttonCompleteChange->Size = System::Drawing::Size(123, 34);
			this->buttonCompleteChange->TabIndex = 3;
			this->buttonCompleteChange->Text = L"������ ���������";
			this->buttonCompleteChange->UseVisualStyleBackColor = true;
			this->buttonCompleteChange->Click += gcnew System::EventHandler(this, &MyForm::buttonCompleteChange_Click);
			// 
			// textBoxParamValue
			// 
			this->textBoxParamValue->Location = System::Drawing::Point(31, 44);
			this->textBoxParamValue->Multiline = true;
			this->textBoxParamValue->Name = L"textBoxParamValue";
			this->textBoxParamValue->Size = System::Drawing::Size(654, 155);
			this->textBoxParamValue->TabIndex = 2;
			// 
			// textBoxParamType
			// 
			this->textBoxParamType->Enabled = false;
			this->textBoxParamType->Location = System::Drawing::Point(534, 24);
			this->textBoxParamType->Name = L"textBoxParamType";
			this->textBoxParamType->Size = System::Drawing::Size(151, 20);
			this->textBoxParamType->TabIndex = 1;
			// 
			// textBoxParamName
			// 
			this->textBoxParamName->Enabled = false;
			this->textBoxParamName->Location = System::Drawing::Point(31, 24);
			this->textBoxParamName->Name = L"textBoxParamName";
			this->textBoxParamName->Size = System::Drawing::Size(429, 20);
			this->textBoxParamName->TabIndex = 0;
			// 
			// buttonSaveChangesInFile
			// 
			this->buttonSaveChangesInFile->Location = System::Drawing::Point(486, 531);
			this->buttonSaveChangesInFile->Name = L"buttonSaveChangesInFile";
			this->buttonSaveChangesInFile->Size = System::Drawing::Size(109, 36);
			this->buttonSaveChangesInFile->TabIndex = 9;
			this->buttonSaveChangesInFile->Text = L"��������� ���������";
			this->buttonSaveChangesInFile->UseVisualStyleBackColor = true;
			this->buttonSaveChangesInFile->Visible = false;
			this->buttonSaveChangesInFile->Click += gcnew System::EventHandler(this, &MyForm::buttonSaveChangesInFile_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(738, 586);
			this->Controls->Add(this->buttonSaveChangesInFile);
			this->Controls->Add(this->panelChangeParam);
			this->Controls->Add(this->ChangeParam);
			this->Controls->Add(this->listViewParams);
			this->Controls->Add(this->labelTakeOne);
			this->Controls->Add(this->labelChapter);
			this->Controls->Add(this->listBoxChapters);
			this->Controls->Add(this->closeFile);
			this->Controls->Add(this->chooseFile);
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"�������� Reg ������";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->panelChangeParam->ResumeLayout(false);
			this->panelChangeParam->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewHexValue))->EndInit();
			this->panelChooseNumberSystem->ResumeLayout(false);
			this->panelChooseNumberSystem->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		dialog->Filter = "REG files (*.reg)|*.reg"; 
		if (dialog->ShowDialog() == Windows::Forms::DialogResult::OK) {
			chooseFile->Hide();
			closeFile->Show();
			String^ filepath = dialog->FileName;

			// ����������� string � std::string
			std::string path = msclr::interop::marshal_as<std::string>(filepath);

			// ���������� ���� � ����� ��� ������ ��� ������
			try {
				std::ifstream file;
				file.open(path);
				if (!file.is_open()) {
					throw std::runtime_error("Cannot open file");
				}
				listBoxChapters->Show();
				labelChapter->Show();
				labelTakeOne->Show();
				char ch;
				std::string chapter;
				String^ str;				
				do {
					
					if (ch == '[') {
						getline(file, chapter, ']');
						str = msclr::interop::marshal_as<System::String^>(chapter);
						listBoxChapters->Items->Add(str);
					}
				} while (file.get(ch));
				file.close();
			}
			catch (const std::exception& e) {
				std::cerr << "Exception: " << e.what() << std::endl;

			}
			
		}
		
	}
	private: System::Void closeFile_Click(System::Object^ sender, System::EventArgs^ e) {
		if (buttonSaveChangesInFile->Visible) {
			System::Windows::Forms::DialogResult dr = MessageBox::Show("��������� ��������� � ������� �����", "Info", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

			if (dr == System::Windows::Forms::DialogResult::Yes)
			{
				// ������������ ����� ������ "Yes"
				buttonSaveChangesInFile_Click(nullptr, nullptr);

			}
			else if (dr == System::Windows::Forms::DialogResult::No)
			{
				// ������������ ����� ������ "No"
				buttonSaveChangesInFile->Hide();
			}
			else {
				return;
			}
		}
		closeFile->Hide();
		chooseFile->Show();
		listBoxChapters->Hide();
		labelChapter->Hide();
		labelTakeOne->Hide();
		listBoxChapters->Items->Clear();
		listViewParams->Items->Clear();
		listViewParams->Hide();
		ChangeParam->Hide();
	}


	private: int prevSelectedIndex =-1;

private: System::Void listBoxChapters_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (listBoxChapters->SelectedIndex == -1) {
		MessageBox::Show("�������� ���� �� ��������", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	if (buttonSaveChangesInFile->Visible) {
		System::Windows::Forms::DialogResult dr = MessageBox::Show("��������� ��������� � ������� �������", "Info", MessageBoxButtons::YesNo, MessageBoxIcon::Information);
		
		if (dr == System::Windows::Forms::DialogResult::Yes)
		{
			// ������������ ����� ������ "Yes"
			buttonSaveChangesInFile_Click(nullptr, nullptr);
			
		}
		else if (dr == System::Windows::Forms::DialogResult::No)
		{
			// ������������ ����� ������ "No"
			buttonSaveChangesInFile->Hide();
		}
		else {
			return;
		}
	}
	listViewParams->Items->Clear();
	String^ filepath = dialog->FileName;
	String^ subitem;
	std::string path = msclr::interop::marshal_as<std::string>(filepath);
	std::string tmp;
	std::string something;
	std::string value;
	int count = 0;
	try {
		char ch;
		std::ifstream file;
		file.open(path);
		if (!file.is_open()) {
			throw std::runtime_error("Cannot open file");
		}
		//���������� �������� �������
		do {
			file.get(ch);
			if (ch == '[') count++;
		} while (count != listBoxChapters->SelectedIndex+1);
		//��������� ��������� �������
		getline(file,something);
		
		// �������� ��������� ���������
		while(file.get(ch) && ch =='\"'){
			std::string paramName;
			std::string value;
			file.get(ch);
			if (ch == '.') {
				file.close();
				MessageBox::Show("������ ������", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
				return;
			}
			else {
				file.seekg(-1, std::ios::cur);
			}
			getline(file, paramName, '\"');
			subitem = msclr::interop::marshal_as<System::String^>(paramName);
			ListViewItem^ item = gcnew ListViewItem(subitem);
			
			//��������� ���� =
			file.get(ch);
			//��������� ������ �����, �� ������� ��� ������� ��� ��� �� ���
			file.get(ch);
			int cas = ch;
			switch (cas) {
				//string
			case 34:
				subitem = msclr::interop::marshal_as<System::String^>("string");
				item->SubItems->Add(subitem);
				getline(file, value, '\"');
				file.get(ch);
				subitem = msclr::interop::marshal_as<System::String^>(value);
				item->SubItems->Add(subitem);
				break;
				//dword
			case 100:
				subitem = msclr::interop::marshal_as<System::String^>("dword");
				item->SubItems->Add(subitem);
				getline(file, something, ':');
				getline(file, value);
				subitem = msclr::interop::marshal_as<System::String^>(value);
				item->SubItems->Add(subitem);
				break;
				//hex
			case 104:
				subitem = msclr::interop::marshal_as<System::String^>("hex");
				item->SubItems->Add(subitem);
				// ���������� ex:
				file.seekg(3, std::ios::cur);
				file.get(ch);
				if (ch == 92) {
					//���� hex ����������� � \ �� �� ���������� ���� �������� �������

					file.get(ch);
					// ����� �� ������ ��� �������� ������ ���� ������� ������ ��������� ������ ��������� �� ��������� ��� ��������� �������� �� ������� ������� � 
					while (file.get(ch) && ch == '\t') {
						getline(file, tmp, '\n');
						value += tmp;
					}
					subitem = msclr::interop::marshal_as<System::String^>(value);
					file.seekg(-1, std::ios::cur);
				}
				else {
					file.seekg(-1, std::ios::cur);
					getline(file, value);
					subitem = msclr::interop::marshal_as<System::String^>(value);

				}

	
				
				item->SubItems->Add(subitem);
				break;
			default:
				
				break;
			}

			listViewParams->Items->Add(item);
		}
		



		listViewParams->Show();
		ChangeParam->Show();
		prevSelectedIndex = listBoxChapters->SelectedIndex;
		file.close();
	}
	catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;

	}
}


private: System::Void ChangeParam_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listViewParams->SelectedItems->Count == 0) {
		MessageBox::Show("�������� �������� ������� ������ ��������", "Info", MessageBoxButtons::OK, MessageBoxIcon::Information);
		return;
	}
	textBoxParamName->Text = listViewParams->SelectedItems[0]->SubItems[0]->Text;
	textBoxParamType->Text = listViewParams->SelectedItems[0]->SubItems[1]->Text;

	if (listViewParams->SelectedItems[0]->SubItems[1]->Text == "hex") {
		textBoxParamValue->Enabled = false;
		dataGridViewHexValue->Show();
		array<String^>^ rows = listViewParams->SelectedItems[0]->SubItems[2]->Text->Split('\\');
		dataGridViewHexValue->RowCount = rows->Length;
		for (int i = 0; i < rows->Length; i++) {
			array<String^>^ nums = rows[i]->Split(',');
			dataGridViewHexValue->ColumnCount = nums->Length;
			
			for (int j = 0; j < nums->Length; j++) {
				dataGridViewHexValue->Rows[i]->Cells[j]->Value = nums[j];
				dataGridViewHexValue->Columns[j]->Width = 24;
			}
			
		}
		for (int i = 0; i < dataGridViewHexValue->Rows->Count; i++)
		{
			dataGridViewHexValue->Rows[i]->HeaderCell->Value = (i + 1).ToString();
		}

		// ������������� �������
		for (int i = 0; i < dataGridViewHexValue->Columns->Count; i++)
		{
			dataGridViewHexValue->Columns[i]->HeaderText = (i + 1).ToString();
		}

	}
	else {
		textBoxParamValue->Enabled = true;
		textBoxParamValue->Text = listViewParams->SelectedItems[0]->SubItems[2]->Text;
		
		if (listViewParams->SelectedItems[0]->SubItems[1]->Text == "dword") panelChooseNumberSystem->Show();
	}
	panelChangeParam->BringToFront();
	panelChangeParam->Show();
	
}
private: System::Void buttonBackToParams_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxParamName->Text = "";
	textBoxParamType->Text = "";
	textBoxParamValue->Text = "";
	panelChangeParam->Hide();
	panelChooseNumberSystem->Hide();
	dataGridViewHexValue->Hide();
	

}
bool error;
private: System::Void buttonCompleteChange_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (textBoxParamType->Text == "string") {
		listViewParams->SelectedItems[0]->SubItems[2]->Text = textBoxParamValue->Text;
		buttonBackToParams_Click(nullptr, nullptr);
	}
	else if (textBoxParamType->Text == "dword") {
		if (radioButtonDec->Checked) {
			radioButtonHex_CheckedChanged(nullptr, nullptr);
			if (error) {
				return;
			}
		}
		else if (textBoxParamValue->TextLength > 8) {
			MessageBox::Show("�� ����� ����� ������� �� ������������ ������� dword �������� ���", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		listViewParams->SelectedItems[0]->SubItems[2]->Text = textBoxParamValue->Text;
		buttonBackToParams_Click(nullptr, nullptr);
	}
	else {
		String^ value = "";
		String^ check = "";
		for (int i = 0; i < dataGridViewHexValue->Rows->Count; i++) {
			for (int j = 0; j < dataGridViewHexValue->Columns->Count; j++) {
				if (dataGridViewHexValue->Rows[i]->Cells[j]->Value == nullptr) {
					check = "00";
				}
				else {
				check = dataGridViewHexValue->Rows[i]->Cells[j]->Value->ToString();
				}
				if (check->Length == 1) {
					check = "0" + check;
				}
				value += check;
				value += ",";

			}
			if (i < dataGridViewHexValue->Rows->Count - 1) {
			value += "\\";
			}
			else {
				value = value->Remove(value->Length -1);

			}
		}
		listViewParams->SelectedItems[0]->SubItems[2]->Text = value;
		buttonBackToParams_Click(nullptr, nullptr);
	}
	buttonSaveChangesInFile->Show();
}
// ������� ��� �������������� 16-������ ������ � ���������� �����
int hexToDecimal(std::string hexStr) {
	int decimalNum;
	std::stringstream ss;
	ss << std::hex << hexStr;
	ss >> decimalNum;
	return decimalNum;
}
// ������� ��� �������������� ����������� ����� � 16-������ ������
std::string decimalToHex(int decimalNum) {
    std::stringstream ss;
    ss << std::hex << decimalNum;
    return ss.str();
}
private: System::Void radioButtonDec_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	std::string value = msclr::interop::marshal_as<std::string>(textBoxParamValue->Text);
	int dec = hexToDecimal(value);
	textBoxParamValue->Text = Convert::ToString(dec);
}


private: System::Void radioButtonHex_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	try {
		error = false;
		if (textBoxParamValue->Text->Contains("-")) {
			MessageBox::Show("������ �������� ������������ ������ ����������� ������,�������� �����", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			radioButtonDec->Checked = true;
			error = true;
			return;
		}
		int dec = Convert::ToInt32(textBoxParamValue->Text);
		std::string value = decimalToHex(dec);
		String^ hexvalue = msclr::interop::marshal_as<System::String^>(value);
		textBoxParamValue->Text = hexvalue;
	}
	catch (const System::OverflowException^ e) {
		error = true;
		MessageBox::Show("�� ����� ���������� ����� ������� �� ������������ ������� dword �������� ���", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		radioButtonDec->Checked = true;
	}
	
}

private: System::Void dataGridViewHexValue_CellValidating(System::Object^ sender, System::Windows::Forms::DataGridViewCellValidatingEventArgs^ e) {
	String^ newVal = e->FormattedValue->ToString();

	if (newVal->Length > 2) {
		e->Cancel = true;
		MessageBox::Show("������������ ����� ����� ��� ���� byte � 16-�� ������ ������� 2 �����", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	for (int i = 0; i < newVal->Length; i++) {
		if (!Char::IsDigit(newVal[i]) && !((newVal[i] >= 'a' && newVal[i] <= 'f') || (newVal[i] >= 'A' && newVal[i] <= 'F'))) {
			e->Cancel = true;
			MessageBox::Show("������� ����� 16-�� ������ ������� ���������", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
	}
}

private: System::Void listViewParams_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	ChangeParam_Click(nullptr, nullptr);
}
private: System::Void buttonSaveChangesInFile_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ filePath = dialog->FileName;
	std::string path = msclr::interop::marshal_as<std::string>(filePath);
	std::ifstream file;
	std::ofstream subf;
	bool openfile = false;
	bool opensubf = false;
	try {
		int count = 0;
		char ch;

		std::string tmp;
		String^ type;
		subf.open("something.txt");

		file.open(path);
		if (!file.is_open()) {
			throw std::runtime_error("Cannot open file");
		}
		openfile = true;

		if (!subf.is_open()) {
			throw std::runtime_error("Cannot open file");
		}
		opensubf = true;
		
		do {
			file.get(ch);
			subf.put(ch);
			if (ch == '[') count++;
		} while (count != prevSelectedIndex + 1);
		
		std::string value;
		value = msclr::interop::marshal_as<std::string>(listBoxChapters->Items[prevSelectedIndex]->ToString());
		getline(file, tmp);
		subf << value;
		subf << "]\n";
		for (int i = 0; i < listViewParams->Items->Count; i++) {
			//���������� � ���� �������� ���������
			subf << '\"';
			value = msclr::interop::marshal_as<std::string>(listViewParams->Items[i]->SubItems[0]->Text);
			subf << value;
			subf << "\"=";
			type = listViewParams->Items[i]->SubItems[1]->Text;
			if (type == "dword") {
				//���������� ������ � ����� ������ ������
				getline(file, tmp);
				//���������� dword 
				subf << "dword:";
				//���������� �������� ������
				value = msclr::interop::marshal_as<std::string>(listViewParams->Items[i]->SubItems[2]->Text);
				//��������� ����������� ����
				while (value.size() < 8) {
					value = "0" + value;
				}
				subf << value;
				subf << "\n";
			}
			else if (type == "hex") {
				subf << "hex:";
				//���� �������� hex �������������, ��
				if (listViewParams->Items[i]->SubItems[2]->Text->Contains("\\")) {
					getline(file, tmp);
					//���������� � ���� ����� '\' \n \t
					subf << "\\\n\t";
					// �������� ��������� �������
					array<String^>^ rows = listViewParams->Items[i]->SubItems[2]->Text->Split('\\');
					for (int j = 0; j < rows->Length; j++) {
						//���������� ������ � ����� ������
						getline(file, tmp);
						value = msclr::interop::marshal_as<std::string>(rows[j]->ToString());
						subf << value;
						if (j < rows->Length - 1) {
							subf << "\\\n\t";
						}
						else {
							subf << "\n";
						}
					}
				}
				//���� �������� hex ����������� � ���� ������
				else {
					//���������� ������ � ����� ������ ������
					getline(file, tmp);
					value = msclr::interop::marshal_as<std::string>(listViewParams->Items[i]->SubItems[2]->Text);
					subf << value;
					subf << "\n";
				}
			}
			else {
				//���������� ������ � ����� ������ ������
				getline(file, tmp);
				value = msclr::interop::marshal_as<std::string>(listViewParams->Items[i]->SubItems[2]->Text);
				subf << '\"';
				subf << value;
				subf << "\"\n";
			}
		}
		// ����� ���� ��� �� ����������� ��� ������� �� �����������
		// � ��� ���������� ������, �������� ���������� ����� �����
		while (file.get(ch)) {
			subf.put(ch);
		}
		//��������� ������
		file.close();
		openfile = false;
		subf.close();
		opensubf = false;
		


		path = msclr::interop::marshal_as<std::string>(dialog->FileName);
		subf.open(path);
		file.open("something.txt");

		if (!file.is_open()) {
			throw std::runtime_error("Cannot open file");
		}
		openfile = true;

		if (!subf.is_open()) {
			throw std::runtime_error("Cannot open file");
		}
		opensubf = true;
		while (file.get(ch)) {
			subf.put(ch);
		}

		file.close();
		openfile = false;
		subf.close();
		opensubf = false;
		std::remove("something.txt");
		buttonSaveChangesInFile->Hide();
	}
	catch (const std::exception& e) {
		// ��������� �������� ������� ���� ��� �������� ��������� ���� � ������ ������
		if (openfile) {
			file.close();
		}
		if (opensubf) {
			subf.close();
		}
		std::cerr << "Exception: " << e.what() << std::endl;
	}
}
private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	if (buttonSaveChangesInFile->Visible) {
		System::Windows::Forms::DialogResult dr = MessageBox::Show("��������� ��������� � ������� �����", "Info", MessageBoxButtons::YesNo, MessageBoxIcon::Information);

		if (dr == System::Windows::Forms::DialogResult::Yes)
		{
			// ������������ ����� ������ "Yes"
			buttonSaveChangesInFile_Click(nullptr, nullptr);

		}
		else if (dr == System::Windows::Forms::DialogResult::No)
		{

		}
		else {
			return;
		}
	}
}
};
}
