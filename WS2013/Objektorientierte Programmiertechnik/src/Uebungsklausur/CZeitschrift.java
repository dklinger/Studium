package Uebungsklausur;

public class CZeitschrift 
extends CMedium
{
	public CZeitschrift()
	{
		
	}
	
	public void Ausgabe()
	{
		System.out.println("Titel: " + _titel + ", Verlag: " + _verlag + ", Ordnungskennzeichen: " + _oKennzeichen + ", Erscheinungsdatum: " + _eDatum.getString());
	}
}
