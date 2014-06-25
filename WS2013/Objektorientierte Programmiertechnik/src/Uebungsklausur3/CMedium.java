package Uebungsklausur3;

public abstract class CMedium {
	String _titel;
	String _verlag;
	String _oKZ;
	CDatum _eDat;
	
	public CMedium()
	{
		this("FOM for Dummies", "FOM", "123-456-789", new CDatum());
	}
	
	public CMedium (String titel, String verlag, String oKZ, CDatum eDat)
	{
		this._titel = titel;
		this._verlag = verlag;
		this._oKZ = oKZ;
		this._eDat = eDat;
	}
	
	abstract void Ausgabe();
}
