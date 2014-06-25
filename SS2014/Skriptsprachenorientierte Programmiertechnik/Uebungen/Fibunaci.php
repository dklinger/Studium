<?php

$starttime = microtime(true);
echo fibunaci_Iterativ(30) ." ";
$endtime = microtime(true);

echo $endtime-$starttime ."\r\n";

$starttime = microtime(true);
echo fibunaci_Rekursiv(15) ." ";
$endtime = microtime(true);

echo $endtime-$starttime;

function fibunaci_Iterativ($stelle)
{
//	$akt = 0;
	$erg = 1;
	$start = 0;
	/*while($akt < $stelle)
	{
		$akt++;
		$tmp = $erg;
		$erg = $start + $erg;
		$start = $tmp;
	}*/
	
	for($i = 1; $i < $stelle; $i++)
	{
		$tmp = $erg;
		$erg = $start + $erg;
		$start = $tmp;
	}
	
	return $erg;
}
function fibunaci_Rekursiv($n)
{
	if($n == 1)
		return 1;
	if($n == 2)
		return 1;
	return fibunaci_Rekursiv($n-1) + fibunaci_Rekursiv($n-2);
}

?>