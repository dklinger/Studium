package Uebungsklausur2;

public class CDatum {
	int Jahr, Monat, Tag;
	
	public CDatum()
	{
		this(1,1,2000);
	}
	
	public CDatum(int tag, int monat, int jahr)
	{
		Tag = tag;
		Monat = monat;
		Jahr = jahr;
	}
	
	public int GetJahr()
	{
		return Jahr;
	}
	
	public int GetMonat()
	{
		return Monat;
	}
	
	public int GetTag()
	{
		return Tag;
	}
	
	public String getString()
	{
		return Tag + "." + Monat + "." + Jahr;
	}
}
