
public class DatumHaupt {

	public static void main(String argv[])
	{
		CDatum meinDatum = new CDatum();
		CDatum deinDatum = new CDatum();
		
		meinDatum.setDatum(2013, 9, 30);
		
		deinDatum.setDatum(meinDatum);
		
		meinDatum.ausgabe();
		deinDatum.ausgabe();
		
		CZeit meineZeit = new CZeit(12,0,0);
		meineZeit.ausgabe();
		
		meineZeit.setZeit(20, 34, 30);
		
		System.out.println(meineZeit.toString());
	}	
}
