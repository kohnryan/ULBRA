$(document).ready(function(){
    $('#menu_calculadora').click(function(){
      $('#section').load('calculadora.html', function(){
        $('#calcular').click(function(){
          var numeroUm = parseFloat($('#valor1').val());
          var numeroDois = parseFloat($('#valor2').val());
          var operacao = $('#operacao').val();
          
          switch (operacao) {
            case '+':
              $('#resultado').html(`<strong>Resultado = </strong> ${numeroUm + numeroDois}`);
              break;
            case '-':
              $('#resultado').html(`<strong>Resultado = </strong> ${numeroUm - numeroDois}`);
              break;
            case '*':
              $('#resultado').html(`<strong>Resultado = </strong> ${numeroUm * numeroDois}`);
              break;
            case '/':
              $('#resultado').html(`<strong>Resultado = </strong> ${numeroUm / numeroDois}`);
              break;
          }
        });
      });
    })})

    $(document).ready(function(){
        $('#menu_conta_energia').click(function(){
          $('#section').load('conta_energia.html', function(){
            $('#calcular').click(function(){
              var quantidadeKwh = parseFloat($('#quantidade').val());
              var valorKwh = parseFloat($('#valor').val());
      
              if (quantidade > 100 && quantidade <= 200) {
                valor = valor + valor * (25 / 100);
              } else if (quantidade > 200) {
                valorKwh = valor + valor * (50 / 100);
              }
              
              $('#valorDaConta').html(`<strong>Valor à pagar:</strong> $${quantidadeKwh * valorKwh},00`);
            });
          });
        });
    });

    $(document).ready(function(){
        $('#menu_maior_de_idade').click(function(){
          $('#section').load('maior_de_idade.html', function(){
            $('#verificar').click(function(){
              var idades = $('#idades').val();
              idades = idades.split(',');
              var maior18 = 0;
              var menor18 = 0;
              for(i = 0; i < idades.length; i++) {
                if (idades[i] < 18) {
                  menor18++;
                }
                if (idades[i] >= 18) {
                  maior18++;
                }
              }
              $('#idadesVerificadas').html(`Você digitou <strong>${menor18}</strong> idades menores que 18 e <strong>${maior18}</strong> idades maiores que 18`);
            });
          });
        });
      });

      $(document).ready(function(){
        $('#menu_verificar_maior_numero').click(function(){
            $('#section').load('verifica_maior_numero.html', function(){
                $('#verifica').click(function(){
                  
                  var numeros = $('#numeros').val();
                numeros = numeros.split(',');
                var maior = 0;

                for (var i = 0; i < numeros.length; i++) {
                    var numeroAtual = parseFloat(numeros[i]);
                    if (numeroAtual > maior) {
                        maior = numeroAtual;
                    }
                }

                $('#verifica_maior').html('O maior número é: ' + maior);
                })


            })
        })
    })