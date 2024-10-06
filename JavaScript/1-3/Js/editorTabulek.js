let tabulka;
let vychoziVelikostX = 5;
let vychoziVelikostY = 3;
let aktivniBunka;



window.onload = function()
{
    vytvorOvladaciTlacitka();
    vytvorVychoziTabulku();   
 
}



function vytvorBunku()
{
    let td = document.createElement("td");
    let tdInput = document.createElement("input");

    tdInput.type = "text";
    tdInput.onfocus = function() 
    {
        aktivniBunka = this;
    }
    td.appendChild(tdInput)

    return td;
}

function vytvorVychoziTabulku()
{
    tabulka = document.createElement("table");
    document.body.appendChild(tabulka);

    for(let y = 0 ; y < vychoziVelikostY ; y++)
    {
        let tr = document.createElement("tr");
        tabulka.appendChild(tr);

        for(let x = 0 ; x < vychoziVelikostX ; x++ )
        {
            tr.appendChild(vytvorBunku());
        }
    }
}

function vytvorTlacitkoAVlozHo(popis, rodic)
{
    let btn = document.createElement("button");
    btn.textContent = popis;
    rodic.appendChild(btn);
    return btn;
}

function vytvorOvladaciTlacitka()
{
    vytvorTlacitkoAVlozHo("Pridat radek dolu", document.body).onclick = pridejRadekDolu;
    vytvorTlacitkoAVlozHo("Pridat radek nahoru", document.body).onclick = pridejRadekNahoru;
    vytvorTlacitkoAVlozHo("Pridat sloupec doleva", document.body).onclick = pridejSloupecDoleva;
    vytvorTlacitkoAVlozHo("Pridat sloupec doprava", document.body).onclick = pridejSloupecDoprava;
    vytvorTlacitkoAVlozHo("odstranit radek", document.body).onclick = smazRadek;
    vytvorTlacitkoAVlozHo("odstranit sloupec", document.body).onclick = smazSloupec;
    vytvorTlacitkoAVlozHo("Test", document.body)
}

function vytvorRadek()
{   
    let prvniRadek = tabulka.firstElementChild;
    let bunkyPrvnihoRadku = prvniRadek.childNodes;
    let pocetBunekVPrvnimRadku = bunkyPrvnihoRadku.length;


    //let pocetBunekVPrvnimRadku = tabulka.firstElementChild.childNodes.lenght;
    //                           <table>    <tr>            <td>        
    let novyRadek = document.createElement("tr");
     for( let i=0 ; i<pocetBunekVPrvnimRadku ; i++ )
     {
        novyRadek.appendChild(vytvorBunku());
     }
     return novyRadek;
}


function indexRadkuAktivniBunky()
 {
    let cilHledani = tabulka.childNodes;
    let hledanyPrvek = aktivniBunka.parentElement.parentElement;
    return Array.prototype.indexOf.call(cilHledani, hledanyPrvek);
}

function indexSloupceAktivniBunky()
{
    let cilHledani = aktivniBunka.parentElement.parentElement.childNodes;
    let hledanyPrvek = aktivniBunka.parentElement;
    return Array.prototype.indexOf.call(cilHledani, hledanyPrvek);
}

function pridejRadekNahoru()
 {
    let radek = vytvorRadek();
    let indexVybraneho = indexRadkuAktivniBunky();
    tabulka.insertBefore(radek, tabulka.childNodes[indexVybraneho]);
}

function pridejRadekDolu()
 {
    let radek = vytvorRadek();
    let indexVybraneho = indexRadkuAktivniBunky();

    if (tabulka.lastChild == tabulka.childNodes[indexVybraneho])
    {
        tabulka.appendChild(radek);
    }
    else
    {
        tabulka.insertBefore(radek, tabulka.childNodes[indexVybraneho + 1]);
    }
}

function pridejSloupecDoleva()
{
    let indexVybraneho = indexSloupceAktivniBunky();
    for (let i = 0; i < tabulka.childNodes.length; i++)
    {
        tabulka.childNodes[i].insertBefore(vytvorBunku(), tabulka.childNodes[i].childNodes[indexVybraneho]);
    }
}

function pridejSloupecDoprava() 
{
    let indexVybraneho = indexSloupceAktivniBunky();
    for (let i = 0; i < tabulka.childNodes.length; i++) 
    {
        if (tabulka.childNodes[i].childNodes[indexVybraneho] == tabulka.childNodes[i].lastElementChild) 
        {
            tabulka.childNodes[i].appendChild(vytvorBunku());
        } else 
        {
            tabulka.childNodes[i].insertBefore(vytvorBunku(), tabulka.childNodes[i].childNodes[indexVybraneho + 1]);
        }
    }
}

function smazRadek()
{
    let indexVybraneho = indexRadkuAktivniBunky();
    tabulka.removeChild(tabulka.childNodes[indexVybraneho]);
}

function smazSloupec() {
    let indexVybraneho = indexSloupceAktivniBunky();
    for (let i = 0; i < tabulka.childNodes.length; i++) {
        tabulka.childNodes[i].removeChild(tabulka.childNodes[i].childNodes[indexVybraneho]);
    }
}