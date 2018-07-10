#include <iostream>
#include <random>
#include <vector>

#include <iomanip>      // std::setprecision

using namespace std;

#define pi 3.14159265359 

std::random_device rd;
std::mt19937 gen(rd());
std::uniform_real_distribution<> rdiametro(0,7);
//std::uniform_real_distribution<> rlongitud(0,33);

int NumTuberias = 139;
int NumNudos = 91;



//vector<float> Diametros{
//	304.8,406.4,508,609.6,762,1016	
//};

//vector<float> C_Diametros{
//	45.73,70.40,98.38,129.33,180.75,278.28	
//};

/*vector<float> Longitudes={
	100,1350,900,1150,1450,450,850,850,800,950,1200,3500,
	800,500,550,2730,1750,800,400,2200,1500,500,2650,1230,
	1300,850,300,750,1500,2000,1600,150,860,950
};*/


vector<float> Longitudes={
353.98,426.62,308.48,487.19,563.69,19.64,208.61,211.23,524.28,
370.91,21.81,24.81,374.33,25.1,397.19,429.96,25.5,25.85,433.75,24.33,
282.69,282.17,414.12,89.94,162.74,27.21,25.51,412.55,418.11,487.13,27.61,
416.73,25.07,417.16,357.02,374.81,417.2,24.71,452.56,541.75,534.02,437.71,
24.38,23.82,437.64,24,398.23,398.03,25.76,22.63,438.99,23.57,21.5,439.01,
364.18,285.88,117.34,364.4,161.98,393.05,24,23.93,813.04,532.68,24.1,598.69,
24.1,438,363.83,364.07,483,20,483,24,389.97,389.97,483,363.61,24.11,407.26,
365.94,24,415,24,415,24,389.97,389.97,24,24.48,338.14,20.48,411.98,25.89,
324.69,24,154.45,455.37,24,362.78,26.09,24.53,23.83,375.23,379.94,323.91,
23.9,498.71,20.76,545.77,273.7,98.34,462.12,24,24,273.7,398.34,397.71,
273.7,27.04,398.14,398.14,273.7,224.45,209.02,24,376.94,498.25,24.92,377.57,
498.25,327.74,328.64,400.84,363.83,415,411.77,389.97,273.7,
};




vector<float> Diametros{
	83.4,102,129.8,148.4,185.4,231.8,292.2,329.2
};




vector<float> Cotas={483.91,468.35,468.73,466.74,462,460.24,467.27,463.12,457.76,459.04,
469,469,459.05,458.43,469.08,469,458.11,456.23,457.53,466.77,466.5,457.32,
453.8,462.2,461.91,453.55,448.57,456.01,456.94,413.8,445.81,446.97,458.56,
458.45,446.78,446.52,457.6,457.64,446.62,444,452.81,455.47,415.21,452.81,
443.3,438.86,429.28,431.95,432.26,443.45,445.83,434.64,434.12,422.9,421.69,
431.86,431.45,421.38,418.83,428.82,428.36,418.76,416.2,425.8,426.18,415.66,
403.94,431.32,409,446.3,418.3,418.3,425.77,409.63,417.46,425.16,420.84,455,
445,454,443.97,445.74,443.26,445.17,435.42,433.67,433.03,434.73,424.96,423.01,
422.36};

vector<float> Demanda = {0,0,0,0,0,0,0.46,0.46,2.2,1.76,1.36,1.55,1.61,1.71,
1.64,1.62,1.86,0.7,0.7,1.57,2.5,3.36,2.08,2.34,1.97,2.37,1.58,1.97,
3.18,2.7,3.23,3.7,2.32,2.32,3.38,2.3,1.99,1.9,1.9,1.9,1.07,0.62,2.32,
15.16,6.76,2.37,2.45,2.83,2.05,1.9,1.99,3.29,1.81,1.91,1.86,1.76,2.66,
2.46,2.09,1.82,1.83,1.66,1.56,2.04,0,1.54,2.23,3.88,1.26,3.84,1.45,
1.23,0.19,1.74,1.2,2.22,1.2,1.05,2.96,1.05,2.02,1.46,1.62,2.62,
2.57,1.67,1.53,3.18,2.2,1.34,2.7};


