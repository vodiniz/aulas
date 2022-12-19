module Main (main) where

import Lib

data TipoFuncionario = Efetivo | Temporario
data Funcionario = Funcionario { nomeFuncionario :: String, tipo :: TipoFuncionario}
data Aluno = Aluno { nomeAluno :: String, matricula :: Int}
data Vinculo = Aluno | Funcionario


main :: IO ()
main = someFunc
