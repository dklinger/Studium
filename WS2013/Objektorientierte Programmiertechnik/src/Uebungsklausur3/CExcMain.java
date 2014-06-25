package Uebungsklausur3;

import java.io.*;

public class CExcMain {

	public static void main(String[] args) {
		double zaehler, nenner, ergebnis;
		String text = "";
		
		System.out.println("Zaehler eingeben:");
		BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));
		System.out.flush();
		
		try {
			text = reader.readLine();
		} catch (Exception e) {}
		
		zaehler = Double.parseDouble(text);
		
		System.out.println("Nenner eingeben:");
		
		try
		{
			text = reader.readLine();
		}
		catch(Exception ex){}
		nenner = Double.parseDouble(text);
		try
		{
			ergebnis = NonDivideByZero(zaehler, nenner);			
		}
		catch(CMyException ex)
		{
			System.out.println("Fehler 1");			
		}
		catch(Exception ex)
		{
			System.out.println("anderer Fehler" + ex.getMessage());
		}
		
	}
	
	public static double NonDivideByZero(double zaehler, double nenner)
		throws CMyException
		{
			double erg;
			
			erg = zaehler / nenner;
			
			if(erg < 0.0000000001)
			{
				throw new CMyException(123456, "Error occured");
			}
			
			return erg;
		}

}