 // Get references to the HTML elements
const form = document.getElementById('student-form');
const nameInput = document.getElementById('name');
const emailInput = document.getElementById('email');
const phoneInput = document.getElementById('phone');
const errorOutput = document.getElementById('error');
const table = document.getElementById('students-table');

let students = [];

function renderTable() {
  // clear previous table data
  table.innerHTML = '';

  // add table headers
  const headers = ['Name', 'Email', 'Phone', 'Actions'];
  const headerRow = document.createElement('tr');
  for (const header of headers) {
    const th = document.createElement('th');
    th.textContent = header;
    headerRow.appendChild(th);
  }
  table.appendChild(headerRow);

  // add table data
  for (const [index, student] of students.entries()) {
    const tr = document.createElement('tr');

    // add student name
    const nameTd = document.createElement('td');
    nameTd.textContent = student.name;
    tr.appendChild(nameTd);

    // add student email
    const emailTd = document.createElement('td');
    emailTd.textContent = student.email;
    tr.appendChild(emailTd);

    // add student phone
    const phoneTd = document.createElement('td');
    phoneTd.textContent = student.phone;
    tr.appendChild(phoneTd);

    // add delete button
    const deleteButton = document.createElement('button');
    deleteButton.textContent = 'Delete';
    deleteButton.addEventListener('click', () => {
      students.splice(index, 1);
      renderTable();
    });
    const deleteTd = document.createElement('td');
    deleteTd.appendChild(deleteButton);
    tr.appendChild(deleteTd);

    // add update button
    // const updateButton = document.createElement('button');
    // updateButton.textContent = 'Update';
    // updateButton.addEventListener('click', () => {
    //   nameInput.value = student.name;
    //   emailInput.value = student.email;
    //   phoneInput.value = student.phone;
    //   students.splice(index, 1);
    //   renderTable();
    // });
    // const updateTd = document.createElement('td');
    // updateTd.appendChild(updateButton);
    // tr.appendChild(updateTd);

    table.appendChild(tr);
  }
}

function addStudent(event) {
  event.preventDefault();

  // get input values
  const name = nameInput.value.trim();
  const email = emailInput.value.trim();
  const phone = phoneInput.value.trim();

  // validate input values
  if (name === '' || email === '' || phone === '') {
    errorOutput.textContent = 'Please fill in all fields';
    return;
  }

  // create student object and add to students array
  const student = { name, email, phone };
  students.push(student);

  // clear form inputs and error message
  nameInput.value = '';
  emailInput.value = '';
  phoneInput.value = '';
  errorOutput.textContent = '';

  // re-render table with updated data
  renderTable();
}

// add event listener to form submit button
form.addEventListener('submit', addStudent);
