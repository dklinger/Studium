<?php

echo "Radius: ";
$radius = trim(fgets(STDIN));

if(is_numeric($radius))
{
	$volumen = (4/3) * 3.1415926 * ($radius * $radius * $radius);
	echo $volumen;
}

?>