module Main (main) where

import Lib

main :: IO ()
main = do
    putStrLn "Digite uma lista:"
    x' <- getLine
    let x = read x' :: [Int]
    putStrLn "O maior numero é:"
    print (maior x)
