module Lib
    ( maior
    ) where

maior :: [Int] -> Int
maior = foldr1 max