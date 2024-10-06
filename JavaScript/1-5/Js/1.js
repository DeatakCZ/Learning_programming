window.onload = function()
{
    let prepinac = document.getElementById("prepinac");
    prepinac.onclick = prepni;

    let canvas = startCanvas();
    let ctx = startContext(canvas);
    obrazek(ctx);
    test();
    //ctverec(ctx);
}

function prepni() 
{
    if(prepinac.getAttribute("src") == "Pics/prepinac0.png")
    {
        prepinac.src = "Pics/prepinac1.png";
    }
    else 
    {
        prepinac.src = "Pics/prepinac0.png";
    }
}

function startCanvas()
{
    let canvas = document.createElement("canvas");
    canvas.id = "myCanvas";
    canvas.width = "300";
    canvas.height = "150";
    canvas.style = "border:1px solid grey"
    document.body.appendChild(canvas);    
    return canvas;
}

function startContext(canvas)
{
    let ctx = canvas.getContext("2d");
    return ctx;
}

function ctverec(ctx)
{
    ctx.strokeRect(20, 20, 150, 100);
    ctx.fillStyle = "#a8c101";
    ctx.fillRect(30,30,130,80);
}

function obrazek(ctx)
{
    let img = document.createElement("img");
    img.src = "Pics/test.png";

    ctx.drawImage( img, 0, 0 );
    ctx.fillRect(0,0,10,10);
}

function test(ctx)
{
    let cnv = document.createElement("canvas");
    cnv.id = "myCanvas1";
    cnv.width = "300";
    cnv.height = "150";
    cnv.style = "border:1px solid grey"
    document.body.appendChild(cnv);  
    cntxt = cnv.getContext("2d");
    let obrazek = document.createElement("img");
    obrazek.src = "Pics/test.png";

    cntxt.drawImage(obrazek, 0, 0);
}

