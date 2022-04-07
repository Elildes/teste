***** Dicas comandos do Git *****

1.1) Criar novos usuário/email (identidade):  
```git config --global user.email "you@example.com"```  
```git config --global user.name "Your Name"```  

2) Obter um repositório/projeto git:

2.2) Segunda forma (baixar/clonar do git para o pc):  
. No seu pc, abra o terminal e vá até a pasta que queira baixar o repositório  
. Clique em Copiar a url do repositório: <URL_DO_REPOSITORIO.git>  
. No PC, com o programa do git já instalado, com o terminal entre na pasta onde o repositório será baixado e execute o seguinte comando:  
. ```git clone <url do repositório>```: salva uma pasta com o mesmo nome do projeto.  
Ex.: teste (nome da pasta criada)  
Obs.: após o comando acima, o repositório do projeto será baixado dentro da pasta onde o terminal está acessando.  
Obs.: caso queira clonar o repositório em um diretório diferente do projeto, especifique esse diretório conforme abaixo:  
```git clone <URL_DO_REPOSITORIO.git> projeto-teste``` (o repositório será salvo na pasta projeto-teste)  

3) Gravando alterações no repositório  - Adicionar/enviar ao GitHub (enviar atualizações):  
```git add <file.ext>``` (adiciona um arquivo) ou:  
```git add *``` (todos arquivos)  
```git commit -m "Mensagem xxx"``` (empacota as alterações feitas no repositório baixado)  
```git push``` (envia as alterações feitas ao repositório remoto), ou:  
...pede senha/usuário

4) Diversos:
```git status``` (verifica o status dos arquivos: quais arquivos não foram enviados ao repositório...) 
```git pull``` (atualiza o repositório no pc: fazer isto logo após abrir o projeto monitorado)  
. Caso você precise de ajuda usando o Git, exisem três formas de se obter ajuda das páginas de manual (manpage) para quaisquer comandos do Git:  
```git help <verb>```  
```git <verb> --help```  
```man git-<verb>```  
