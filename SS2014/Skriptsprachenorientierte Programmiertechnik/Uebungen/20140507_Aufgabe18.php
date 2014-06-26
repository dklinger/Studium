<?php

$z1 = trim(fgets(STDIN));
$z2 = trim(fgets(STDIN));

echo "Zahl 1: $z1, Zahl 2: $z2";
swap($z1, $z2);
echo "\r\nZahl 1: $z1, Zahl 2: $z2";

function swap(&$zahl1, &$zahl2)
{
	$tempZahl = $zahl1;
	$zahl1 = $zahl2;
	$zahl2 = $tempZahl;
}
?>