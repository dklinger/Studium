<?php

$regex = "/[0-9]{3}-[0-9]{3}-[0-9]{2}/";

echo "BLZ: ";
$str = trim(fgets(STDIN));

if(preg_match_all($regex, $str, $hit))
{
	for($i = 0; $i < count($hit[0]); $i++)
	{
		file_put_contents("Bankleitzahl.txt", $hit[0][$i]."\r\n", FILE_APPEND);
	}	
}

?>