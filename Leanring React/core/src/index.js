// Function Base React Component (Props in React js)----->

// import React from "react";
// import ReactDOM from "react-dom";
// import Student from "./student";

// ReactDOM.render(<Student name = "rakib" city = "Dhaka" weight = {50 + 5}/>, document.getElementById("root"))




// (1).... Children in jsx ....
// import React from "react";
// import ReactDOM from "react-dom";
// import Student from "./student" 

// ReactDOM.render(<Student>I am Ibrahim and my weight is {44+ 10} </Student>, document.getElementById('root'))




// (2).... State in React Js ....
// import React from "react";
// import ReactDOM from "react-dom";
// import Student from "./student" 

// ReactDOM.render(<Student name="ibrahim hossain" city="Dhaka" />, document.getElementById('root')) 



// (3) ....Event Handling in React js By class component....
// <------------------ START ------------------>

// import React from "react"; 
// import { createRoot } from 'react-dom/client'
// import Student from "./student";

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render( <Student roll = {1749} /> );
// <---------------------- END ---------------------->





// (4) ....EVENT HANDLING IN REACT JS BY FUNCTION COMPONENT....
// <----------------- START -------------------> 
 
// import React from "react" 
// import { createRoot } from "react-dom/client"
// import Student from  "./student"

// const container = document.getElementById('root') 
// const root = createRoot(container)
// root.render( <Student name= "ibrahim" roll = {1749} /> ) 









// (5)....UPDATING STATE IN REACT JS ....
// import React from "react"; 
// import { createRoot } from "react-dom/client" 
// import Student from "./student" 

// const container = document.getElementById("root") 
// const root = createRoot(container) 
// root.render( <Student city="dhaka"/> )










// // (6) .... PASSING ARGUMENTS TO EVENT HANDLER IN REACT JS
// // <------------------START-------------------->

// import React from "react" 
// import { createRoot } from "react-dom/client" 
// import Student from "./student" 

// const container = document.getElementById('root')
// const root = createRoot(container)
// root.render( <Student /> )















// // (7)....MOUNTING IN REACT JS....
// // <------------------ START------------------->
// import React from "react"; 
// import { createRoot } from "react-dom/client" 
// import Student from "./student" 

// const container = document.getElementById('root')
// const root = createRoot(container) 
// root.render( <Student name="ibrahim" city="dhaka"/> )
// // <------------------ END ------------------->














// // (8)....UPDAING IN REACT JS....
// // <------------------ START------------------->
// import React from "react";
// import { createRoot } from 'react-dom/client';
// import Student from "./student.js";

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render( <Student roll={1749}/>);
// // <------------------ END -------------------->















// // (9).... Unmounting in React Js ....
// // -----------------------  START -------------------------

// import React from "react";
// import { createRoot } from "react-dom/client";
// import Student from "./student"; 
// import Child from "./child"

// const container = document.getElementById('root');
// const container2 = document.getElementById("root2")
// const root = createRoot(container);
// const root2 = createRoot(container2)
// root.render(<Student />);
// root2.render(<Child /> );
// root2.unmount(container)
// // -----------------------  END -------------------------
















// // (10).... useState hook in Reactjs ....
// // ------------------- SART -----------------------
// import React from "react";
// import { createRoot } from "react-dom/client";
// import Student from "./student.js"
// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render(<Student />)
// //  ------------------------ END -------------------- 















// // (11) .... useEffect in ReactJs ....
// // ------------------------- START ------------------------
// import React from 'react';
// import {createRoot} from 'react-dom/client';
// import Student from "./student.js"

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render( <Student />)
// // -------------------------- END -------------------------

















// // (12) .... Custom Hooks in React js ....
// // -----------------------  START ----------------------
// import React from "react";
// import { createRoot } from 'react-dom/client';
// import Student from './student.js';
 
// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render(<Student />)

// // ------------------------ END -----------------------

















// // (13) ..... Conditional Rendering in React js ....
// // ----------------------- START ---------------------
// // (13.1) ...With If Statement...
// import React from 'react';
// import { createRoot } from 'react-dom/client';
// import Student from "./student.js";

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render(< Student isRegister={false}/> );



// // (13.2) ...With true && expression Statement...
// import React from 'react';
// import { createRoot } from 'react-dom/client';
// import PrimeStudent from './student.js';

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render( <PrimeStudent isPrime={true}/>)



// // (13.3) ...With if and else Statement...
// import React from 'react';
// import {createRoot} from 'react-dom/client';
// import Student from './student.js'

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render( <Student />)



// // (13.4) ...Inline if and else Statement with conditional operator...
// import React from 'react';
// import {createRoot} from 'react-dom/client';
// import Student from './student.js'

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render( <Student />)



// // (13.5) ...IIFE conditional operator...
// import React from 'react';
// import {createRoot} from 'react-dom/client';
// import Student from './student.js'

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render( <Student />)
// ----------------------- END ---------------------


















// // (14) .... List in React Js ....
// // ------------------------ START ----------------------
// // // (14.1) ... Looping with Map function in React Js
// // import React from  'react';
// // import { createRoot } from 'react-dom/client';
// // import Student from './student.js';
// // const container = document.getElementById('root');
// // const root = createRoot(container);
// // root.render(<Student />)



