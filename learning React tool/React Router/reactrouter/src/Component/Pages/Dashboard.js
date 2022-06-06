import { useNavigate } from "react-router-dom";
import React from "react";

const DashBoard = () =>{
    let navigate = useNavigate()
    let data = {'st': "User Logged Out"}
    return (
        <React.Fragment>
            <h1>Dashboard Page</h1> 
            <button onClick={()=>{navigate('/logout', {state:data})}}>Logout</button>
        </React.Fragment>
        
    );
}
export default DashBoard;