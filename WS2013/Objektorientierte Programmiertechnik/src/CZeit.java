
public class CZeit {
	int std;
	int min;
	int sec;
	
	public CZeit(CZeit neu)
	{
		this.std = neu.std;
		this.min = neu.min;
		this.sec = neu.sec;
	}
	
	public CZeit(int std, int min, int sec)
	{
		this.std = std;
		this.min = min;
		this.sec = sec;
	}
	
	public CZeit()
	{
		this (0,0,0);
	}
	
	public int getStd() {
		return std;
	}
	public void setStd(int std) {
		this.std = std;
	}
	public int getMin() {
		return min;
	}
	public void setMin(int min) {
		this.min = min;
	}
	public int getSec() {
		return sec;
	}
	public void setSec(int sec) {
		this.sec = sec;
	}
	
	public void setZeit(int std, int min, int sec)
	{
		this.std = std;
		this.min = min;
		this.sec = sec;
	}
	
	public void setZeit (CZeit neu)
	{
		this.std = neu.std;
		this.min = neu.min;
		this.sec = neu.sec;
	}
	
	public void ausgabe()
	{
		System.out.println(std + "." + min + "." + sec);
	}
	
	public CZeit getZeit()
	{
		return this;
	}
	
	public String toString()
	{
		return std + "." + min + "." + sec;
	}
	
}
