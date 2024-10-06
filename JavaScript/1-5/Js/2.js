let listy;
// Načtení stránky
window.onload = function () {
    listy = document.querySelectorAll("body > img[data-podzim]");

    // nastavení počáteční pozice
    for (let i = 0; i < listy.length; i++) {
        listy[i].style.left = i * window.innerWidth / listy.length + "px";
        listy[i].style.top = -listy[i].height + "px";
    }

    setInterval(posun, 20);
}

// Funkce pro časovač
function posun() {
    for (let i = 0; i < listy.length; i++) {
        let novaPozice = parseInt(listy[i].style.top) + 2;
        if (novaPozice > window.innerHeight) {
            novaPozice = -listy[i].height;
        }
        listy[i].style.top = novaPozice + "px";
    }
}