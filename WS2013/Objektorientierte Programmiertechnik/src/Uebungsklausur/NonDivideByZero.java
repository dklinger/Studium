package Uebungsklausur;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class NonDivideByZero {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		double a = 0;
		double b = 0;
		
		BufferedReader reader= new BufferedReader(new InputStreamReader(System.in)); 
		String line1=""; 
		String line2=""; 
		
		System.out.flush(); 
		try
		{
			line1=reader.readLine();
		}
		catch(Exception ex){}
		
		a = new Double(line1).doubleValue();
		//Double.parseDouble(line1);

		System.out.flush(); 
		try
		{
			line2=reader.readLine();
		}
		catch(Exception ex){}
		
		b = new Double(line2).doubleValue();

		try
		{
			double c = NonDivideByZero(a,b);
			System.out.println(c);
		}
		catch(CMyException ex)
		{
			System.out.println("Fehler: " + ex.getMessage() + ", ErrorNumber: " + ex._errorNumber);
		}
	}
	
	public static double NonDivideByZero(double a, double b)
	throws CMyException
	{
		double ergebnis = a / b;
		if(ergebnis < 0.0000000001)
		{
			throw new CMyException("Zu klein", 123456);
		}
		
		return ergebnis;
	}

}
