module Lib
    (troca,
    Cor(..),
    Roupa(..),
    Modelo(..)
    ) where


data Cor = Vermelho | Azul | Rosa | Branco
data Roupa = BlusaECalca Cor Cor | Vestido Cor
data Modelo = Modelo { nome :: String, idade :: Int, roupa :: Roupa }



troca :: (Modelo, Modelo) -> (Modelo, Modelo)
troca (a, b) = (b, a)

