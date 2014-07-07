<?php

$satz = "The black cat climbed the green tree";

echo $satz;

$satz = str_replace("black", "white", $satz);
$satz = str_replace("climbed", "jumped from", $satz);

echo "\r\n".$satz;