package Uebungsklausur3;

public class CDatum {

	int _jahr;
	int _monat;
	int _tag;
	
	public CDatum()
	{
		this(2000, 1, 1);
	}
	
	public CDatum(int jahr, int monat, int tag)
	{
		this._jahr = jahr;
		this._monat = monat;
		this._tag = tag;
	}
	
	public int GetJahr()
	{
		return _jahr;
	}
	
	public int GetMonat()
	{
		return _monat;
	}
	
	public int GetTag()
	{
		return _tag;
	}
	
	public String getString()
	{
		return GetTag() + "." + GetMonat() + "." + GetJahr();
	}
}
   