var box = document.getElementById('box');

box.addEventListener('click', function () {
    if (box.style.backgroundColor === 'red') {
        box.style.backgroundColor = 'yellow';
        box.style.width = '600px';
        box.style.height = '600px';
    }
});