function addItem() {
    var input = document.getElementById('input-box');
    var inputValue = input.value.trim();

    if (inputValue !== '') {
        var itemList = document.getElementById('item-list');
        var newItem = document.createElement('li');
        newItem.textContent = inputValue;
        itemList.appendChild(newItem);

        // Clear the input box
        input.value = '';
    }
}