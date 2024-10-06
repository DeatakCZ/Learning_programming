

/*

document.querySelector(`p [data-hovorici="Marek"]`);
document.querySelectorAll("p[data-hovorici]");
document.querySelectorAll("p");
document.querySelectorAll("p ");



document.querySelector("p[type=text].hezky#uvodni");
element <input>, jehož atribut type je nastavený na text, má třídu .hezky a zároveň id #uvodni
document.getElementsByTagName("p");

*/
window.onload = function()
{
    rewriteScript();
}

function rewriteScript()
{
    
let allLines = document.querySelectorAll("p[data-hovorici]");
for( let line of allLines)
{
    let span = document.createElement("span");
    span.innerHTML = line.getAttribute("data-hovorici") + " řekl: ";
    let pom = line.innerHTML;
    line.innerHTML = span.outerHTML + pom;
}

}

