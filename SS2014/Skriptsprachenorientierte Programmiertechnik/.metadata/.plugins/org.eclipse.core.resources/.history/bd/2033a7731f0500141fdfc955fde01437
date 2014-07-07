<?php
function primfaktor_zerlegung($zahl)
{
	$zerlegung = Array();
	$temp=$zahl;
	for($i=2; $i<= $zahl; $i++)
	{
		while($temp%$i == 0)
		{
			array_push($zerlegung, $i);
			$temp = $temp/$i;
		}		
	}
	
	return $zerlegung;
}

echo "Zahl: ";
$zahl = trim(fgets(STDIN));
$erg = primfaktor_zerlegung($zahl);
print_r($erg);