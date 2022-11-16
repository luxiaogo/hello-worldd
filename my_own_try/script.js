const username=document.getElementById('username');
const email=document.getElementById('email');
const password=document.getElementById('password');
const password2=document.getElementById('password2');
const form=document.getElementById('form');

function showSuccess(input){
    const formcontrol=input.parentElement;
    formcontrol.className='form-control success';
}

function showError(input,message){
    const formcontrol=input.parentElement;
    formcontrol.className='form-control error';
    const small = formcontrol.querySelector('small');       //
    small.innerText=message;
}

form.addEventListener('submit',function(e){
    e.preventDefault();
    if(isRequired([username,email,password,password2])){
        checkLength(username,3,10,'用户名');
        checkLength(password,6,15,'密码');
        checkMatch(password,password2);
        checkEmail(email);
    }
})

function isRequired(Arr){
    const required=true;
    Arr.forEach(temp=>{
        if(temp.value.trim()===''){
            showError(temp,'请输入内容！');
            required=false;
        }else{
            showSuccess(temp);
        }
    })
    return required;
}

function checkLength(input,min,max,message){
    if(input.value.length>min && input.value.length<max){
        showSuccess(input);
    }else{
        showError(input,`${message}长度错误`);
    }
}

function checkEmail(input){
    const re= /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
    if(re.test(email.value.trim())){
        showSuccess(input);
    }else{
        showError(input,'邮箱格式错误');
    }
}

function checkMatch(input1,input2){
    if(input1.value.trim()===input2.value.trim()){
        showSuccess(input2);
    }else{
        showError(input2,'两次输入的密码不一致！');
    }
}