package Uebungsklausur3;

public class CMain {

	public static void main(String[] args) {
		
		CBuch buch = new CBuch();
		CZeitschrift zschrift = new CZeitschrift();
		CHoerbuch hoerb = new CHoerbuch();
		
		CMedium[] medien = new CMedium[3];
		medien[0] = buch;
		medien[1] = zschrift;
		medien[2] = hoerb;
		
		for(int i = 0; i<3;i++)
		{
			medien[i].Ausgabe();
		}
		
		for(int i=0;i<3;i++)
		{
			if(medien[i] instanceof CBuch)
			{
				((CBuch)medien[i]).Ausgabe();
			}
			else if(medien[i] instanceof CZeitschrift)
			{
				((CZeitschrift)medien[i]).Ausgabe();
			}
			else if(medien[i] instanceof CHoerbuch)
			{
				((CHoerbuch)medien[i]).Ausgabe();
			}
		}			
	}

}
