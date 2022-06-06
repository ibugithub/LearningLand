import React from 'react';
import { NavLink, Outlet } from 'react-router-dom';
import '../../App.css'

const Layout = () => {
    return (
        <React.Fragment>
            <h1>React Router v6</h1>
            <nav>
                <ul>
                    <li><NavLink to="/" className="font" style={({ isActive }) => { return { backgroundColor: isActive ? 'red' : '' } }}>Home</NavLink></li>

                    <li><NavLink to="/about" style={({ isActive }) => { return { backgroundColor: isActive ? 'green' : ' ' } }}>About</NavLink> </li>

                    <li><NavLink to="/contact" style={({ isActive }) => { return { backgroundColor: isActive ? 'yellow' : '' } }}>Contact</NavLink></li>

                    <li> <NavLink to="/mobile" style={({ isActive }) => { return { backgroundColor: isActive ? "white" : '', color: isActive ? 'pink' : '' } }}> Mobile</NavLink> </li>
                </ul>
            </nav>
            <Outlet />
        </React.Fragment>
    );


}
export default Layout;