<?php

$ampel1 = new Ampel();

print "Initial: \r\n";
$ampel1->druckeZustand();

print "Gr�n auf true: \r\n";
$ampel1->schalteGruen(true);
$ampel1->druckeZustand();

print "Rot auf true: \r\n";
$ampel1->schalteRot(true);
$ampel1->druckeZustand();

print "Rot auf false: \r\n";
$ampel1->schalteRot(false);
$ampel1->druckeZustand();

print "Gr�n auf false: \r\n";
$ampel1->schalteGruen(false);
$ampel1->druckeZustand();

class Ampel {
	private $roteLampe;
	private $grueneLampe;

	function __construct()
	{
		$this->roteLampe = false;
		$this->grueneLampe = false;
	}
	
	function schalteRot($wert) 
	{
		$this->roteLampe = $wert;
		$this->grueneLampe = !$wert;		
	}
	
	function schalteGruen($wert) 
	{
		$this->grueneLampe = $wert;
		$this->roteLampe = !$wert;		
	}

	function druckeZustand()
	{
		print "Gr�n: ". ($this->grueneLampe ? "true" : "false") ."\r\n";
		print "Rot: ". ($this->roteLampe ? "true" : "false") ."\r\n\r\n";
	}
}
	


?>