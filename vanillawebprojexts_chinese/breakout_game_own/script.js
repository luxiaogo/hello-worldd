const rulesBtn = document.getElementById('rules-btn');
const closeBtn = document.getElementById('close-btn');
const rules = document.getElementById('rules');
const canvas = document.getElementById('canvas');
const contributionBtn = document.getElementById('contribution-btn');
const closeBtn2 = document.getElementById('close-btn2');
const ctx = canvas.getContext('2d');
const ewm = document.getElementById('ewm');
const closeBtn3 = document.getElementById('close-btn3');
let score=0;

const brickColumnCount=5;
const brickRowCount=9;
const delay=500;

const ball={
    x:canvas.width/2,
    y:canvas.height/2,
    speed:4,
    dx:4,
    dy:-4,
    size:10,
    visible:true,
    color:'#0095dd'
};

const paddle={
    x:canvas.width/2-40,
    y:canvas.height-20,
    dx:0,
    speed:8,
    w:80,
    h:10,
    visible:true
};

const brickInfo={
    offsetX:45,
    offsetY:60,
    padding:10,
    w:70,
    h:20,
    visible:true
};

const bricks=[];

for(let i=0;i<brickRowCount;i++){
    bricks[i]=[];
    for(let j=0;j<brickColumnCount;j++){
        const x=brickInfo.offsetX+(brickInfo.w+brickInfo.padding)*i;
        const y=brickInfo.offsetY+(brickInfo.h+brickInfo.padding)*j;
        bricks[i][j]={x,y,...brickInfo};
    }
}

function drawBall() {
    ctx.beginPath();
    ctx.arc(ball.x,ball.y,ball.size,0,Math.PI*2);
    ctx.fillStyle=ball.visible?ball.color:'transparent';
    ctx.fill();
    ctx.closePath();
}

function drawPaddle() {
    ctx.beginPath();
    ctx.rect(paddle.x,paddle.y,paddle.w,paddle.h);
    ctx.fillStyle=paddle.visible?'#0095dd':'transparent';
    ctx.fill();
    ctx.closePath();
}

function drawBricks() {
    bricks.forEach(column=>{
        column.forEach(brick=>{
            ctx.beginPath();
            ctx.rect(brick.x,brick.y,brick.w,brick.h);
            ctx.fillStyle=brick.visible?'#0095dd':'transparent'
            ctx.fill();
            ctx.closePath();
        })
    })
}

function drawScore() {
    ctx.font='20px Arial';
    ctx.fillText(`Score:${score}`,canvas.width-100,30);  //
}

function movePaddle() {
    paddle.x+=paddle.dx;
    if(paddle.x+paddle.w>canvas.width){
        paddle.x=canvas.width-paddle.w;
    }

    if(paddle.x<0){
        paddle.x=0;
    }
}

function moveBall() {
    ball.x+=ball.dx;
    ball.y+=ball.dy;

    if(ball.x+ball.size>canvas.width || ball.x-ball.size<0){
        ball.dx*=-1;
    }
    if(ball.y+ball.size>canvas.height || ball.y -ball.size<0){
        ball.dy*=-1;
    }
    if(ball.x-ball.size>paddle.x && ball.x+ball.size<paddle.x+paddle.w && ball.y+ball.size>paddle.y){
        ball.dy=-ball.speed;
    }
    if(ball.y+ball.size>canvas.height){
        showAllBricks();
        score=0;
    }
    bricks.forEach(column=>{
        column.forEach(brick=>{
            if(
                ball.x-ball.size>brick.x && 
                ball.x+ball.size<brick.x+brick.w && 
                ball.y+ball.size>brick.y && 
                ball.y-ball.size<brick.y+brick.h && 
                brick.visible
            ){
                ball.dy*=-1;
                increaseScore();
                brick.visible=false;
            }
        })
    })
}

function increaseScore() {
    score++;
    if(score%45===0){
        ball.visible=false;
        paddle.visible=false;

        setTimeout(function () {
            showAllBricks();
            score=0;
            ball.x=canvas.height/2;
            ball.y=canvas.width/2;
            paddle.x=canvas.width/2-40;
            ball.visible=true;
            paddle.visible=true;
        },delay)
    }
}

function showAllBricks() {
    bricks.forEach(column=>{
        column.forEach(brick=>{
            brick.visible=true;
        })
    })
}

function draw(){
    ctx.clearRect(0,0,canvas.width,canvas.height);

    drawBricks();
    drawBall();
    drawPaddle();
    drawScore();
}

function update(){
    moveBall();
    movePaddle();
    draw();

    requestAnimationFrame(update);
}
update();

function keyDown(e) {
    if(e.key==='a' || e.key==='Left' || e.key==='ArrowLeft'){
        paddle.dx=-paddle.speed;
    }
    if(e.key==='d' || e.key==='Right' || e.key==='ArrowRight'){
        paddle.dx=paddle.speed;
    }
}

function keyUp(e) {
    if(e.key==='a' || e.key==='Left' || e.key==='ArrowLeft' || e.key==='d' || e.key==='Right' || e.key==='ArrowRight'){
        paddle.dx=0;
    }
}
document.addEventListener('keydown',keyDown);
document.addEventListener('keyup',keyUp);

rulesBtn.addEventListener('click',function() {
    rules.classList.add('show');
});
closeBtn.addEventListener('click',()=>rules.classList.remove('show'));
contributionBtn.addEventListener('click',function() {
    skin.classList.add('show');
    ewm.classList.add('show');
});
closeBtn3.addEventListener('click',()=>ewm.classList.remove('show'));

closeBtn2.addEventListener('click',function() {
    skin.classList.remove('show');
    ball.color='pink';
});
