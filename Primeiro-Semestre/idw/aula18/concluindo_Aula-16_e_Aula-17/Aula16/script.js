


let valor = document.querySelector("#valor");
let verificar = document.querySelector("#verificar");
let mostraResultado = document.querySelector("#mostraResultado");
verificar.addEventListener("click", function () {
  if (valor.value > 10) {
    mostraResultado.innerHTML =
      "<strong>O valor digitado é maior que 10</strong>";
    return;
  }
  if (valor.value < 10) {
    mostraResultado.innerHTML =
      "<strong>O valor digitado é menor que 10</strong>";
    return;
  }
  if (valor.value == 10) {
    mostraResultado.innerHTML =
      "<strong>O valor digitado é igual que 10</strong>";
    return;
  }
});


const numero1 = document.querySelector("#numero1");
const numero2 = document.querySelector("#numero2");
let somar = document.querySelector("#somar");
let resultado = document.querySelector("#resultado");
somar.addEventListener("click", function () {
  let soma = parseFloat(numero1.value) + parseFloat(numero2.value);
  resultado.innerHTML = `<strong>Resultado = ${soma}</strong>`;
});


const valor1 = document.querySelector("#valor1");
const valor2 = document.querySelector("#valor2");
let operacao = document.querySelector("#operacao");
let calcular = document.querySelector("#calcular");
let resultadoCalcular = document.querySelector("#resultadoCalcular");
calcular.addEventListener("click", function () {
  switch (operacao.value) {
    case "+":
      result = parseFloat(valor1.value) + parseFloat(valor2.value);
      resultadoCalcular.innerHTML = `O resultado é ${result}`;
      break;
    case "-":
      result = parseFloat(valor1.value) - parseFloat(valor2.value);
      resultadoCalcular.innerHTML = `O resultado é ${result}`;
      break;
    case "*":
      result = parseFloat(valor1.value) * parseFloat(valor2.value);
      resultadoCalcular.innerHTML = `O resultado é ${result}`;
      break;
    case "/":
      result = parseFloat(valor1.value) / parseFloat(valor2.value);
      resultadoCalcular.innerHTML = `O resultado é ${result}`;
      break;
  }
});


function calculaValor() {
  const quantidadeKwh = parseFloat(document.querySelector("#quantidadeKwh").value);
  let valorKwh = parseFloat(document.querySelector("#valorKwh").value);
  if (quantidadeKwh > 100 && quantidadeKwh <= 200) {
    valorKwh = valorKwh + valorKwh * (25 / 100);
  } else if (quantidadeKwh > 200) {
    valorKwh = valorKwh + valorKwh * (50 / 100);
  }
  let calculo = quantidadeKwh * valorKwh;
  let valorDaConta = document.querySelector("#valorDaConta");
  valorDaConta.innerHTML = `<strong> Valor da conta = $${calculo},00</strong>`;
};


function verificaNumero() {
  let numeros = document.querySelector("#numeros").value;
  numeros = numeros.split(",");

  let maiorNumero = 0;

  for (let i = 0; i < numeros.length; i++) {
    let numeroAtual = parseFloat(numeros[i]);
    if (numeroAtual > maiorNumero) {
      maiorNumero = numeroAtual;
    }
  }
  document.getElementById("maiorNumero") . innerHTML = `O maior número digitado foi <strong>${maiorNumero}</strong>`;
}



function verificaIdade() {
  let idades = document.querySelector("#idades").value;
  idades = idades.split(",");
  console.log(idades);

  let maior18 = 0;
  let menor18 = 0;

  for (let i = 0; i < idades.length; i++) {
    let idadeAtual = parseFloat(idades[i]);
    if (idadeAtual < 18) {
      menor18++;
    } else {
      maior18++;
    }
  }
  document.getElementById("mostraIdade") . innerHTML = `<strong>${menor18}</strong> pessoas são menores de idade e <strong>${maior18}</strong> são maiores de idade`;
}