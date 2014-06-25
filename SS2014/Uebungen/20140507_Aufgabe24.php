<?php

$centBetrag = 100;
$startJahr = 2012;
$endJahr = $startJahr;

//Schleife
/*
do {
	addZinsen($centBetrag, 3, $endJahr);
}
while($centBetrag < 10000);
*/

//Rekursion
addZinsenRekursion($centBetrag, 3, $endJahr, 10000);

echo "100€ erreicht in: $endJahr";

function addZinsen(&$centBetrag, $zinsen, &$jahr)
{
	$jahr++;
	$centBetrag = (int)($centBetrag + ($centBetrag * $zinsen / 100));
	echo "Jahr: $jahr, Kontostand in Euro: ". doubleval($centBetrag / 100) ."€\r\n";
}

function addZinsenRekursion(&$centBetrag, $zinsen, &$jahr, $zielBetrag)
{
	$jahr++;
	$centBetrag = (int)($centBetrag + ($centBetrag * $zinsen / 100));
	echo "Jahr: $jahr, Kontostand in Euro: ". doubleval($centBetrag / 100) ."€\r\n";
	if($centBetrag < $zielBetrag)
	{
		$centBetrag = addZinsenRekursion($centBetrag, $zinsen, $jahr, $zielBetrag);
	}
	//return $centBetrag;
}