vector<float> AlturaPiezometrica = {
460,481.298,479.471,478.317,477.718,477.627,
483.742,479.228,474.941,475.205,480.998,481.08,475.001,474.086,479.224,
79.243,474.043,472.513,472.122,477.599,477.708,472.057,473.94,477.278,477.044,
473.102,471.257,470.018,474.483,448.766,469.317,469.268,474.486,474.561,
469.262,466.377,473.873,473.864,465.619,463.972,471.669,473.183,448.77,
467.678,463.165,456.372,450.785,452.98,452.92,463.184,464.389,453.039,
452.721,451.042,450.372,452.17,451.732,450.213,449.704,450.532,450.317,
449.684,449.563,449.755,449.756,449.554,449.435,468.688,449.552,469.165,
449.666,449.684,449.27,449.561,449.835,449.191,450.067,469.482,469.213,
469.468,458.395,458.391,457.979,457.983,453.946,452.476,451.767,450.069,
449.312,449.306,449.199
};






class Tuberia{
public:
	float longitud;
	float diametro;

	Tuberia(float longitud,float diametro);
};

Tuberia::Tuberia(float longitud,float diametro){
	this->longitud = longitud;
	this->diametro = diametro;
}




class Individuo{
public:
	vector<Tuberia*> tuberias;
	float costo;
	float confiabilidad;
	Individuo(vector<Tuberia*> &tuberias);
};

Individuo::Individuo(vector<Tuberia*> &tuberias){
	this->tuberias = tuberias;
	costo=0;
	confiabilidad=0;
}	


void print_v(vector<float> v){

	for (int i = 0; i < v.size(); ++i)
	{
		cout<<"Longitud "<<v[i]<<endl;
	}
}



void print_indiv(Individuo* indiv){


	for (int i = 0; i < indiv->tuberias.size(); ++i)
	{
		cout<<"longitud "<<indiv->tuberias[i]->longitud<<
		" Diametro "<<indiv->tuberias[i]->diametro<<endl;
	}
}




Individuo* generar_individuo(){

	Individuo* indiv;
	vector<Tuberia*> tuberias;

	Tuberia* tuberia;
	int d_index=0;

	for (int i = 0; i < Longitudes.size(); ++i)
	{	
		d_index=rdiametro(gen);
		tuberia = new Tuberia(Longitudes[i],Diametros[d_index]);
		tuberias.push_back(tuberia);
	}

	indiv = new Individuo(tuberias);

	return indiv;
}



float f_costo(Individuo* indiv){


	float costo_total=0;


	for (int i = 0; i < indiv->tuberias.size(); ++i)
	{
		costo_total= costo_total + (0.01*indiv->tuberias[i]->longitud*(pow(indiv->tuberias[i]->diametro,1.6948)));
		//cout<<"costo "<< std::setprecision(8) <<costo_total<<endl;

		//costo_total= costo_total + indiv->tuberias[i]->costo*indiv->tuberias[i]->longitud*(pow(indiv->tuberias[i]->diametro,1.6948));
	}

	return costo_total;
}


void print(vector<float> v){
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<endl;
	}
}

void print_m(vector<vector<float>> &m){

	for (int i = 0; i < m.size(); ++i)
	{
		for (int j = 0; j < m[i].size(); ++j)
		{
			cout<<m[i][j]<<" , ";
		}
		cout<<endl;
	}
}


