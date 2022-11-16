const addUser = document.getElementById('add-user')
const double = document.getElementById('double')
const showMillionaires = document.getElementById('show-millionaires')
const sorted = document.getElementById('sort')
const calculatemoney = document.getElementById('calculate-wealth')

let data=[];

getRandomUser();
getRandomUser();
getRandomUser();

async function getRandomUser() {
  const res = await fetch('https://randomuser.me/api');
  const data = await res.json();

  const user = data.results[0];

  const newUser = {
    name: `${user.name.first} ${user.name.last}`,
    money: Math.floor(Math.random() * 1000000)
  };

  addData(newUser);
}

function doublemoney() {
    data = data.map(user=>{
        return{...user , money: user.money*2};
    })

    updateDOM();
}

function representMillionaires() {
    data= data.filter(user=>user.money>1000000);

    updateDOM();
}

function sortEl() {
    data.sort((a,b) => b.money-a.money);

    updateDOM();
}

function calculateWealth() {
    const wealth=data.reduce((ans,user) => ans+=user.money,0);
    const wealthEl=document.createElement('div');
    wealthEl.innerHTML=`<h3><strong>Total Wealth:</strong> ${formatMoney(wealth)}</h3>`;
    main.appendChild(wealthEl);
}

function addData(user) {
    data.push(user);

    updateDOM();
}

function updateDOM(providedData = data) {
    main.innerHTML=`<h2><strong>Person</strong> Wealth</h2>`;
    providedData.forEach(item=>{
        const element=document.createElement('div');
        element.classList.add('person');
        element.innerHTML=`<strong>${item.name}</strong> ${formatMoney(item.money)}`;
        main.appendChild(element);
    });
}

function formatMoney(number) {
    return '$' + number.toFixed(2).replace(/\d(?=(\d{3})+\.)/g, '$&,');
}

addUser.addEventListener('click',getRandomUser);
double.addEventListener('click',doublemoney);
showMillionaires.addEventListener('click',representMillionaires);
sorted.addEventListener('click',sortEl);
calculatemoney.addEventListener('click',calculateWealth);