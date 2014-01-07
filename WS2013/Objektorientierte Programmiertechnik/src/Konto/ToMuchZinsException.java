package Konto;

public class ToMuchZinsException extends Exception {

	/**
	 * 
	 */
	private static final long serialVersionUID = 1L;

	public ToMuchZinsException(String message)
	{
		super(message);
	}
}
