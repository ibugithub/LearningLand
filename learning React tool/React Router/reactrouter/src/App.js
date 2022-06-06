// import './App.css';
// import { BrowserRouter, Routes, Route } from 'react-router-dom';
// import Home from "./Component/Pages/Home";
// import About from './Component/Pages/About';
// import Contact from './Component/Pages/Contact';
// import Navbar from './Component/Pages/Navbar';
// function App() {
//   return (
//     <>
//       <BrowserRouter>
//         <Navbar />
//         <Route exact path="/" component={Home} />
//         <Route exact path="/about" component={About} />
//         <Route exact path="/contact" component={Contact} />
//       </BrowserRouter>
//     </>
//   );
// }

// export default App;








import { BrowserRouter, Navigate, Routes, Route } from 'react-router-dom';
import Home from "./Component/Pages/Home.js";
import About from "./Component/Pages/About.js";
import Contact from "./Component/Pages/Contact.js";
import Navbar from "./Component/Pages/Navbar.js";
import Post from "./Component/Pages/Post.js";
import DashBoard from "./Component/Pages/Dashboard.js";
import Login from "./Component/Pages/Login.js";
import Logout from './Component/Pages/logout.js';

function App() {
  let isLogged = true;
  let data = {
    'st': "User isn't logged in"
  }
  return (
    <>
      <BrowserRouter>
        <Navbar />
        <Routes>
          <Route path="/" element={<Home />} />
          <Route path="/about" element={<About />} />
          <Route path="/contact" element={<Contact />} />
          <Route path="/post/:category" element = {<Post />} />
          <Route path = "/post/:category/:id" element = {<Post />} />
          <Route path = "/dashboard" element = { isLogged ? <DashBoard /> : <Navigate to = "/login" replace state = {data}/>} />
          <Route path = "/login" element = {<Login />} />
          <Route path = "/logout" element = {<Logout />} />



          <Route path="*" element={<h1>Error: Error 404 Page not Found !!!</h1>} />
        </Routes>
      </BrowserRouter>
    </>
  );
}

export default App;