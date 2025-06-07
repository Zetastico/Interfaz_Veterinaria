#pragma once
// Elimina o comenta la siguiente línea, ya que 'Clases_Veterinaria' no es un espacio de nombres válido
using namespace ClasesVeterinaria;
using namespace std;

namespace InterfazVeterinaria {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:

		cola_veterinaria^ cola_clientes = gcnew(cola_veterinaria);

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::DateTimePicker^ dateTimeFecha;
	private: System::Windows::Forms::Label^ Titulo;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Agregar;


	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ Limpiar;



	private: System::Windows::Forms::Button^ Ocultar;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Info_Contacto;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hora_Llegada;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Cant_Mascotas;
	private: System::Windows::Forms::Button^ Eliminar;






	protected:

	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Info_Contacto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hora_Llegada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cant_Mascotas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Ocultar = (gcnew System::Windows::Forms::Button());
			this->Limpiar = (gcnew System::Windows::Forms::Button());
			this->Agregar = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->Titulo = (gcnew System::Windows::Forms::Label());
			this->dateTimeFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->Eliminar = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(156, 480);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 107);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 50);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Atención en consulta";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 46);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 54);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Cola de Ingreso";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(156, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(864, 480);
			this->panel2->TabIndex = 1;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Nombre,
					this->Info_Contacto, this->Hora_Llegada, this->Cant_Mascotas
			});
			this->dataGridView1->Location = System::Drawing::Point(408, 98);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(444, 186);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Nombre
			// 
			this->Nombre->HeaderText = L"Dueño";
			this->Nombre->Name = L"Nombre";
			// 
			// Info_Contacto
			// 
			this->Info_Contacto->HeaderText = L"Info_Contacto";
			this->Info_Contacto->Name = L"Info_Contacto";
			// 
			// Hora_Llegada
			// 
			this->Hora_Llegada->HeaderText = L"Hora_Llegada";
			this->Hora_Llegada->Name = L"Hora_Llegada";
			// 
			// Cant_Mascotas
			// 
			this->Cant_Mascotas->HeaderText = L"Cant_Mascotas";
			this->Cant_Mascotas->Name = L"Cant_Mascotas";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(532, 62);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(180, 20);
			this->label7->TabIndex = 2;
			this->label7->Text = L"COLA DE ATENCION";
			this->label7->Click += gcnew System::EventHandler(this, &MyForm::label7_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->Eliminar);
			this->panel4->Controls->Add(this->Ocultar);
			this->panel4->Controls->Add(this->Limpiar);
			this->panel4->Controls->Add(this->Agregar);
			this->panel4->Controls->Add(this->panel5);
			this->panel4->Location = System::Drawing::Point(20, 65);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(372, 219);
			this->panel4->TabIndex = 1;
			// 
			// Ocultar
			// 
			this->Ocultar->Location = System::Drawing::Point(251, 171);
			this->Ocultar->Name = L"Ocultar";
			this->Ocultar->Size = System::Drawing::Size(102, 23);
			this->Ocultar->TabIndex = 9;
			this->Ocultar->Text = L"Ocultar la Cola";
			this->Ocultar->UseVisualStyleBackColor = true;
			// 
			// Limpiar
			// 
			this->Limpiar->Location = System::Drawing::Point(251, 121);
			this->Limpiar->Name = L"Limpiar";
			this->Limpiar->Size = System::Drawing::Size(102, 23);
			this->Limpiar->TabIndex = 8;
			this->Limpiar->Text = L"Limpiar";
			this->Limpiar->UseVisualStyleBackColor = true;
			this->Limpiar->Click += gcnew System::EventHandler(this, &MyForm::Limpiar_Click);
			// 
			// Agregar
			// 
			this->Agregar->Location = System::Drawing::Point(251, 16);
			this->Agregar->Name = L"Agregar";
			this->Agregar->Size = System::Drawing::Size(102, 23);
			this->Agregar->TabIndex = 2;
			this->Agregar->Text = L"Agregar";
			this->Agregar->UseVisualStyleBackColor = true;
			this->Agregar->Click += gcnew System::EventHandler(this, &MyForm::Agregar_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label2);
			this->panel5->Controls->Add(this->numericUpDown1);
			this->panel5->Controls->Add(this->textBox2);
			this->panel5->Controls->Add(this->label5);
			this->panel5->Controls->Add(this->textBox1);
			this->panel5->Controls->Add(this->dateTimePicker1);
			this->panel5->Controls->Add(this->label4);
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->label3);
			this->panel5->Location = System::Drawing::Point(23, 16);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(207, 184);
			this->panel5->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Nombre";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(3, 155);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(181, 20);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(3, 79);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(181, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(3, 139);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(108, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Número de Mascotas";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(3, 37);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(181, 20);
			this->textBox1->TabIndex = 3;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker1->Location = System::Drawing::Point(95, 105);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(89, 20);
			this->dateTimePicker1->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 111);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Hora de Llegada";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(-3, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(114, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Información del Dueño";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(3, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Información de Contacto";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->Titulo);
			this->panel3->Controls->Add(this->dateTimeFecha);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(864, 59);
			this->panel3->TabIndex = 0;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(409, 12);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Fecha";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// Titulo
			// 
			this->Titulo->AutoSize = true;
			this->Titulo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Titulo->Location = System::Drawing::Point(38, 12);
			this->Titulo->Name = L"Titulo";
			this->Titulo->Size = System::Drawing::Size(65, 26);
			this->Titulo->TabIndex = 1;
			this->Titulo->Text = L"COLA";
			this->Titulo->Click += gcnew System::EventHandler(this, &MyForm::COLA_Click);
			// 
			// dateTimeFecha
			// 
			this->dateTimeFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimeFecha->Location = System::Drawing::Point(480, 12);
			this->dateTimeFecha->Name = L"dateTimeFecha";
			this->dateTimeFecha->Size = System::Drawing::Size(123, 20);
			this->dateTimeFecha->TabIndex = 0;
			// 
			// Eliminar
			// 
			this->Eliminar->Location = System::Drawing::Point(251, 69);
			this->Eliminar->Name = L"Eliminar";
			this->Eliminar->Size = System::Drawing::Size(102, 23);
			this->Eliminar->TabIndex = 10;
			this->Eliminar->Text = L"Eliminar";
			this->Eliminar->UseVisualStyleBackColor = true;
			this->Eliminar->Click += gcnew System::EventHandler(this, &MyForm::Eliminar_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1020, 480);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Cola Veterinaria";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel4->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void COLA_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void Agregar_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ texto = numericUpDown1->Text;
	int numero = Int32::Parse(texto);

	datos^ nueva = gcnew datos(textBox1->Text, textBox2->Text, dateTimePicker1->Text, numero);
	cola_clientes->AgregarFinal(nueva);  // Se agrega a la cola

	array<String^>^ fila = gcnew array<String^>{ textBox1->Text, textBox2->Text, dateTimePicker1->Text, texto };
	dataGridView1->Rows->Add(fila);
	dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
}
private: System::Void Limpiar_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text = "";
	textBox2->Text = "";
	numericUpDown1->Value = 1;
}
private: System::Void Eliminar_Click(System::Object^ sender, System::EventArgs^ e) {
	datos^ primero = cola_clientes->EliminarInicio();

	if (dataGridView1->Rows->Count > 0) {
		DataGridViewRow^ fila = dataGridView1->Rows[0];
		textBox1->Text = fila->Cells[0]->Value != nullptr ? fila->Cells[0]->Value->ToString() : "";
		textBox2->Text = fila->Cells[1]->Value != nullptr ? fila->Cells[1]->Value->ToString() : "";
		numericUpDown1->Text = fila->Cells[3]->Value != nullptr ? fila->Cells[3]->Value->ToString() : "";

		dataGridView1->Rows->RemoveAt(0);

		if (dataGridView1->Rows->Count > 0) {
			dataGridView1->ClearSelection();
			dataGridView1->Rows[0]->Selected = true;
		}
	}
}
};
}
