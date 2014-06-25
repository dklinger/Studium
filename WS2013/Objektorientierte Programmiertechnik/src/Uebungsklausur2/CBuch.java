package Uebungsklausur2;

public class CBuch
extends CMedium
{
	String AutorenName;
	int Kapitel, Seiten;
	
	public CBuch()
	{
		
	}
	
	public CBuch(String titel, String verlag, String oKennzeichen, CDatum erschDatum, String autorenName, int kapitel, int seiten)
	{
		super(titel, verlag, oKennzeichen, erschDatum);
		
		AutorenName = autorenName;
		Kapitel = kapitel;
		Seiten = seiten;
	}
	
	public void Ausgabe()
	{
		System.out.println("ich bin eine Ausgabe");
	}
}
