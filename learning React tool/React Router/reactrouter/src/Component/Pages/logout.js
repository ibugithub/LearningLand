import { useLocation } from "react-router-dom";
const Logout = () =>{
    let location = useLocation();
    console.log("This is the location obj",location)
    return (
        <div>
            <h2>{location.state != null && location.state.st}</h2>
            <h1>Logout Page</h1>
        </div>
    );
}
export default Logout;