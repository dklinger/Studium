package Uebungsklausur;

public class CHoerbuch 
extends CMedium
{
	public CHoerbuch()
	{
		
	}
		
		public void Ausgabe()
		{
			System.out.println("Titel: " + _titel + ", Verlag: " + _verlag + ", Ordnungskennzeichen: " + _oKennzeichen + ", Erscheinungsdatum: " + _eDatum.getString());
		}
}
