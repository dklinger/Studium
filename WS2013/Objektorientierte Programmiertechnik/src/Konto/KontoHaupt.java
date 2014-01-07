package Konto;

public class KontoHaupt {

	public static void main(String[] args) {
		// TODO Auto-generated method stub

		try
		{
			CSparkonto spar = new CSparkonto();
			spar.set_guthabensZinss(4.5);
			
			CGirokonto giro = new CGirokonto();
			giro.set_guthabensZinss(8);
		}
		catch(ToMuchZinsException to)
		{
			System.out.println(to.getMessage());
		}
	}

}
