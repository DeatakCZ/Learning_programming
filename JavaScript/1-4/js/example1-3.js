window.onload = function()
{
    mainTest();
}

function switchSort(button)
{
    if(button.innerHTML == "↓")
    {
        lowToHigh(button);
        button.innerHTML = "&uarr;";
    }
    else if(button.innerHTML == "↑")
    {
        highToLow(button);
        button.innerHTML = "&darr;";
    }
}

function highToLow(button)
{
    let test = document.createElement("p");
   let table = button.parentNode.parentNode.parentNode.parentNode;
   
    for( let i = 0 ; i < table.getElementsByTagName("tbody")[0].getElementsByTagName("tr").length-1 ; i++ )
    {

        for( let j = 0 ; j < table.getElementsByTagName("tbody")[0].getElementsByTagName("tr").length-1 ; j++ )
        {
            if (isNaN(parseInt(table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j].getElementsByTagName("td")[button.id].innerHTML)))  //String
            {
                for( let k = 0 ; k < table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j].getElementsByTagName("td")[button.id].firstChild.length ; k++ )
                {
                    if(table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j+1].getElementsByTagName("td")[button.id].innerHTML.charAt(k) > 
                       table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j].getElementsByTagName("td")[button.id].innerHTML.charAt(k))
                    {
                        let tr = table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j+1]
                        table.getElementsByTagName("tbody")[0].insertBefore( tr, table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j]);
                        break;
                    }
                    else if (table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j+1].getElementsByTagName("td")[button.id].innerHTML.charAt(k) < 
                             table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j].getElementsByTagName("td")[button.id].innerHTML.charAt(k))
                    {
                        break;
                    }
                }
            }
            else                                                                                                                                                //Int
            {
                if( parseInt(table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j+1].getElementsByTagName("td")[button.id].innerHTML) > 
                    parseInt(table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j].getElementsByTagName("td")[button.id].innerHTML) )
                {
                    let tr = table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j+1]
                    table.getElementsByTagName("tbody")[0].insertBefore( tr, table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j]);
                }
            }
        }
    }
}

function lowToHigh(button)
{
    let test = document.createElement("p");

   let table = button.parentNode.parentNode.parentNode.parentNode;
    for( let i = 0 ; i < table.getElementsByTagName("tbody")[0].getElementsByTagName("tr").length-1 ; i++ )
    {

        for( let j = 0 ; j < table.getElementsByTagName("tbody")[0].getElementsByTagName("tr").length-1 ; j++ )
        {
            if (isNaN(parseInt(table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j].getElementsByTagName("td")[button.id].innerHTML)))  //String
            {
                for( let k = 0 ; k < table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j].getElementsByTagName("td")[button.id].firstChild.length ; k++ )
                {
                    if(table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j+1].getElementsByTagName("td")[button.id].innerHTML.charAt(k) < 
                       table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j].getElementsByTagName("td")[button.id].innerHTML.charAt(k))
                    {
                        let tr = table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j+1]
                        table.getElementsByTagName("tbody")[0].insertBefore( tr, table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j]);
                        break;
                    }
                    else if (table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j+1].getElementsByTagName("td")[button.id].innerHTML.charAt(k) > 
                             table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j].getElementsByTagName("td")[button.id].innerHTML.charAt(k))
                    {
                        break;
                    }
                }
            }
            else                                                                                                                                                //Int
            {
                if( parseInt(table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j+1].getElementsByTagName("td")[button.id].innerHTML) < 
                    parseInt(table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j].getElementsByTagName("td")[button.id].innerHTML) )
                {
                    let tr = table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j+1]
                    table.getElementsByTagName("tbody")[0].insertBefore( tr, table.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j]);
                }
            }
        }
    }
}
        
function createButton(id,parent)
{
    let button = document.createElement("button");

    button.innerHTML = "&darr;";
    button.id = id;
    
    parent.appendChild(button);
    button.onclick = function(){switchSort(button)};
    return button;
}

function createButtons(parent)
{
    for(let i = 0 ; i < parent.getElementsByTagName("thead")[0].getElementsByTagName("th").length ; i++ )
        {

            createButton(i,parent.getElementsByTagName("thead")[0].getElementsByTagName("th")[i]);

        }
}

function createHeader(parent)
{
    let thead = document.createElement("thead");
    let tr = document.createElement("tr");
    
    for(let i = 0 ; i < parent.getElementsByTagName("tbody")[0].getElementsByTagName("tr").length ; i++)
    {
        let th = document.createElement("th");
        tr.appendChild(th);
    } 

    thead.appendChild(tr);
    parent.insertAdjacentElement("afterbegin", thead);

}

function testHeader(parent)
{
    let thead = parent.getElementsByTagName("thead");
    if(parent.querySelector("thead") == null)
    {
        createHeader(parent);
    }
}

function mainTest() 
{

    let allTables = document.getElementsByTagName("table");         
    for( let table of allTables)    
    {

        testHeader(table);
        createButtons(table);
       // changeTab(table.getElementsByTagName("Button")[0]);
    }
}


function changeTab(button)
{
    let table = document.createElement("table");
    let tbody = document.createElement("tbody");
    table.appendChild(tbody);
    let lowest = 0;
    lowestID = 0;
    lastLowest = 0;

    for( let i = 0 ; i < button.parentNode.parentNode.parentNode.parentNode.getElementsByTagName("tbody")[0].getElementsByTagName("tr").length ; i++ )
    {
        lowest = 0;
        for( let j = 0 ; j < button.parentNode.parentNode.parentNode.parentNode.getElementsByTagName("tbody")[0].getElementsByTagName("tr").length ; j++ )
        {
            if( button.parentNode.parentNode.parentNode.parentNode.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j].getElementsByTagName("td")[button.id].innerHTML < lowest &&
                button.parentNode.parentNode.parentNode.parentNode.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j].getElementsByTagName("td")[button.id].innerHTML > lastLowest)
            {
                lowest = button.parentNode.parentNode.parentNode.parentNode.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[j].innerHTML;
                lowestID = j;
            }
        }
        lastLowest = lowest;
        let tr = button.parentNode.parentNode.parentNode.parentNode.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[lowestID];
        tbody.appendChild(tr);
    }
    //table.appendChild(button.parentNode.parentNode.parentNode.parentNode);
    document.body.insertBefore(table, button.parentNode.parentNode.parentNode.parentNode);
    button.parentNode.parentNode.parentNode.parentNode.remove();
}

                //button.parentNode.parentNode.parentNode.parentNode.insertBefore(
                /*
                let pom = button.parentNode.parentNode.parentNode.parentNode.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[i+1];
                button.parentNode.parentNode.parentNode.parentNode.replaceChild( button.parentNode.parentNode.parentNode.parentNode.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[i], button.parentNode.parentNode.parentNode.parentNode.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[i+1] );
                button.parentNode.parentNode.parentNode.parentNodement.replaceChild( pom, button.parentNode.parentNode.parentNode.parentNode.getElementsByTagName("tbody")[0].getElementsByTagName("tr")[i] );
            */
            
