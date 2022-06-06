import { useLocation } from "react-router-dom";

const Login = () =>{
    let location = useLocation()
    console.log('The location is', location.state.st)
    return (
        <div>
        <h2>{location.state.st}</h2>
        <h1> Login Page </h1>
        </div>

    );
}
export default Login;