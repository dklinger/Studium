<?php

$zahl = trim(fgets(STDIN));

$zahlAlsString = (string)$zahl;

echo "Quersumme von $zahl = ". quersummeFromArray(createArrFromSTring($zahlAlsString));
echo "\r\n";

$zahlArr = Array(3,5);
echo "Quersumme von ". print_r($zahlArr) ." = ". quersummeFromArray($zahlArr);
echo "\r\n";

$from = trim(fgets(STDIN));
$arrFromTo23 = createArrToZahl($from, 23);
echo "Summe = ". quersummeFromArray($arrFromTo23);

echo "\r\n";

echo "Durchschnitt: ". durchschnitt($arrFromTo23);

function createArrFromSTring($str)
{
	$arr = Array();
	for($i = 0; $i < strlen($str); $i++)
	{
		array_push($arr, $str[$i]);
	}
	
	return $arr;	
}

function quersummeFromArray($arr)
{
	$quersumme = 0;
	for($i = 0; $i < Count($arr); $i++)
	{
		$quersumme += $arr[$i];
	}
	
	return $quersumme;
}

function createArrToZahl($start, $to)
{
	if($start > $to)
	{
		echo "Start darf nicht größer als to sein.\r\n";
		return Array(0);
	}
	$arr = Array();
	
	for($i = $start; $i <= $to; $i++)
	{
		array_push($arr, $i);
	}
	
	return $arr;	
}

function durchschnitt($arr)
{
	$gesamt = quersummeFromArray($arr);
	$durchschnitt = $gesamt / Count($arr);
	return $durchschnitt;
}

?>