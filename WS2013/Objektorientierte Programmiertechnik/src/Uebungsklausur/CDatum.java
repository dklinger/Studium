package Uebungsklausur;

public class CDatum {
	int jahr;
	int monat;
	int tag;

	public CDatum(int iJahr, int iMonat, int iTag)
	{
		jahr = iJahr;
		monat = iMonat;
		tag = iTag;
	}
	
	public CDatum()
	{
		jahr = 2000;
		monat = 1;
		tag = 1;
	}
	
	public int getJahr()
	{
		return jahr;
	}
	
	public int getMonat()
	{
		return monat;
	}
	
	public int getTag()
	{
		return tag;
	}
	
	public String getString()
	{
		return tag + "." + monat + "." + jahr;
	}
}
