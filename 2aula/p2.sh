cat lista.txt | tail -n +3 > conteudo.txt
echo "	1."
cat conteudo.txt | head -3
echo "	2."
cat conteudo.txt | cut -d ' ' -f1 | grep "^5...." --color
echo "	3."
cat conteudo.txt | cut -d ' ' -f2
echo "	4."
cat conteudo.txt | awk '{print $2, $1}'
echo "	5."
cat conteudo.txt | grep "estudante" |  cut -d ' ' -f2
echo "	6."
cat conteudo.txt | grep "benfica" |  cut -d ' ' -f2
echo "	7."
cat conteudo.txt | grep "estudante" |  cut -d ' ' -f2 | sort
echo "	8."
cat conteudo.txt | cut -d ' ' -f3 | sort | uniq
echo "	9."
cat conteudo.txt | cut -d ' ' -f3 | sort | uniq | wc -l
echo "	10."
cat conteudo.txt | sed "s/rui/Rui/g"
echo "	11."
cat conteudo.txt | tr "-" " " | cut -d " " -f2,6
echo "	12."
cat conteudo.txt | cut -d ' ' -f6 | sort -n | tail -1
echo "	13."
cat conteudo.txt | sort -nk 6 | tail -1 | cut -d ' ' -f2
echo "	14."
cat conteudo.txt | awk 'BEGIN{n=0} {n=n+1; if($1=="55002") print(n)}'
