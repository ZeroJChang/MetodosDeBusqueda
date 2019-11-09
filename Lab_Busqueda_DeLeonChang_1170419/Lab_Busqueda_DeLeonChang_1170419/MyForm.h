#pragma once

namespace LabBusquedaDeLeonChang1170419 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Diagnostics;
	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
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
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtVector;
	private: System::Windows::Forms::Button^ btnBinaria;
	private: System::Windows::Forms::Button^ btnBusquedaSecuencial;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ txtPosicion;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtVector = (gcnew System::Windows::Forms::TextBox());
			this->btnBinaria = (gcnew System::Windows::Forms::Button());
			this->btnBusquedaSecuencial = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtPosicion = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(353, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(211, 46);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generar arreglo";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::Button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(27, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(185, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ingrese cantidad de numero";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(218, 27);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 2;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(47, 147);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(47, 112);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 17);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Valor a buscar";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(164, 145);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(91, 85);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Buscar con HASH";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::Button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(30, 64);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(90, 17);
			this->label3->TabIndex = 6;
			this->label3->Text = L"El vector es: ";
			// 
			// txtVector
			// 
			this->txtVector->Location = System::Drawing::Point(126, 64);
			this->txtVector->Name = L"txtVector";
			this->txtVector->Size = System::Drawing::Size(554, 22);
			this->txtVector->TabIndex = 7;
			// 
			// btnBinaria
			// 
			this->btnBinaria->Location = System::Drawing::Point(261, 147);
			this->btnBinaria->Name = L"btnBinaria";
			this->btnBinaria->Size = System::Drawing::Size(91, 85);
			this->btnBinaria->TabIndex = 8;
			this->btnBinaria->Text = L"Buscar con secuencial";
			this->btnBinaria->UseVisualStyleBackColor = true;
			this->btnBinaria->Click += gcnew System::EventHandler(this, &MyForm::BtnBinaria_Click);
			// 
			// btnBusquedaSecuencial
			// 
			this->btnBusquedaSecuencial->Location = System::Drawing::Point(358, 147);
			this->btnBusquedaSecuencial->Name = L"btnBusquedaSecuencial";
			this->btnBusquedaSecuencial->Size = System::Drawing::Size(91, 85);
			this->btnBusquedaSecuencial->TabIndex = 9;
			this->btnBusquedaSecuencial->Text = L"Buscar con binaria";
			this->btnBusquedaSecuencial->UseVisualStyleBackColor = true;
			this->btnBusquedaSecuencial->Click += gcnew System::EventHandler(this, &MyForm::BtnBusquedaSecuencial_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(44, 271);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 17);
			this->label4->TabIndex = 10;
			this->label4->Text = L"El valor ";
			// 
			// txtPosicion
			// 
			this->txtPosicion->Location = System::Drawing::Point(98, 271);
			this->txtPosicion->Name = L"txtPosicion";
			this->txtPosicion->Size = System::Drawing::Size(529, 22);
			this->txtPosicion->TabIndex = 11;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(833, 470);
			this->Controls->Add(this->txtPosicion);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->btnBusquedaSecuencial);
			this->Controls->Add(this->btnBinaria);
			this->Controls->Add(this->txtVector);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Arreglo de numeros
	private: ArrayList^ Arreglo;
			 // Tabla Hash
	private: Hashtable^ TablaHash;
	private: int size;

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int cantidad = System::Convert::ToInt16(textBox1->Text);
		generarNumerosAleatoreos(cantidad);
		MostrarNumerosAleatoreos();
		llenarTablaHash(cantidad);
		size = cantidad;
	}

			 //LLENA EL VECTOR DE FORMA ALEATORIA :D
	private: System::Void generarNumerosAleatoreos(int size) {
		Arreglo = gcnew ArrayList(size);
		Random^ random = gcnew Random();
		for (int i = 0; i < size; i++) {
			Arreglo->Add(random->Next(0, 100));
		}
	}
	private: System::Void MostrarNumerosAleatoreos() {
		String^ valores = "";
		for each (int num in Arreglo)
		{
			valores = valores + num + " ";
		}
		txtVector->Text = valores;
		//System::Windows::Forms::MessageBox::Show(valores);
	}

	private: System::Void llenarTablaHash(int size) {
		TablaHash = gcnew Hashtable(size * 2);
		int llave = 0;
		for each (int num in Arreglo) {
			llave = num % size * 2;
			while (TablaHash[llave] != nullptr) {
				llave++;
			}
			TablaHash->Add(llave, num);
		}
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int valorBuscar = System::Convert::ToInt16(textBox2->Text);
		PosicionEnHash(valorBuscar, size);

	}
			 /*
	private: System::Int16 PosicionEnHash(int valorBuscar, int size) {
		int posicion = valorBuscar % (size);
		if (System::Convert::ToInt16(TablaHash[posicion]) == valorBuscar)
			return posicion;
		while (System::Convert::ToInt16(TablaHash[posicion]) != valorBuscar)
		{
			posicion++;
		}
		return posicion;
//		if (posicion != nullptr) {
			txtPosicion->Text = "se encuentra en la posicion " + posicion;
	//	}
	}*/

	private: System::Int16 PosicionEnHash(int valorBuscar, int size) {
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();
		bool si = false;
		int posicion = valorBuscar % (size * 2);
		if (System::Convert::ToInt16(TablaHash[posicion]) == valorBuscar) {
			si = true;
			return posicion;
		}
		else {
			si = false;
		}
		/*
		while (TablaHash[posicion] != valorBuscar) {
			posicion++;
		}*/
		if (si = true) {
			txtPosicion->Text = "se encuentra en la posicion " + posicion;
		}
		else {
			txtPosicion->Text = "no se encuentra en este arreglo";
			return posicion;
		}

		Timer->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));
	};
	private: System::Void BtnBinaria_Click(System::Object^ sender, System::EventArgs^ e) {
		int valorBuscar = System::Convert::ToInt16(textBox2->Text);
		//PosicionEnHash(valorBuscar, size);
		
		BusquedaSecuencial(Arreglo,valorBuscar, size);
	
	}
			 //DADO POR ING ROLDAN
	private: System::Int16 BusquedaSecuencial(ArrayList^ V, int valorBuscar, int size) {
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();	
		bool si = false;
		String^ xfa="";
		for (int i = 0; i < size; i++) {
			if (valorBuscar == System::Convert::ToInt16(Arreglo[i])) {
				xfa = xfa + " , "+ i;
				txtPosicion->Text = "se encuentra en la posicion " + xfa;
				si = true;
			}
		}
		if (si == false) {
			txtPosicion->Text = "no se encuentra en este arreglo";
		}
		Timer->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));
		return size;
		
	}
private: System::Void BtnBusquedaSecuencial_Click(System::Object^ sender, System::EventArgs^ e) {
	int valorBuscar = System::Convert::ToInt16(textBox2->Text);

	int funcionaDx= BusquedaBinaria(Arreglo, valorBuscar, size);
	txtPosicion->Text=("se encuentra en la posicion " + funcionaDx.ToString());
}
	private: System::Int16 BusquedaBinaria(ArrayList^ Arreglo, int valorBuscar, int size) {
		Stopwatch^ Timer = gcnew Stopwatch();
		Timer->Start();
		int first = 0;
		int middle;
		int last = size - 1;
		while (first <= last)
		{
			middle = (first + last) / 2;

			if (valorBuscar == System::Convert::ToInt16(Arreglo[middle]))
			{
				return middle + 1;
			}
			else {
				if (System::Convert::ToInt16(Arreglo[middle]) > valorBuscar)
				{
					last = middle - 1;
				}
				else {
					first = middle + 1;
				}
			}
		}
		Timer->Stop();
		System::Windows::Forms::MessageBox::Show("Tiempo de ejecución: " + System::Convert::ToString(Timer->Elapsed));
		return -1;
		//return middle + 1;
	}
}
	;
}