void calcular_altura_piezometrica(vector<Individuo*> poblacion){

//Método del gradiente
int RS=1;//Número de reservorios

/*Matriz de conectividad de la red de agua potable
%--------------------------------------------------------------------------
% MC=[-1 1 0 0 0 0
% 0 -1 1 0 0 0
% 0 0 0 1 -1 0
% 0 0 0 1 -1 0
% 0 -1 0 0 1 0
% 0 0 0 0 1 -1
% -1 0 0 0 0 1];
*/

vector<float> Qi(NumTuberias,0.1);//Se asumen caudales

//print(Qi);

int NumIndividuos = 4;
vector<vector<float>> Mfriccion(NumTuberias,vector<float>(NumIndividuos,0));
//print_m(Mfriccion);

//se generan matrices de tamano predefinido
vector<vector<float>> Malfa(NumTuberias,vector<float>(NumIndividuos,0));
vector<vector<float>> H11(NumTuberias,vector<float>(NumIndividuos,0));
vector<vector<float>> A11(NumTuberias,vector<float>(NumIndividuos,0));
vector<vector<float>> MQ(NumTuberias,vector<float>(NumIndividuos,0));
vector<vector<float>> HF(NumTuberias,vector<float>(NumIndividuos,0));


vector<vector<float>> ALTURASPIEZOMETRICAS(NumTuberias,vector<float>(NumIndividuos,0));


for (int z = 0; z < poblacion.size(); ++z)
{
	for (int up = 0; up <50; ++up)
	{
		for (int i = 0; i < poblacion[z]->tuberias.size(); ++i)
		{
			/* empiez el coolebrook-White */
			float D = poblacion[z]->tuberias[i]->diametro/1000;
			float Q = abs(Qi[i]);
			float vs = 1.14*pow(10,-6);
			float E = 0.0015;
			float Reynold = 4*Q/(pi*D*vs);
			int tol=100;

			float friccion= 0.001375*pow(1+(2000*E/(D*1000)+1000000.0/Reynold,0.333333333);
			
			if(Reynold<=2000){
				friccion = 64/Reynold;
			}else{

				while(tol>=0.000001){
					cout<<"dentro"<<endl;
					LHS = 1/(pow(friccion,0.5));
					RHS = -2*log10((E/(3.71*D*1000))+2.51/Reynold*pow(friccion,0.5));
					friccion = pow(1/RHS,2);
					tol= abs(LHS-RHS);	
				}
			}

		//Cálculo de las matrices Malfa Y A11, se deberán usar los caudales en valor absoluto
		Malfa[i][0]=(friccion*(Longitud[i][1]/D)*(pow((Q/((pi*pow(D,2)/4)),2)*(1/(2*9.81)))/pow(Q,2);
		Mfriccion[i][0]=friccion;

		A11[i,i]=(friccion*(Longitud[i,1]/D)*((Q/pow((pi*pow(D,2)/4),2)*(1/(2*9.81)))/(Q);
			
		}

		A12=MC(1:NumTuberias,RS+1:NumNudos);
		A21=MC(1:NumTuberias,RS+1:NumNudos);
		A10=MC(1:NumTuberias,1:RS);
		
		Q1=Qi;
		Ho=Cotas(1:RS,1:RS);
		Qo=Demanda;
		q=Qo(RS+1:NumNudos);
		
		Hnuevos=-inv(A21*inv(2*eye(NumTuberias,NumTuberias)*A11)*A12)*(A21*inv(2*
		eye(NumTuberias,NumTuberias)*A11)*(A11*Q1+A10*Ho)-(A21*Q1-q));
		
		Qnuevos=(eye(NumTuberias,NumTuberias)-inv(2*eye(NumTuberias,NumTuberias)*A11)*
		A11)*Q1-(inv(2*eye(NumTuberias,NumTuberias)*A11)*(A12*Hnuevos+A10*Ho));

		Qi=Qnuevos;

		//end %fin del cálculo de la red.


	}
}








}



float f_confiabilidad(){

	float OM1 = 0;
	float OM2 = 0;
	float OM3 = 0;
	float ce = 0.60;
	float DemandaTotal = 0;
	
	float confiabilidad=0;

	for (int i = 1; i < AlturaPiezometrica.size(); ++i)
	{
		OM1 = OM1 + Demanda[i]*(AlturaPiezometrica[i] - (Cotas[i]+10));
		OM2 = OM2 + Demanda[i]*(Cotas[i] +10);
		DemandaTotal = DemandaTotal + Demanda[i];
	}


	OM3 = OM3 + DemandaTotal*Cotas[0];
	confiabilidad = ce*( OM1/(OM3-OM2));
	
	if(confiabilidad<0){
		confiabilidad=0;
	}

	return confiabilidad;

}



int main(){


	for (int i = 0; i < Demanda.size(); ++i)
	{
		Demanda[i] = Demanda[i]*0.001;
	}

	vector<Individuo*> poblacion;
	int tam = 4;




	//Individuo* indiv = generar_individuo();

	//print_indiv(indiv);


	for (int i = 0; i < tam; ++i)
	{
		 poblacion.push_back(generar_individuo());
	}

	for (int i = 0; i < poblacion.size(); ++i)
	{
		cout<<"costo "<< std::setprecision(8) << f_costo(poblacion[i])<<endl;
	}

	cout<<"num_longitudes "<< Longitudes.size() <<endl;

	cout<<"num_cotas "<< Cotas.size() <<endl;


	cout<<"num_demanda "<< Demanda.size() <<endl;

	cout<<"alturaPiezometrica "<< AlturaPiezometrica.size() <<endl;


	cout<<"confiabilidad "<<f_confiabilidad()<<endl;

	//print_v(Longitud);
	//print_d(T_Diametros);


	//cout<<"hello world"<<endl;

	calcular_altura_piezometrica();
}