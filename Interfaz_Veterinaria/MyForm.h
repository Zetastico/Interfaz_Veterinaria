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
	private: System::Windows::Forms::TextBox^ txtATotal;
	public:
		cola_veterinaria^ cola_clientes;
		pila_veterinaria^ pila_clientes;
		lista_Atencion_veterinaria^ lista_atencion;

	public:
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::RadioButton^ radioButtonSI;

	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ elimina;

	private: System::Windows::Forms::Button^ Insertar;
	private: System::Windows::Forms::Button^ Ultimo;
	private: System::Windows::Forms::Button^ Siguiente;



	private: System::Windows::Forms::Button^ Anterior;

	private: System::Windows::Forms::Button^ Primero;
	private: System::Windows::Forms::RadioButton^ radioButtonNO;


	public:
		   MyForm(void)
		   {
			   InitializeComponent();
			   cola_clientes = gcnew cola_veterinaria();
			   pila_clientes = gcnew pila_veterinaria();
			   lista_atencion = gcnew lista_Atencion_veterinaria();
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
	private: System::Windows::Forms::Label^ IblTitulo;

	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ Agregar;
	private: System::Windows::Forms::Panel^ Panel_Cola;



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
	private: System::Windows::Forms::Button^ btnDehacer;
	private: System::Windows::Forms::Button^ btnAtender;
	private: System::Windows::Forms::Panel^ Panel_Atención;
	private: System::Windows::Forms::TextBox^ txtCCantMascotas;

	private: System::Windows::Forms::TextBox^ txtCHora;
	private: System::Windows::Forms::TextBox^ txtCContacto;




	private: System::Windows::Forms::TextBox^ txtCDueño;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;







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
			this->btnDehacer = (gcnew System::Windows::Forms::Button());
			this->btnAtender = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Info_Contacto = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Hora_Llegada = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Cant_Mascotas = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->IblTitulo = (gcnew System::Windows::Forms::Label());
			this->dateTimeFecha = (gcnew System::Windows::Forms::DateTimePicker());
			this->Panel_Atención = (gcnew System::Windows::Forms::Panel());
			this->elimina = (gcnew System::Windows::Forms::Button());
			this->Insertar = (gcnew System::Windows::Forms::Button());
			this->Ultimo = (gcnew System::Windows::Forms::Button());
			this->Siguiente = (gcnew System::Windows::Forms::Button());
			this->Anterior = (gcnew System::Windows::Forms::Button());
			this->Primero = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButtonNO = (gcnew System::Windows::Forms::RadioButton());
			this->radioButtonSI = (gcnew System::Windows::Forms::RadioButton());
			this->txtATotal = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->txtCCantMascotas = (gcnew System::Windows::Forms::TextBox());
			this->txtCHora = (gcnew System::Windows::Forms::TextBox());
			this->txtCContacto = (gcnew System::Windows::Forms::TextBox());
			this->txtCDueño = (gcnew System::Windows::Forms::TextBox());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Eliminar = (gcnew System::Windows::Forms::Button());
			this->Ocultar = (gcnew System::Windows::Forms::Button());
			this->Limpiar = (gcnew System::Windows::Forms::Button());
			this->Agregar = (gcnew System::Windows::Forms::Button());
			this->Panel_Cola = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->Panel_Atención->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel4->SuspendLayout();
			this->Panel_Cola->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button2);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(156, 371);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel1_Paint);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 118);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 54);
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
			this->panel2->Controls->Add(this->btnDehacer);
			this->panel2->Controls->Add(this->btnAtender);
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->panel3);
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->Panel_Atención);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(156, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(864, 371);
			this->panel2->TabIndex = 1;
			this->panel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel2_Paint);
			// 
			// btnDehacer
			// 
			this->btnDehacer->Location = System::Drawing::Point(681, 290);
			this->btnDehacer->Name = L"btnDehacer";
			this->btnDehacer->Size = System::Drawing::Size(132, 23);
			this->btnDehacer->TabIndex = 5;
			this->btnDehacer->Text = L"Deshacer Atención";
			this->btnDehacer->UseVisualStyleBackColor = true;
			this->btnDehacer->Click += gcnew System::EventHandler(this, &MyForm::btnDehacer_Click);
			// 
			// btnAtender
			// 
			this->btnAtender->Location = System::Drawing::Point(450, 290);
			this->btnAtender->Name = L"btnAtender";
			this->btnAtender->Size = System::Drawing::Size(132, 23);
			this->btnAtender->TabIndex = 4;
			this->btnAtender->Text = L"Atender";
			this->btnAtender->UseVisualStyleBackColor = true;
			this->btnAtender->Click += gcnew System::EventHandler(this, &MyForm::btnAtender_Click);
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
			// panel3
			// 
			this->panel3->Controls->Add(this->label6);
			this->panel3->Controls->Add(this->IblTitulo);
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
			// IblTitulo
			// 
			this->IblTitulo->AutoSize = true;
			this->IblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->IblTitulo->Location = System::Drawing::Point(38, 12);
			this->IblTitulo->Name = L"IblTitulo";
			this->IblTitulo->Size = System::Drawing::Size(65, 26);
			this->IblTitulo->TabIndex = 1;
			this->IblTitulo->Text = L"COLA";
			this->IblTitulo->Click += gcnew System::EventHandler(this, &MyForm::COLA_Click);
			// 
			// dateTimeFecha
			// 
			this->dateTimeFecha->Format = System::Windows::Forms::DateTimePickerFormat::Short;
			this->dateTimeFecha->Location = System::Drawing::Point(480, 12);
			this->dateTimeFecha->Name = L"dateTimeFecha";
			this->dateTimeFecha->Size = System::Drawing::Size(123, 20);
			this->dateTimeFecha->TabIndex = 0;
			this->dateTimeFecha->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimeFecha_ValueChanged);
			// 
			// Panel_Atención
			// 
			this->Panel_Atención->Controls->Add(this->elimina);
			this->Panel_Atención->Controls->Add(this->Insertar);
			this->Panel_Atención->Controls->Add(this->Ultimo);
			this->Panel_Atención->Controls->Add(this->Siguiente);
			this->Panel_Atención->Controls->Add(this->Anterior);
			this->Panel_Atención->Controls->Add(this->Primero);
			this->Panel_Atención->Controls->Add(this->groupBox1);
			this->Panel_Atención->Controls->Add(this->txtATotal);
			this->Panel_Atención->Controls->Add(this->label12);
			this->Panel_Atención->Controls->Add(this->label11);
			this->Panel_Atención->Controls->Add(this->label10);
			this->Panel_Atención->Controls->Add(this->label9);
			this->Panel_Atención->Controls->Add(this->label8);
			this->Panel_Atención->Controls->Add(this->txtCCantMascotas);
			this->Panel_Atención->Controls->Add(this->txtCHora);
			this->Panel_Atención->Controls->Add(this->txtCContacto);
			this->Panel_Atención->Controls->Add(this->txtCDueño);
			this->Panel_Atención->Location = System::Drawing::Point(20, 65);
			this->Panel_Atención->Name = L"Panel_Atención";
			this->Panel_Atención->Size = System::Drawing::Size(372, 294);
			this->Panel_Atención->TabIndex = 6;
			// 
			// elimina
			// 
			this->elimina->Location = System::Drawing::Point(196, 225);
			this->elimina->Name = L"elimina";
			this->elimina->Size = System::Drawing::Size(156, 23);
			this->elimina->TabIndex = 18;
			this->elimina->Text = L"Eliminar";
			this->elimina->UseVisualStyleBackColor = true;
			this->elimina->Click += gcnew System::EventHandler(this, &MyForm::elimina_Click);
			// 
			// Insertar
			// 
			this->Insertar->Location = System::Drawing::Point(34, 225);
			this->Insertar->Name = L"Insertar";
			this->Insertar->Size = System::Drawing::Size(156, 23);
			this->Insertar->TabIndex = 17;
			this->Insertar->Text = L"Insertar";
			this->Insertar->UseVisualStyleBackColor = true;
			this->Insertar->Click += gcnew System::EventHandler(this, &MyForm::Insertar_Click);
			// 
			// Ultimo
			// 
			this->Ultimo->Location = System::Drawing::Point(277, 253);
			this->Ultimo->Name = L"Ultimo";
			this->Ultimo->Size = System::Drawing::Size(75, 23);
			this->Ultimo->TabIndex = 16;
			this->Ultimo->Text = L"Último";
			this->Ultimo->UseVisualStyleBackColor = true;
			this->Ultimo->Click += gcnew System::EventHandler(this, &MyForm::Ultimo_Click);
			// 
			// Siguiente
			// 
			this->Siguiente->Location = System::Drawing::Point(196, 253);
			this->Siguiente->Name = L"Siguiente";
			this->Siguiente->Size = System::Drawing::Size(75, 23);
			this->Siguiente->TabIndex = 15;
			this->Siguiente->Text = L"Siguiente";
			this->Siguiente->UseVisualStyleBackColor = true;
			this->Siguiente->Click += gcnew System::EventHandler(this, &MyForm::Siguiente_Click);
			// 
			// Anterior
			// 
			this->Anterior->Location = System::Drawing::Point(115, 253);
			this->Anterior->Name = L"Anterior";
			this->Anterior->Size = System::Drawing::Size(75, 23);
			this->Anterior->TabIndex = 14;
			this->Anterior->Text = L"Anterior";
			this->Anterior->UseVisualStyleBackColor = true;
			this->Anterior->Click += gcnew System::EventHandler(this, &MyForm::Anterior_Click);
			// 
			// Primero
			// 
			this->Primero->Location = System::Drawing::Point(34, 253);
			this->Primero->Name = L"Primero";
			this->Primero->Size = System::Drawing::Size(75, 23);
			this->Primero->TabIndex = 13;
			this->Primero->Text = L"Primero";
			this->Primero->UseVisualStyleBackColor = true;
			this->Primero->Click += gcnew System::EventHandler(this, &MyForm::Primero_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButtonNO);
			this->groupBox1->Controls->Add(this->radioButtonSI);
			this->groupBox1->Location = System::Drawing::Point(251, 69);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(87, 100);
			this->groupBox1->TabIndex = 12;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pagado";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MyForm::groupBox1_Enter);
			// 
			// radioButtonNO
			// 
			this->radioButtonNO->AutoSize = true;
			this->radioButtonNO->Location = System::Drawing::Point(7, 45);
			this->radioButtonNO->Name = L"radioButtonNO";
			this->radioButtonNO->Size = System::Drawing::Size(39, 17);
			this->radioButtonNO->TabIndex = 14;
			this->radioButtonNO->TabStop = true;
			this->radioButtonNO->Text = L"No";
			this->radioButtonNO->UseVisualStyleBackColor = true;
			// 
			// radioButtonSI
			// 
			this->radioButtonSI->AutoSize = true;
			this->radioButtonSI->Location = System::Drawing::Point(6, 21);
			this->radioButtonSI->Name = L"radioButtonSI";
			this->radioButtonSI->Size = System::Drawing::Size(34, 17);
			this->radioButtonSI->TabIndex = 13;
			this->radioButtonSI->TabStop = true;
			this->radioButtonSI->Text = L"Si";
			this->radioButtonSI->UseVisualStyleBackColor = true;
			// 
			// txtATotal
			// 
			this->txtATotal->Location = System::Drawing::Point(251, 36);
			this->txtATotal->Name = L"txtATotal";
			this->txtATotal->Size = System::Drawing::Size(68, 20);
			this->txtATotal->TabIndex = 9;
			this->txtATotal->TextChanged += gcnew System::EventHandler(this, &MyForm::txtATotal_TextChanged);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(248, 22);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(71, 13);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Total a Pagar";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(37, 164);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(110, 13);
			this->label11->TabIndex = 7;
			this->label11->Text = L"Numero De Mascotas";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(37, 114);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(86, 13);
			this->label10->TabIndex = 6;
			this->label10->Text = L"Hora de Llegada";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(37, 66);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(125, 13);
			this->label9->TabIndex = 5;
			this->label9->Text = L"Información De Contacto";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(37, 21);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 13);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Dueño";
			// 
			// txtCCantMascotas
			// 
			this->txtCCantMascotas->Location = System::Drawing::Point(34, 180);
			this->txtCCantMascotas->Name = L"txtCCantMascotas";
			this->txtCCantMascotas->Size = System::Drawing::Size(193, 20);
			this->txtCCantMascotas->TabIndex = 3;
			this->txtCCantMascotas->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged);
			// 
			// txtCHora
			// 
			this->txtCHora->Location = System::Drawing::Point(34, 132);
			this->txtCHora->Name = L"txtCHora";
			this->txtCHora->Size = System::Drawing::Size(193, 20);
			this->txtCHora->TabIndex = 2;
			this->txtCHora->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// txtCContacto
			// 
			this->txtCContacto->Location = System::Drawing::Point(34, 82);
			this->txtCContacto->Name = L"txtCContacto";
			this->txtCContacto->Size = System::Drawing::Size(193, 20);
			this->txtCContacto->TabIndex = 1;
			this->txtCContacto->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// txtCDueño
			// 
			this->txtCDueño->Location = System::Drawing::Point(34, 37);
			this->txtCDueño->Name = L"txtCDueño";
			this->txtCDueño->Size = System::Drawing::Size(193, 20);
			this->txtCDueño->TabIndex = 0;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->Eliminar);
			this->panel4->Controls->Add(this->Ocultar);
			this->panel4->Controls->Add(this->Limpiar);
			this->panel4->Controls->Add(this->Agregar);
			this->panel4->Controls->Add(this->Panel_Cola);
			this->panel4->Location = System::Drawing::Point(20, 65);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(372, 294);
			this->panel4->TabIndex = 1;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MyForm::panel4_Paint);
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
			// Panel_Cola
			// 
			this->Panel_Cola->Controls->Add(this->label2);
			this->Panel_Cola->Controls->Add(this->numericUpDown1);
			this->Panel_Cola->Controls->Add(this->textBox2);
			this->Panel_Cola->Controls->Add(this->label5);
			this->Panel_Cola->Controls->Add(this->textBox1);
			this->Panel_Cola->Controls->Add(this->dateTimePicker1);
			this->Panel_Cola->Controls->Add(this->label4);
			this->Panel_Cola->Controls->Add(this->label1);
			this->Panel_Cola->Controls->Add(this->label3);
			this->Panel_Cola->Location = System::Drawing::Point(23, 16);
			this->Panel_Cola->Name = L"Panel_Cola";
			this->Panel_Cola->Size = System::Drawing::Size(207, 184);
			this->Panel_Cola->TabIndex = 1;
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
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1020, 371);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Name = L"MyForm";
			this->Text = L"Cola Veterinaria";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->Panel_Atención->ResumeLayout(false);
			this->Panel_Atención->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->Panel_Cola->ResumeLayout(false);
			this->Panel_Cola->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
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
		panel4->Visible = true;
		Panel_Atención->Visible = false;
		IblTitulo->Text = "COLA";
		btnAtender->Visible = false;
		btnDehacer->Visible = false;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		panel4->Visible = false;
		Panel_Atención->Visible = true;
		IblTitulo->Text = "ATENCION A CLIENTE";
		btnAtender->Visible = true;
		btnDehacer->Visible = true;
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
	private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnAtender_Click(System::Object^ sender, System::EventArgs^ e) {
		clear_atencion();  // Limpia campos

		datos^ primero;
		primero = cola_clientes->EliminarInicio();

		if (dataGridView1->Rows->Count > 0) {
			pila_clientes->Agregar(primero);  // Guarda en pila para deshacer

			DataGridViewRow^ fila = dataGridView1->Rows[0];
			txtCDueño->Text = fila->Cells[0]->Value != nullptr ? fila->Cells[0]->Value->ToString() : "";
			txtCContacto->Text = fila->Cells[1]->Value != nullptr ? fila->Cells[1]->Value->ToString() : "";
			txtCHora->Text = fila->Cells[2]->Value != nullptr ? fila->Cells[2]->Value->ToString() : "";
			txtCCantMascotas->Text = fila->Cells[3]->Value != nullptr ? fila->Cells[3]->Value->ToString() : "";

			dataGridView1->Rows->RemoveAt(0);

			if (dataGridView1->Rows->Count > 0) {
				dataGridView1->ClearSelection();
				dataGridView1->Rows[0]->Selected = true;
			}
		}
	}
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void btnDehacer_Click(System::Object^ sender, System::EventArgs^ e) {
		datos^ primero = pila_clientes->Eliminar(); //se Saca de la pila

		if (primero != nullptr) {
			cola_clientes->AgregarInicio(primero); //Se vuelve a poner a la cola

			dataGridView1->Rows->Insert(0,
				primero->getNombre(),
				primero->getContacto(),
				primero->getHora_llegada(),
				primero->getcantmascotas().ToString()
			);

			dataGridView1->SelectionMode = DataGridViewSelectionMode::FullRowSelect;
			dataGridView1->CurrentCell = dataGridView1->Rows[0]->Cells[0];

			clear_atencion(); // Limpia campos de atención
		}

	}
	   void clear_atencion() {
		   txtCDueño->Text = " ";
		   txtCContacto->Text = " ";
		   txtCHora->Text = " ";
		   txtCCantMascotas->Text = " ";
	   }
	   void clear_ventana() {
		   txtCDueño->Text = "";
		   txtCContacto->Text = "";
		   txtCHora->Text = "";
		   txtCCantMascotas->Text = "";
		   txtATotal->Text = "";
		   radioButtonSI->Checked = false;
		   radioButtonNO->Checked = false;
	   }

	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Insertar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtCDueño->Text != "") {
			bool pagado;
			double pago = Double::Parse(txtATotal->Text);
			int numero = Int32::Parse(txtCCantMascotas->Text);

			pagado = radioButtonSI->Checked;

			datos^ nuevo = gcnew datos(txtCDueño->Text, txtCContacto->Text, txtCHora->Text, numero);
			datos_atencion^ nueva = gcnew datos_atencion(dateTimeFecha->Value, pago, pagado, nuevo);
			lista_atencion->Agregar(nueva);

			clear_ventana();
		}
	}
	private: System::Void Primero_Click(System::Object^ sender, System::EventArgs^ e) {
		datos_atencion^ primero = lista_atencion->Primero();
		if (primero != nullptr) {
			txtCDueño->Text = primero->getdueno()->getNombre();
			txtCContacto->Text = primero->getdueno()->getContacto();
			txtCHora->Text = primero->getdueno()->getHora_llegada();
			txtCCantMascotas->Text = primero->getdueno()->getcantmascotas().ToString();
			txtATotal->Text = primero->getcosto().ToString();
			radioButtonSI->Checked = primero->getpagado();
			radioButtonNO->Checked = !primero->getpagado();
		}
	}
	private: System::Void Ultimo_Click(System::Object^ sender, System::EventArgs^ e) {
		datos_atencion^ ultimo = lista_atencion->Ultimo();
		if (ultimo != nullptr) {
			txtCDueño->Text = ultimo->getdueno()->getNombre();
			txtCContacto->Text = ultimo->getdueno()->getContacto();
			txtCHora->Text = ultimo->getdueno()->getHora_llegada();
			txtCCantMascotas->Text = ultimo->getdueno()->getcantmascotas().ToString();
			txtATotal->Text = ultimo->getcosto().ToString();
			radioButtonSI->Checked = ultimo->getpagado();
			radioButtonNO->Checked = !ultimo->getpagado();
		}
	}
	private: System::Void Anterior_Click(System::Object^ sender, System::EventArgs^ e) {
		datos_atencion^ anterior;
		anterior = lista_atencion->Anterior(txtCDueño->Text); //Devuelve el anterior a uno de la lista
		if (anterior != nullptr) {
			txtCDueño->Text = anterior->getdueno()->getNombre();
			txtCContacto->Text = anterior->getdueno()->getContacto();
			txtCHora->Text = anterior->getdueno()->getHora_llegada();
			txtATotal->Text = anterior->getcosto().ToString();
			if (anterior->getpagado()) {
				radioButtonSI->Checked = true;
				radioButtonNO->Checked = false;
			}
			else {
				radioButtonSI->Checked = false;
				radioButtonNO->Checked = true;
			}
		}
	}
	private: System::Void Siguiente_Click(System::Object^ sender, System::EventArgs^ e) {
		datos_atencion^ siguiente;
		siguiente = lista_atencion->Siguiente(txtCDueño->Text); //Devuelve el anterior a uno de la lista
		if (siguiente != nullptr) {
			txtCDueño->Text = siguiente->getdueno()->getNombre();
			txtCContacto->Text = siguiente->getdueno()->getContacto();
			txtCHora->Text = siguiente->getdueno()->getHora_llegada();
			txtATotal->Text = siguiente->getcosto().ToString();
			if (siguiente->getpagado()) {
				radioButtonSI->Checked = true;
				radioButtonNO->Checked = false;
			}
			else {
				radioButtonSI->Checked = false;
				radioButtonNO->Checked = true;
			}
		}

	}
	private: System::Void elimina_Click(System::Object^ sender, System::EventArgs^ e) {
		if (lista_atencion->Eliminar(txtCDueño->Text)) {
			MessageBox::Show("Se eliminó con éxito", "Éxito", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("No se encontró ese nombre", "Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void txtATotal_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void dateTimeFecha_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
};
}