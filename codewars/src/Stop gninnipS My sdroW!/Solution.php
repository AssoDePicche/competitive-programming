<?php

declare(strict_types=1);

define('MIN_WORD_LENGTH_TO_REVERSE', 5);

function spinWords(string $string): string
{
    $words = explode(' ', $string);

    foreach ($words as $word) {
        if (strlen($word) < MIN_WORD_LENTGH_TO_REVERSE) {
            continue;
        }

        $reversedWord = strrev($word);

        $string = str_replace($word, $reversedWord, $string);
    }

    return $string;
}
