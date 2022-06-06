import { NavLink, Outlet } from "react-router-dom";
import React from 'react';
const MobileLayout = () => {

    return (
        <React.Fragment>
            <nav>
                <ul>
                    <li> <NavLink to="/mobile/model" style = {({isActive}) => { return {backgroundColor : isActive? 'green' : ''}} }>Model</NavLink> </li>

                    <li><NavLink to = "/mobile/feature" style={({isActive})=>{return { background : isActive? 'green' : '' }}}>Feature</NavLink></li>

                    <li><NavLink to = "/mobile/prize" style = {({isActive})=>{return {background : isActive? 'green' : ''}}} >Prize</NavLink></li>
                </ul>
            </nav>
            <Outlet/>
        </React.Fragment>
    );
}
export default MobileLayout;