function calculadora(){
    var numero1 = parseFloat(document.getElementById('valor1').value)
    var numero2 = parseFloat(document.getElementById('valor2').value)
    var operacao = document.getElementById('operacao').value
    var resultado

    switch (operacao) {
        case '+':
            resultado = numero1 + numero2
            break;
        case'-':
            resultado = numero1 - numero2
            break;
        case '/':
                resultado = numero1 / numero2
            break;
        case '*':
            resultado = numero1 * numero2
            break;
    }
    document.getElementById('resultado1').innerHTML = 'resultado é: ' + resultado
}

function calculoConta() {
    var quantidade = parseFloat(document.getElementById('quantidade').value)
    var valor = parseFloat(document.getElementById('valor').value)
    var conta

    if (quantidade <= 100) {
        conta = quantidade * valor
    }else if(quantidade > 100 && quantidade <=200){
        conta = (quantidade * valor) * 1.25
    }else{
        conta = (quantidade * valor) * 1.5
    }

    document.getElementById('resultado2').innerHTML = 'O valor da conta é: ' +conta
}

function verificaMaior() {
    var numeros = document.getElementById('numeros').value
    numeros = numeros.split(',')
    var maior = 0
    for(i=0; i < numeros.length; i++){
        var numeroAtual = parseFloat(numeros[i])
        if(maior < numeroAtual)
            maior = numeroAtual
    }
    document.getElementById('maiorNumero').innerHTML = 'O maior valor é: ' + maior
}
