const char loginPage[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<head>
  <title>Login Form</title>
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
.login-box .user-box{
    position: relative;
}
.login-box .user-box input {
    width: 100%;
    padding: 10px 0;
    font-size: 16px;
    color: #fff;
    margin-bottom: 30px;
    border: none;
    border-bottom: 1px solid #fff;
    outline: none;
    background: transparent;
  }
  .login-box .user-box label {
    position: absolute;
    top:0;
    left: 0;
    padding: 10px 0;
    font-size: 16px;
    color: #fff;
    pointer-events: none;
    transition: .5s;
  }
  .login-box .user-box input:focus ~ label,
  .login-box .user-box input:valid ~ label{
      top: -20px;
      left: 0;
      color: #03e9f4;
      font-size: 12px;
  }
  .login-box button:hover {
         color: #fff;
         box-shadow: 0 0 5px #03e9f4, 0 0 25px #03e9f4, 0 0 50px #03e9f4, 0 0 100px #03e9f4;
}
  </style>
</head>
<body>
    <div class="login-box">
        <h2>LOGIN</h2>
        <form action="/connect.htm" id="login-form">
            <div class="user-box">
                <input type="text" name="email" required="">
            <label>Email</label>
            </div>
            <div class="user-box">
                <input type="password" name="password" required="">
                <label>Password</label>
            </div>
            <button id="button" style="background: black; color: white; font-size: 16px; text-transform: uppercase; border: 2px solid black; border-color: #03e9f4; padding: 10px 20px; letter-spacing: 4px; transition: 0.5s;">
                Submit
            </button>
        </form>
    </div>
</body>
</html>
)=====";
