import { Link, NavLink } from 'react-router-dom';
import '../../App.css'

const Navbar = () => {
    return (
        // // This is the normal way to link  url
        // <nav>
        //     <ul>
        //         <li><a href="/">Home</a> </li>
        //         <li><a href="/about">About</a></li>
        //         <li><a href="/contact">Contact</a></li>
        //     </ul>
        // </nav>


        // // This is the React way to do the work
        // <nav>
        //     <ul>
        //         <li><Link to="/" >Home</Link></li>
        //         <li><Link to="/about" >About</Link> </li>
        //         <li><Link to= "/contact" >Contact</Link></li>
        //     </ul>
        // </nav>


        // But if you want to style the li this will be right way
        // This is the React way to do the work
        <nav>
            <ul>
                <li><NavLink to="/" className="font" style={({ isActive }) => { return { backgroundColor: isActive ? 'red' : '' } }}>Home</NavLink></li>

                <li><NavLink to="/about" style={({ isActive }) => { return { backgroundColor: isActive ? 'green' : ' ' } }}>About</NavLink> </li>

                <li><NavLink to="/contact" style={({ isActive }) => { return { backgroundColor: isActive ? 'yellow' : '' } }}>Contact</NavLink></li>

                <li> <NavLink to="/post/category" style={({ isActive }) => { return { backgroundColor: isActive ? "white" : '', color: isActive ? 'pink' : '' } }}> Post</NavLink> </li>

                <li><NavLink to="post/category/id" style={({ isActive })=> {return {backgroundColor : isActive ? "yellow" : '', fontSize:'30px'}}}>Post With Id</NavLink> </li>
            </ul>
        </nav>

    );


}
export default Navbar;