$(document).ready(()=> {
    $('section').load('pages/home.html')
    $('menuHome').addClass('active')

    function removeClassMenu(){
        $('menuHome').removeClass('active')
        $('MenuSobre').addClass('active')
    }

    $('#menuHome').click(()=>{
        removeClassMenu()
        $('section').load('pages/home.html')
        $('MenuHome').addClass('active')
        })
    

    $('#menuSobre').click(()=>{
        removeClassMenu()
        $('section').load('pages/sobre.html')
        $('menuSobre').addClass('active')
    })
    $('#menuVeiculos').click(()=>{
        removeClassMenu()
        $('section').load('pages/veiculos.html')
        $('menuVeiculos').addClass('active')
    })
    $('#menuLocalização').click(()=>{
        removeClassMenu()
        $('section').load('pages/localização.html')
        $('menuLocalização').addClass('active')
    })
    
    $('#menuContato').click(()=>{
        
        removeClassMenu()
        $('section').load('pages/contato.html')
        $('menuContato').addClass('active')
    
    })
})