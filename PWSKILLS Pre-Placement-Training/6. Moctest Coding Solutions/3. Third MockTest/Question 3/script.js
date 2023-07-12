var dataContainer = document.getElementById('data-container');

// Show the skeleton loader
showSkeletonLoader();

// Fetch data from the JSON Placeholder API
fetch('https://jsonplaceholder.typicode.com/posts')
    .then(response => response.json())
    .then(data => {
        // Hide the skeleton loader
        hideSkeletonLoader();

        // Display the fetched data
        data.forEach(item => {
            var postElement = document.createElement('div');
            postElement.textContent = item.title;
            dataContainer.appendChild(postElement);
        });
    })
    .catch(error => {
        // Hide the skeleton loader
        hideSkeletonLoader();

        console.error('Error:', error);
    });

function showSkeletonLoader() {
    for (var i = 0; i < 5; i++) {
        var skeletonLoader = document.createElement('div');
        skeletonLoader.classList.add('skeleton-loader');
        dataContainer.appendChild(skeletonLoader);
    }
}

function hideSkeletonLoader() {
    var skeletonLoaders = document.querySelectorAll('.skeleton-loader');
    skeletonLoaders.forEach(loader => loader.remove());
}