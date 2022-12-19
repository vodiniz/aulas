module Main (main) where

import Lib

main :: IO ()
main = do
    putStrLn "Digite uma lista:"
    x' <- getLine
    let x = read x' :: [Int]
    putStrLn "A multiplicacao dos numeros pares é:"
    print (prod_par x)
