package Uebungsklausur;

public class CMyException 
extends Exception{
	int _errorNumber;
	
	public CMyException(String message, int errorNumber)
	{
		super(message);
		_errorNumber = errorNumber;
	}
}
