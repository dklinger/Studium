<?php

$file = "c:\\temp\\20140625_Aufgabe40_file.txt";
$content = file_get_contents($file);
print($content ."\r\n");
$pattern = "/\s+/";

$pattern2 = "/-?\d+/";
$erg = 0;

if(preg_match_all($pattern2, $content, $matches))
{
	var_dump($matches);
	for($i=0; $i < count($matches[0]);$i++)
	{
		if(trim($matches[0][$i]) != "")
		{
			print(trim($matches[0][$i]) ."\r\n");
			$zahl = trim($matches[0][$i]);
			$erg += $zahl;
		}
	}
}
/*
$match = preg_split($pattern, $content);
$erg = 0;
print("Count: ". count($match) ."\r\n");
for($i=0; $i < count($match);$i++)
{
	if(trim($match[$i]) != "")
	{
		print(trim($match[$i]) ."\r\n");
		$zahl = trim($match[$i]);
		$erg += $zahl;
	}
}
*/
print("Summe: ". $erg ."\r\n");
?>