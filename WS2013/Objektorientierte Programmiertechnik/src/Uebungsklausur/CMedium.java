package Uebungsklausur;

public abstract class CMedium {
	String _titel;
	String _verlag;
	String _oKennzeichen;
	CDatum _eDatum;
	
	public CMedium(String titel, String verlag, String oKennzeichen, CDatum eDatum)
	{
		_titel = titel;
		_verlag = verlag;
		_oKennzeichen = oKennzeichen;
		_eDatum = eDatum;
	}
	
	public CMedium()
	{
		this("Dummy", "Dummy-Verlag", "aaBBccDD", new CDatum());
	}
	
	public abstract void Ausgabe();
	
}
