// Parte 1
var valor = parseFloat(prompt('Digite um valor;'))

if(valor < 10){
    //alert(valor + 'é menor que 10')
}else if (vslor == 10){
    //alert(valor + 'é igual 10')
}else if (valor < 10){
    alert(valor + 'é maior que 10')
}

//parte 2

var num1 = parseFloat(prompt('Digite o primeiro valor:'))
var num2 = parseFloat(prompt('Digite o segundo valor:'))
var soma = num1 + num2
alert('A soma dos números é:' + soma)


//parte 3
var num1 = parseFloat(prompt('Digite o primeiro valor;'))
var num2 = parseFloat(prompt('Digite o segundo valor;'))
var operacao = prompt('Digite a operação a ser realizada (+, -, * ou /)')
var resultado
switch (operacao) {
    case '+':
        resultado = num1 + num2
        
        break;
        case '-':
            resultado = num1 - num2

        break;
        case '*':
            resultado = num1 * num2

        break;
        case '/':
            resultado = num1 / num2
        break;

        default:
            alert('Operação inválida')
        break;
}
alert('O resultado da operacao é: ' + resultado)

//parte 4
var nome = prompt('Digite um nome:')
var numero = parseFloat(prompt('Digite a quantidade de vezes:'))

for(var i=0; i < numero; i++){
   
    alert(nome + ' ' + (i+1) + 'vezes')
}

//parte 5

var informacoes = []
informacoes[0] = prompt('Digite seu nome:')
informacoes[1] = prompt('Digite seu ensereço:')
informacoes[2] = prompt('Digite seu email:')

alert('Olá ' + informacoes[0] + ', você mora na ' + informacoes[1] + ', e teu email é ' + informacoes[2])