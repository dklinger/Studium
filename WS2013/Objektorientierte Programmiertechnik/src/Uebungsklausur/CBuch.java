package Uebungsklausur;

public class CBuch 
extends CMedium{
	String _autor;
	int _aKapitel;
	int _seiten;
	
	public CBuch()
	{
		
	}
	
	public CBuch(String titel, String verlag, String oKennzeichen, CDatum eDatum, String autor, int kapitel, int seiten)
	{
		super(titel, verlag, oKennzeichen, eDatum);
		_autor = autor;
		_aKapitel = kapitel;
		_seiten = seiten;
	}
	
	public void Ausgabe()
	{
		System.out.println("Titel: " + _titel + ", Verlag: " + _verlag + ", Ordnungskennzeichen: " + _oKennzeichen + ", Erscheinungsdatum: " + _eDatum.getString() + ", Autor: " + _autor + ", Anzahl Kapitel: " + _aKapitel + ", Seitenumfang: " + _seiten);
	}
}
