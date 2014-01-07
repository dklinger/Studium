package Konto;

public class CKonto {

	private int _kontonummer;
	private double _guthabensZins;
	
	public double get_guthabensZins() {
		return _guthabensZins;
	}

	public void set_guthabensZinss(double zins)
		throws ToMuchZinsException
	{
		System.out.println("Versuche Guthabenszins auf " + zins + " zu setzen.");
		if(zins > 6)
		{
			throw new ToMuchZinsException("Sind Sie wahnsinnig???");
		}
		else
		{
			this._guthabensZins = zins;
		}

		System.out.println("Guthabenszins erfolgreich auf " + _guthabensZins + " gesetzt.");
	}

	public int get_kontonummer() {
		return _kontonummer;
	}

	public void set_kontonummer(int _kontonummer) {
		this._kontonummer = _kontonummer;
	}
}
