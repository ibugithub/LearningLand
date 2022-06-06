// // (13) ..... Conditional Rendering in React js ....
// // ----------------------- START ---------------------

// // // (13.1) ...With If Statement...
// // import React, { Component } from 'react';

// // export default class User extends Component {

// //     render() {
// //         return(
// //             <div>
// //                 <h1>welcome Ibrahaim</h1>
// //                 <button>Logout</button>
// //             </div>
// //         );
// //     }
// // }


// // // (13.2) ...With true && expression Statement...
// // import React, { Component } from 'react'
// // export default class PrimeUser extends Component{
// //     render() {
// //         return <h1>Pime Member</h1>
// //     }
// // }


// // // (13.3) ...With if and else Statement...
// // import React, { Component } from 'react';
// // export default class User extends Component {

// //     render() {
// //         return (
// //             <React.Fragment>
// //                 <h2> Welcome Ibrahim</h2>
// //                 <button onClick={this.props.clickedData}>Logout</button>
// //             </React.Fragment>
// //         )

// //     }
// // }


// // // (13.4) ...Inline if and else Statement with conditional operator...
// // import React, { Component } from 'react';
// // export default class User extends Component {

// //     render() {
// //         return (
// //             <React.Fragment>
// //                 <h2> Welcome Ibrahim</h2>
// //                 <button onClick={this.props.clickedData}>Logout</button>
// //             </React.Fragment>
// //         )

// //     }
// // }


// // // (13.5) ...IIFE conditional operator...
// // import React, { Component } from 'react';
// // export default class User extends Component {

// //     render() {
// //         return (
// //             <React.Fragment>
// //                 <h2> Welcome Ibrahim</h2>
// //                 <button onClick={this.props.clickedData}>Logout</button>
// //             </React.Fragment>
// //         )

// //     }
// // }
// // ----------------------- END ---------------------












// // (14.4) ....Passing key attribut through props in React js
// // ----------------------------- START --------------------------
// import React, { Component } from 'react';

// export default class User extends Component{
//     render() {
//         // now the key value named as num as props will do the work
//         return <li> {this.props.num} </li>;

//         // but if you try to access the key by naming it "key" as props will not work
//         return <li>{this.props.key}</li>
//     }
// }
// // ------------------------------- END --------------------------















// // (16) && (16.1) ....Styling with exteernal css in React js and React css module
// // ------------------------ START -----------------------
// import React, {Component} from 'react'; 
// import './user.css';
// import cssModule from "./user.module.css"
// export default class Student extends Component {
//     render() {
//         // As in external css all the css files will be treated as a single file for that same class name in  the in the multiple files will collapse. In this senerio you will have to use different class Name like here i use the className as color2 instead of color and background2 instead of backgroud
//         console.log(this.props.rong)
//          return ( 
//                 <React.Fragment>
//                     <h2 className="color2 background2">Hello Planet</h2>
//                     <h1 className={this.props.rong}>conditional css rendering</h1>
//                     <h4 className={cssModule.color}>Using React Css Module from user</h4>
//                 </React.Fragment>
//          );
//     }
// }
// // --------------------------- END ------------------------

















// // (23) .... Lifting up state in React js
// // -------------------- START ----------------- 
// import React, {Component} from 'react';

// export default class User extends Component{
//     render() {
//         return(
//             <div>
//                 <h4>The state in User is {this.props.name}</h4>
//             </div>
//         ); 
//     }
// }

// // -------------------- END -------------------
























