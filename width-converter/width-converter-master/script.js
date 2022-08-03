function converterS(){
    var width = document.getElementById('widthS');
    var results = document.getElementById('resultsS');

    var arrayOg = width.value.split(" ");
    var arrayConverted = [];
    
    for(var i=0; i<arrayOg.length; i++){
        arrayOg[i] = Math.round((1024 * arrayOg[i])/1346);
        arrayConverted.push(arrayOg[i]);

        var result = document.createElement("h3");
        result.innerHTML = arrayConverted[i] + "px";
        results.appendChild(result)
    }
}

function converterB(){
    var width = document.getElementById('widthB');
    var results = document.getElementById('resultsB');

    var arrayOg = width.value.split(" ");
    var arrayConverted = [];
    
    for(var i=0; i<arrayOg.length; i++){
        arrayOg[i] = Math.round((1260 * arrayOg[i])/1346);
        arrayConverted.push(arrayOg[i]);

        var result = document.createElement("h3");
        result.innerHTML = arrayConverted[i] + "px";
        results.appendChild(result)
    }
}

