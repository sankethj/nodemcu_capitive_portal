const char postPage[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<head>
<style>
  html{
    height: 100%;
} 
body{
    margin: 0;
    padding: 0;
    font-family: sans-serif;
    background: linear-gradient(#141e30, #243b55); 
}
.login-box{
    position: absolute;
    top: 50%;
    left: 50%;
    width: 400px;
    padding: 40px;
    transform: translate(-50%,-50%);
    background: rgba(0,0,0,0.5);
    box-sizing: border-box;
    border-radius: 10px;
}
.login-box h2{
    margin: 0 0 30px;
    padding: 0;
    color: #fff;
    text-align: center;
}
.login-box form button, a{
      position: relative;
      display: inline-block;
      padding: 10px 20px;
      color: #03e9f4;
      font-size: 16px;
      text-decoration: none;
      text-transform: uppercase;
      overflow: hidden;
      transition: 0.5s;
      margin-top: 40px;
      letter-spacing: 4px;
  }

  .login-box button, a:hover{
      background: #03e9f4;
      color: #fff;
      box-shadow: 0 0 5px #03e9f4,
      0 0 25px #03e9f4, 0 0 50px #03e9f4, 0 0 100px #03e9f4;
  }
 
  .login-box button, a span {
    position: absolute;
    display: block;
  }
  
  .login-box button, a span:nth-child(1) {
    top: 0;
    left: -80%;
    width: 80%;
    height: 2px;
    background: linear-gradient(90deg, transparent, #03e9f4);
    animation: btn-anim1 1s linear infinite;
  }
  
  @keyframes btn-anim1 {
    0% {
      left: -80%;
    }
    50%,100% {
      left: 80%;
    }
  }
  
  .login-box button, a span:nth-child(2) {
    top: -80%;
    right: 0;
    width: 2px;
    height: 80%;
    background: linear-gradient(180deg, transparent, #03e9f4);
    animation: btn-anim2 1s linear infinite;
    animation-delay: .25s
  }

  @keyframes btn-anim2 {
    0% {
      top: -80%;
    }
    50%,100% {
      top: 80%;
    }
  }
  
  .login-box button, a span:nth-child(3) {
    bottom: 0;
    right: -80%;
    width: 80%;
    height: 2px;
    background: linear-gradient(270deg, transparent, #03e9f4);
    animation: btn-anim3 1s linear infinite;
    animation-delay: .5s
  }
 
  @keyframes btn-anim3 {
    0% {
      right: -80%;
    }
    50%,100% {
      right: 80%;
    }
  }
  
  .login-box button, a span:nth-child(4) {
    bottom: -60%;
    left: 0;
    width: 2px;
    height: 80%;
    background: linear-gradient(360deg, transparent, #03e9f4);
    animation: btn-anim4 1s linear infinite;
    animation-delay: .75s
  }

  @keyframes btn-anim4 {
    0% {
      bottom: -80%;
    }
    50%,100% {
      bottom: 80%;
    }
  }
</style>
</head>
<body>
<div class="login-box">
<h2>
<a href="#" style="text-decoration: none;">
  <span></span>
  <span></span>
  <span></span>
  <span></span>
  Team ETF
</a>
</h2>
<h4 style="color:#F5F5F5">Join my Telegram channel or follow me on Twiiter for more updates.</h4>
<a href="https://t.me/team_etf">
  Telegram
</a>
<a href="https://t.me/team_etf">
  Twitter
</a>
</div>
</body>
</html>
)=====";
