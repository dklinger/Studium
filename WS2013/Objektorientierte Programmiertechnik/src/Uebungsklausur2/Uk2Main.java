package Uebungsklausur2;

public class Uk2Main {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		CBuch buch = new CBuch();
		CZeitschrift zeitschrift = new CZeitschrift();
		CHoerbuch hoer = new  CHoerbuch();
		
		CMedium[] medien = new CMedium[3];
		
		medien[0] = buch;
		medien[1] = zeitschrift;
		medien[2] = hoer;
		
		for(int i = 0; i < medien.length; i++)
		{
			medien[i].Ausgabe();
		}
		
		for(int i = 0; i < medien.length; i++)
		{
			if(medien[i] instanceof CBuch)
			{
				((CBuch)medien[i]).Ausgabe();
			}
			else
			{
				//blablabla
			}
		}
	}

}
