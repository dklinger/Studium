<?php

$netto = 100;

echo "Brutto: ".BruttoPreis($netto);

function BruttoPreis($nettoPreis)
{
	$brutto = $nettoPreis * 1.19;
	
	return $brutto;
}

?>