// // // (14.2) ... Looping with Map function in JSX in React Js ...
// // import React from  'react';
// // import { createRoot } from 'react-dom/client';
// // import Student from './student.js';
// // const container = document.getElementById('root');
// // const root = createRoot(container);
// // const arr = [10, 20, 30, 40];
// // root.render(<Student  arr={arr}/>)



// // // (14.3) ... Accessing  State defining key in React Js ...
// // import React from  'react';
// // import { createRoot } from 'react-dom/client';
// // import Student from './student.js';
// // const container = document.getElementById('root');
// // const root = createRoot(container);
// // root.render(<Student  />)



// // // (14.4) ....Passing key attribut through props in React js
// // import React from 'react';
// // import {createRoot} from 'react-dom/client';
// // import Student from './student.js';

// // const container = document.getElementById('root');
// // const root = createRoot(container);
// // const number = [4,5,6,7,8]
// // root.render( <Student number={number}/>)
// // -------------------------- END ----------------------


















// // (15)Styling component with css in React js
// // ----------------------------- START --------------------------
// import React from 'react';
// import { createRoot } from 'react-dom/client';
// import Student from './student.js';

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render( <Student />);
// // ------------------------------- END --------------------------















// // (16) ....Styling with exteernal css in React js
// // ------------------------ START -----------------------
// // import React from 'react';
// // import {createRoot} from 'react-dom/client';
// // import Student from './student.js';
// // import User from './user.js'

// // const container = document.getElementById('root');
// // const container2 = document.getElementById('root2');
// // const root2 = createRoot(container2)
// // const root = createRoot(container); 
// // root.render(<Student />)
// // root2.render(<User />)



// // // (16.1) ....Conditional css rendering in React js and React css module
// // import React from 'react';
// // import {createRoot} from 'react-dom/client';
// // import Student from './student.js';

// // const container = document.getElementById('root');
// // const root = createRoot(container); 
// // root.render(<Student />)
// // --------------------------- END ------------------------















// // (17) .... Usng image and other assests in  React js
// // -------------------------------- START ---------------------------
// import React from 'react';
// import {createRoot} from 'react-dom/client';
// import Student from './student.js';

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render(<Student />);

// // --------------------------------- END ----------------------------
















// // (18).... Using Bootstrap in React js
// // ---------------------- START ----------------------
// import React from 'react';
// import { createRoot } from 'react-dom/client';
// import Student from "./student";

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render( <Student />)
// // ------------------------- END ----------------------















// // (19) Forms in React js
// // --------------------------- START ---------------------------
// import React from 'react';
// import {createRoot} from   'react-dom/client';
// import Student from './student.js';

// const container = document.getElementById('root');
// const root = createRoot(container)
// root.render( <Student />)
// // ---------------------------- END ----------------------------















// // (20)..... multiple input handling in React js
// // -------------------- START -------------------
// import React from 'react';
// import {createRoot} from 'react-dom/client';
// import Student from './student.js';

// const container = document.getElementById('root');
// const root = createRoot(container)
// root.render(<Student />) 
// // ---------------------- END ------------------- 













// // (21) .... Uncontroled Component Ref in React js
// // ----------------------- START -------------------
// import React from 'react';
// import { createRoot} from 'react-dom/client';
// import Student from './student.js';

// const container = document.getElementById('root');
// const root = createRoot(container) 
// root.render(<Student />)
// // ------------------------ END --------------------






   








// // (22)..... Callback refs in React js .... 
// // ------------------ START -----------------
// import React from 'react'; 
// import {createRoot} from 'react-dom/client';
// import Student from './student.js';

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render(<Student />)
// // ------------------------ END --------------------

















// // (23) .... Lifting up state in React js
// // -------------------- START ----------------- 
// import React from 'react';
// import { createRoot } from 'react-dom/client';
// import Student from './student.js';

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render( <Student />);
// // -------------------- END -------------------














// // (24) .... Context Api in React js ....
// // ----------------- START -----------------
// import React from 'react';
// import {createRoot} from 'react-dom/client';
// import  Student from './student.js';

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render(<Student />);
// // -------------------- END ----------------














// // (25) .... Context Api with context type in React js ....
// // ----------------- START -----------------
// import React from 'react';
// import {createRoot} from 'react-dom/client';
// import  Student from './student.js';

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render(<Student />);
// // -------------------- END ---------------- 

















// // (26).... Higher Order Function in React Js ....
// // ----------------------- START -------------------
// import React from 'react';
// import {createRoot} from 'react-dom/client';
// import Student from './student.js'; 

// const container = document.getElementById('root');
// const root = createRoot(container);
// root.render(<Student />);
// // ---------------------- END ----------------------


















// // (27) ..... Error boundaries ..... 
// // --------------------- START ----------------------- 
// import React from 'react';
// import {createRoot} from 'react-dom/client';
// import Student from "./student.js";

// const container = document.getElementById('root');
// const root = createRoot(container)
// root.render(<Student />)
// // ----------------------- END -----------------------













// (28).... STRICT MODE in React Js ....
// ----------------------- START -------------------
import React from 'react';
import {createRoot} from 'react-dom/client';
import Student from './student.js';

const container = document.getElementById('root');
const root = createRoot(container);
root.render( <Student />)


// ---------------------- END ----------------------