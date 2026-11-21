# organograma.md
socio: Sócios
adm: Administração
mkt: Marketing
inf: Infraestrutura
con: Consultoria
depF: Departamento de Finanças
depR: Departamento de Recursos Humanos
depJ: Departamento Jurídico
divE: Divisão Estratégica
eqpC: Equipe Criativa
eqpP: Equipe Publicitária
depO: Departamento de Operações
divS: Divisão de Segurança
divT: Divisão de Suporte
eqpS: Equipe de Suporte ao Cliente
divD: Divisão de Desenvolvimento
divA: Divisão de Análise
divQ: Divisão de QA

socio -> adm
socio -> mkt
socio -> inf
socio -> con

adm -> depF
adm -> depR
adm -> depJ
adm -> divE

mkt -> eqpC
mkt -> eqpP

inf -> depO
depO -> divT
depO -> divS

con -> divD
con -> divA
con -> divQ
con -> eqpS
