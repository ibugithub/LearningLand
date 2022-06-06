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
import Layout from "./Component/Pages/Layout.js";
import MobileLayout from './Component/Pages/MobileLayout.js';
import Model from './Component/Pages/Model.js';
import Feature from './Component/Pages/Feature.js';
import Prize from './Component/Pages/Prize.js';


function App() {
  return (
    <>
      <BrowserRouter>
        <Routes>
          <Route path = "/" element={<Layout />} >
            <Route index element={<Home />} />
            <Route path = "/about" element={<About />} />
            <Route path = "/contact" element={<Contact />} />
            <Route path = "/mobile" element={<MobileLayout />} >
              <Route index element = {<Model />} />
              <Route path = "/mobile/model/:m" element={<Model />} />
              <Route path = "/mobile/feature/:f" element={<Feature />} />
              <Route path = '/mobile/prize/:p' element={<Prize />} />
              <Route path = "/mobile/model" element={<Model />} />
              <Route path = "/mobile/feature" element={<Feature />} />
              <Route path = '/mobile/prize' element={<Prize />} />
            </Route>
          </Route>
          <Route path="*" element = {<h1> Error 404! Page not found</h1>} />
        </Routes>
      </BrowserRouter>
    </>
  );
}

export default App;