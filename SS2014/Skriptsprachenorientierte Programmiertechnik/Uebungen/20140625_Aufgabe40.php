<?php

$file = "c:\\temp\\20140625_Aufgabe40_file.txt";
$content = file_get_contents($file);
print("Text: ". $content ."\r\n\r\n");

//\1 ist der Verweis auf das was mit (\w+) gefunden wurde
//$1 verwende ich dann, um die Vorkommen von (\w+) mit preg_replace zu ersetzen
$pattern = '/\b(\w+)\s\1\b/';

if(preg_match_all($pattern, $content, $matches))
{
	print("Doppelte W�rter: \r\n");
	for($i=0; $i < count($matches[0]);$i++)
	{
		if(trim($matches[0][$i]) != "")
		{
			print("- ".trim($matches[1][$i]) ."\r\n");
		}
	}
}
?>