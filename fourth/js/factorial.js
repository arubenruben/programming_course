(() => {
    "use strict"

    const formElement = document.querySelector('form');
    formElement.addEventListener('submit', handleFormSubmit.bind(formElement));


    function handleFormSubmit(event) {
        event.preventDefault();
        factorialCalculator(this);
    }
})()

function factorialCalculator(form) {

    let valueToCalculate = form.querySelector('.factorial-input').value;

    let sum = 1;

    for (let i = valueToCalculate; i > 0; i--) {
        sum *= i;
    }

    form.querySelector('input[name = "factorial-output"]').value = sum;
    form.querySelector('#factorial-input-preview').innerHTML = " " + valueToCalculate;
}