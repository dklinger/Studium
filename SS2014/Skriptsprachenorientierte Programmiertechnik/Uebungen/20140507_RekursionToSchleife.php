<?php

echo "Fakultät von 3: ". fakultaet(-1);

function fakultaet($zahl)
{
	if($zahl < 0)
	{
		echo "not defined\r\n";
		return;
	}
	//Rekursion: 
	/*
	$fak = 1;
	if($zahl != 0)
	{
		$fak = $zahl * fakultaet($zahl - 1);
	}
	
	return $fak;
	*/
	
	//Als Schleife
	$fak = $zahl;
	for($i = 1; $i < $zahl; $i++)
	{
		$fak = $fak * $i;
	}
	
	return $fak;
}
?>