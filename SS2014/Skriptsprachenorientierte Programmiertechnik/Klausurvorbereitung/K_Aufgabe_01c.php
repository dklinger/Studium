<?php

$str = trim(fgets(STDIN));
$strToComp = "Hallo Welt";

if(strlen($str) <> strlen($strToComp))
{
	echo "Unterschiedliche L�nge";
}
else
{
	echo "gleichlang";
}

?>