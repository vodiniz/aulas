module Main (main) where

import Lib

main :: IO ()
main = do

    let modelo1 = Modelo { nome = "Joao", idade = 18, roupa = BlusaECalca Branco Rosa}
    let modelo2 = Modelo { nome = "Maria", idade = 25, roupa = Vestido Azul}


    let (tuple1, tuple2) = troca(modelo1, modelo2)

    print(nome tuple1)
     
