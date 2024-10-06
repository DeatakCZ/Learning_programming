window.onload = function() 
{
    drawHouse();
    drawDrops();
}

function createImage()
{
    //let image = document.getElementsByTagName("img")[0];

    const image = document.createElement("img");
    image.src = "Pics/house.png";
    image.onload = function()
    {
        //document.body.appendChild(image);
        return image;
    }
}



function createContext()
{
    const canvas = document.createElement("canvas");

    canvas.onload = function()
    {
        canvasSetUp(canvas);
        
        const context = canvas.getContext("2d");
        return context;
    }
}

function canvasSetUp(canvas)
{
    canvas.width = 500;
    canvas.height = 500;
    canvas.style = "border: 1px solid black";
}


function drawHouse()
{
    const image = createImage();
    const context = createContext();
    context.drawImage(image, 0, 0);

}







function drawDrops()
{

}