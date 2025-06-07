#pragma once

using namespace System;
using namespace std;
using namespace System::Collections::Generic;

namespace ClasesVeterinaria {
	public ref class datos {
	private:
		String^ Dueño;
		String^ Contacto;
		String^ Hora_llegada;
		int cantmascotas;
	public:
		datos(String^ Dueño, String^ Contacto, String^ Hora_llegada, int cantmascotas) {
			this->Dueño = Dueño;
			this->Contacto = Contacto;
			this->Hora_llegada = Hora_llegada;
			this->cantmascotas = cantmascotas;
		}
		String^ getDueño() { return Dueño; }
		String^ getContacto() { return Contacto; }
		String^ getHora_llegada() { return Hora_llegada; }
		int getcantmascotas() { return cantmascotas; }
		void setDueño(String^ _Dueño) { Dueño = _Dueño; }
		void setContacto(String^ _Contacto) { Contacto = _Contacto; }
		void setHora_llegada(String^ _Hora_llegada) { Hora_llegada = _Hora_llegada; }
		void setcantmascotas(int _cantmascotas) { cantmascotas = _cantmascotas; }
	};
	public ref class cola_veterinaria
	{
	private:
		LinkedList<datos^>^ cola; //defino la decola
	public:
		cola_veterinaria() {
			cola = gcnew LinkedList<datos^>();
		}
		void AgregarInicio(datos^ c) {
			cola->AddFirst(c);
		}
		void AgregarFinal(datos^ c) {
			cola->AddLast(c);
		}
		datos^ EliminarInicio() {
			if (cola->Count == 0) return nullptr;
			datos^ dato = cola->First->Value;
			cola->RemoveFirst();
			return dato;
		}
		datos^ EliminarFinal() {
			if (cola->Count == 0) return nullptr;
			datos^ dato = cola->Last->Value;
			cola->RemoveLast();
			return dato;
		}
		LinkedList<datos^>^ ObtenerLista() {
			return cola;
		}
		int ObtenerCantidad() {
			return cola->Count;
		}
	};
}
