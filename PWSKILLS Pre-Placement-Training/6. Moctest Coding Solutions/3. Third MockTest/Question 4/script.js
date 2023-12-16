var hamburgerMenu = document.querySelector('.hamburger-menu');
var responsiveMenu = document.querySelector('.responsive-menu');

hamburgerMenu.addEventListener('click', function () {
    responsiveMenu.style.display = responsiveMenu.style.display === 'block' ? 'none' : 'block';
});

window.addEventListener('resize', function () {
    if (window.innerWidth > 768) {
        responsiveMenu.style.display = 'none';
    }
});