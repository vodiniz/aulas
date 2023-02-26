module Main where

import Data.Maybe
import Control.Monad

{-
Considere o seguinte tipo de dado algébrico
que representa 4 cores.-}

data Color = Red | Green | Blue | Yellow
            deriving (Eq)

-- Exemplo de valor
c1 :: Color
c1 = Yellow


--Red será "R", Green será "G", e assim por diante.


instance Show Color where
    show Red    = "R"
    show Green  = "G"
    show Blue   = "B"
    show Yellow = "Y"

{-
Este "tabuleiro" de cores não necessariamente é
uma matriz quadrada.
-}

type Board = [[Color]]

-- Exemplo de tabuleiro
t1 :: Board
t1 = [[Red, Blue, Blue, Green],
      [Yellow, Red],
      [Blue, Green, Red]]

{-
Trocar todas as ocorrências da primeira
cor no tabuleiro pela segunda cor, mantendo todas
as outras cores inalteradas.
-}

fill :: Color -> Color -> Board -> Board
fill from to = map (map replace)
  where
    replace x | x == from = to
              | otherwise = x

{-
Retorna o número de ocorrências de uma cor no tabuleiro.
-}

countColor :: Color -> Board -> Int
countColor color board = sum $ map count board
  where
    count [] = 0
    count (x:xs) | x == color = 1 + count xs
                 | otherwise  = count xs

{-
Converte uma letra na cor correspondente. Estaremos
considerando a possibilidade do caractere informado
não representar uma cor.
-}

readColor :: Char -> Maybe Color
readColor 'R' = Just Red
readColor 'G' = Just Green
readColor 'B' = Just Blue
readColor 'Y' = Just Yellow
readColor _   = Nothing

{-
Converte uma sequência de caracteres numa lista de
possíveis cores correspondentes.
-}

readColors :: String -> [Maybe Color]
readColors = map readColor

-- readColors "BBHYGB" ~= [Just B, Just B, Nothing, Just Y, Just G, Just B]

{-
Cconverte uma lista de sequências de caracteres num tabuleiro de possíveis
cores.
-}

readColorLines :: [String] -> [[Maybe Color]]
readColorLines = map readColors

{-
    readColorLines ["BBHYGB", "JYG", "BKKGBGY"]
       ~= [[Just B,Just B,Nothing,Just Y,Just G,Just B],
           [Nothing,Just Y,Just G],
           [Just B,Nothing,Nothing,Just G,Just B,Just G,Just Y]]
-}

{-
Converte um tabuleiro de possíveis cores em um tabuleiro comum, simplesmente
eliminando todas as cores invalidadas no processo.
-}

createBoard :: [[Maybe Color]] -> Board
createBoard = map catMaybes

{-
    createBoard (readColorLines ["BBHYGB", "JYG", "BKKGBGY"])
        ~= [[B,B,Y,G,B],
            [Y,G],
            [B,G,B,G,Y]]
-}

{-
Lê um número n
digitado do teclado e depois lê n linhas,
 retornando-as em uma lista.
-}

readLines :: IO [String]
readLines = do
  count <- getLine
  replicateM (read count) getLine

{-
Mostra na tela a contagem de cada uma das cores,
 exibindo inclusive as cores
cuja contagem for zero.
-}

printCounters :: Board -> IO ()
printCounters board = mapM_ display [Red, Green, Blue, Yellow]
  where
    display color = do
      putStrLn $ show color ++ ": " ++ show (countColor color board)

{-
EXERCÍCIO 10
Combine tudo que fez neste projeto e implemente
a seguinte função que deve:
  1. Ler um número n do usuário.
  2. Ler n linhas.
  3. Mostrar o tabuleiro correspondente,
     que ignorará os caracteres inválidos.
  4. Mostrar a contagem das cores no tabuleiro.
  5. Mostrar o tabuleiro correspondente trocando todos
     os vermelhos por amarelos.
-}

main :: IO ()
main = do
  input <- readLines
  let board = createBoard $ readColorLines input
  print board
  printCounters board
  let new_board = fill Red Yellow board
  print new_board
