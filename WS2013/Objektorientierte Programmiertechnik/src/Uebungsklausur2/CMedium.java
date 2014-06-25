package Uebungsklausur2;

public abstract class CMedium {
	String Titel, Verlag, OKennzeichen;
	CDatum ErschDatum;
	
	public CMedium()
	{
		this("Timmey Jimmey", "Springer of doom", "blubb123", new CDatum(5,3,2013));
	}
	
	public CMedium(String titel, String verlag, String oKennzeichen, CDatum erschDatum)
	{
		Titel = titel;
		Verlag = verlag;
		OKennzeichen = oKennzeichen;
		ErschDatum = erschDatum;
	}
		
public abstract void Ausgabe();
}
