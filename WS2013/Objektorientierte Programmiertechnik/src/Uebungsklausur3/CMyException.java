package Uebungsklausur3;

public class CMyException extends Exception{

	int _fehlerNum;
	
	public CMyException(int fehlerNum, String fehlertext)
	{
		super(fehlertext);
		
		_fehlerNum = fehlerNum;
	}
}
