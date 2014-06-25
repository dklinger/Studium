package Uebungsklausur;

public class UebungHaupt {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		CBuch buch = new CBuch();
		CZeitschrift zeitschrift = new CZeitschrift();
		CHoerbuch hbuch = new CHoerbuch();
		
		CMedium[] medArr = new CMedium[3];
		
		medArr[0] = buch;
		medArr[1] = zeitschrift;
		medArr[2] = hbuch;

		for(int i = 0; i < medArr.length; i++)
		{
			medArr[i].Ausgabe();
		}

		for(int i = 0; i < medArr.length; i++)
		{
			if(medArr[i] instanceof CBuch)
			{
				((CBuch)medArr[i]).Ausgabe();
			}
			else if(medArr[i] instanceof CZeitschrift)
			{
				((CZeitschrift)medArr[i]).Ausgabe();
			}
			else if(medArr[i] instanceof CHoerbuch)
			{
				((CHoerbuch)medArr[i]).Ausgabe();
			}
		}
		
	}

}
