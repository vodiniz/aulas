module Lib
    ( ehPar,
    pares,
    prod_par,
    soma
    ) where



ehPar :: [Int] -> [Bool]
ehPar xs = map even xs

pares :: [Int] -> [Int]
pares xs = filter even xs

prod_par :: [Int] -> Int
prod_par xs =  foldr (*) 1 (filter even xs)

soma :: Int -> Int -> Int
soma a b = a + b
