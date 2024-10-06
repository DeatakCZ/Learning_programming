window.onload = function()
{
    drawTab();
}



function drawTab()
{
    let X = 7;
    let Y = 5;

    let tab = document.createElement("table");
    document.body.appendChild(tab);

    tab.appendChild(createHeader(X));

    for( let y = 0 ; y < Y ; y++ )
    {
        let tr = document.createElement("tr");
        tab.appendChild(tr);

        for ( let x = 0 ; x < X ; x++ )
        {
            tr.appendChild(createTd(x, y));
        }
    }
}

function createHeader(X)
{
    let thead = document.createElement("thead");
    let tr = document.createElement("tr");
    thead.appendChild(tr);
    for( let x = 0 ; x < X ; x++ )
    {
        let th = document.createElement("th");
        tr.appendChild(th);
        th.append(daySwitch(x));
    }
    return thead;
}

function createTd(x, y)
{
    let td = document.createElement("td");
    let p = document.createElement("p");
    const aktualni = new Date();
    const prvniho = new Date();   // 1st 
    prvniho.setDate(1);
    const posledniho = new Date(aktualni.getFullYear(), aktualni.getMonth() + 1, 0)
    let pocetDni = posledniho.getDate();

    if( x + ( y * 7 ) < prvniho.getDay())
    {
        p = " ";
    }
    else if( x + ( y * 7 ) > pocetDni + prvniho.getDay()-1)
    {
        p = " ";
    }
    else
    {
        p = ( x + ( y * 7 )) - prvniho.getDay() + 1;
    }

    td.append(p);
    return td;
}

function daySwitch(x)
{
    switch(x)
    {
        case 0:
            return "Ne";
        case 1:
            return "Po";
        case 2:
            return "Ut";
        case 3:
            return "St";
        case 4:
            return "Ct";
        case 5:
            return "Pa";
        case 6:
            return "So";
    }
}


