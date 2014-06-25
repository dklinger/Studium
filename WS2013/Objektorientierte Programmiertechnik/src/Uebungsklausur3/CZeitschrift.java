package Uebungsklausur3;

public class CZeitschrift extends CMedium {
	String _aName;
	int _cntKap;
	int _cntSeite;
	
	public CZeitschrift()
	{
		this("Zeitschrift", "Testverlag", "111-333", new CDatum(2012,5,6), "Max Muster", 10, 215);
	}
	
	public CZeitschrift(String titel, String verlag, String oKZ, CDatum eDat, String aName, int cntKap, int cntSeite)
	{
		super (titel, verlag, oKZ, eDat);
		this._aName = aName;
		this._cntKap = cntKap;
		this._cntSeite = cntSeite;
	}

	
	void Ausgabe() 
	{
		System.out.println(_titel + "," + _verlag + "," + _oKZ + "," + _eDat.getString() + "," + _aName + "," + _cntKap + "," + _cntSeite);
	}		
}
