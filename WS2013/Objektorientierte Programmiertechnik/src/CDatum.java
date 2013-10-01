
public class CDatum {
	int jahr;
	int monat;
	int tag;

	
	public CDatum(int jahr, int monat, int tag)
	{
		this.jahr = jahr;
		this.monat = monat;
		this.tag = tag;				
	}
	
	public CDatum(CDatum neu)
	{
		this.jahr = neu.jahr;
		this.monat = neu.monat;
		this.tag = neu.tag;
	}
	
	public CDatum()
	{
		this(2000,1,1);
	}
	
	public int getJahr() {
		return jahr;
	}
	public void setJahr(int jahr) {
		this.jahr = jahr;
	}
	public int getMonat() {
		return monat;
	}
	public void setMonat(int monat) {
		this.monat = monat;
	}
	public int getTag() {
		return tag;
	}
	public void setTag(int tag) {
		this.tag = tag;
	}
	
	public void setDatum(int jahr, int monat, int tag)
	{
		this.jahr = jahr;
		this.monat = monat;
		this.tag = tag;				
	}
	
	public void setDatum(CDatum neu)
	{
		this.jahr = neu.jahr;
		this.monat = neu.monat;
		this.tag = neu.tag;
	}
	
	public void ausgabe()
	{
		System.out.println(jahr + "." + monat + "." + tag);
	}
	
	public CDatum getDatum()
	{
		return this;
	}
	
	public String toString()
	{
		return jahr + "." + monat + "." + tag;
	}
}
