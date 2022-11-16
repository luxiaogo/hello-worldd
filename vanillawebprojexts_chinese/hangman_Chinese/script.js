const wordEl = document.getElementById('word');
const wrongLettersEl = document.getElementById('wrong-letters');
const playAgainBtn = document.getElementById('play-button');
const popup = document.getElementById('popup-container');
const notification = document.getElementById('notification-container');
const finalMessage = document.getElementById('final-message');
const finalMessageRevealWord = document.getElementById('final-message-reveal-word');

const figureParts = document.querySelectorAll('.figure-part');

const correctLetters = [];                 //为什么可以用const
const wrongLetters = [];
const words = ['abandon','beyond','category','dormitory'];
let selectedWord = words[Math.floor(Math.random()*words.length)];
let playable = true;
function displayWord(){
    wordEl.innerHTML = `
    ${selectedWord.split('').map(letter=>
    `<span class='letter'>
    ${correctLetters.includes(letter)?letter:''}
    </span>
    `
    ).join('')}
    `;

    const innerWord = wordEl.innerText.replace(/\n/g, '');

    if(innerWord === selectedWord){
        finalMessage.innerText='恭喜你赢了';
        finalMessageRevealWord.innerText='';
        popup.style.display='flex';
        playable=false;
    }
}

displayWord();

function updateWrongLettersEl(){
    wrongLettersEl.innerHTML=`
    ${wrongLetters.length>0?`<p>wrong</p>`:''}
    ${wrongLetters.map(letter=>`<span>${letter}</span>`)}
    `;

    figureParts.forEach((part,index)=>{
        const errors = wrongLetters.length;
        if(index<errors){
            part.style.display='block';
        }else{
            part.style.display='none';
        }
    });

    if(wrongLetters.length === figureParts.length){
        finalMessage.innerText='抱歉你输了';
        finalMessageRevealWord.innerText=`正确答案是:${selectedWord}`;
        popup.style.display = 'flex';

        playable = false;
    }
}

function showNotification() {
    notification.classList.add('show');
    setTimeout(() => {
        notification.classList.remove('show');
    }, 2000);
}

window.addEventListener('keydown',e=>{
    if(playable){
        if(e.keyCode>=65 && e.keyCode<=90){
            const letter =e.key.toLowerCase();
            if(selectedWord.includes(letter)){
                if(correctLetters.includes(letter)){
                    showNotification();
                }else{
                    correctLetters.push(letter);
                    displayWord();
                }
            }else{
                if(wrongLetters.includes(letter)){
                    showNotification();
                }else{
                    wrongLetters.push(letter);
                    updateWrongLettersEl();
                }
            }
        }
    }
});

playAgainBtn.addEventListener('click',e=>{
    playable=true;

    correctLetters.splice(0);
    wrongLetters.splice(0);

    selectedWord = words[Math.floor(Math.random()*words.length)];

    displayWord();
    updateWrongLettersEl();

    popup.style.display='none';
});

