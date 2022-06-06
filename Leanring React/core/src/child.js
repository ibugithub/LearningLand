
// // (7)....MOUNTING IN REACT JS....
// // <------------------ START------------------->

// import React, { Component } from "react";
// import GrandChild from "./grandChild"

// export default class Child extends Component{

//     constructor(props){
//         super(props);
//         console.log("constructor from child has been called")
//         console.log("props of childs is", props)
//         this.state = {
//             love : "Nature"
//         }
//     }

//     static getDerivedStateFromProps(props, state){
//         console.log("get Derived State From Props from Child has been called")
//         return null;
//     }

//     componentDidMount() {
//         // Getting the data from server and set it to the state will be done here in this method
//         console.log("ComponentDidMount has been called from child")
//     }

//     render() {
//         console.log("Render Method form child has been called")
//         return(
//             <div>
//                 <h1>Hello {this.props.name} </h1>
//                 <h2> < GrandChild /> </h2>
//             </div>
//         );
//     }
// }
// // <------------------ END ------------------->
















// // (8)....UPDAING IN REACT JS....
// // <------------------ START------------------->

// import React, { Component } from "react";

// export default class Child extends Component{
//     constructor(props) {
//         console.log("Constructor from Child has been called")
//         super(props);
//         console.log("The props from Child is", props.ChildName)
//         this.state = {
//             ChildName : this.props.ChildName,
//             age : this.props.age
//         }
//         console.log("The state from Child is", this.state.ChildName)
//     }

//     static getDerivedStateFromProps(props, state){
//         console.log("The getDerivedStateFromProps method has been called");
//         console.log("The props is ", props.ChildName);
//         console.log("The state is ", state.ChildName);
//         if (props.ChildName !== state.ChildName | props.age !== state.age) {
//             return { ChildName : props.ChildName, age : props.age};
//         }
//         return null;
//     }

//     shouldComponentUpdate(nextProps, nextState){
//         console.log("The should componentUpdate method has been called");
//         console.log("The nextProps is ", nextProps);
//         console.log("The nextState is ", nextState);
//         if (this.state.age < 20){
//             return true;
//         }
//         return false;
//     }
//     getSnapshotBeforeUpdate(prevProps, prevState) {
//         console.log("The getSnapshotBeforUpdate has been called");
//         console.log("The prevProps is", prevProps);
//         console.log("The PrevState is", prevState);
//         return "some returned value will be here"
//     }
//     componentDidUpdate(prevProps, prevState, snapshot){
//         console.log("The componentDidUpdate method has been called");
//         console.log("The prevProps is", prevProps);
//         console.log("The PrevState is", prevState);
//         console.log("The snapshot is", snapshot);
//     }

//     render() {
//         console.log("The render method from child has been called")
//         return (
//             <div>
//                 <h3>Hello {this.state.ChildName}</h3>
//                 <h3> Your Age is {this.state.age}</h3>
//             </div>
//         );
//     }
// }
// // <------------------ END -------------------->















// // (9).... Unmounting in React Js ....
// // -----------------------  START -------------------------
// import React , { Component } from "react";

// export default class Child extends Component {
//     componentDidMount() {
//         console.log("The Child component has been mounted");
//     } 

//     componentWillUnmount(){
//         console.log("This Child component will be unmounted")
//     }

//      render() {
//          console.log("Child rendered....")
//          return( 
//              <div> 
//                  <h3> Hello I'm from the Child component !</h3>
//              </div>
//          );
//      }
// }
// // -----------------------  END -------------------------


















// // (24) .... Context Api in React js ....
// // ----------------- START -----------------
// import React, {Component} from 'react';
// import GrandChild from './grandChild.js'; 
// // ....You'll have to access the context like below if you create context not in seperate file name context.js
// // import {myContext} from "./student.js";

// export default class Child extends Component{
//     render() {
//         return (
//             <div>
//                 <h1> Hey It's me Child Component</h1>
//                 <GrandChild />
//             </div>
//         );
//     }
// }
// // -------------------- END ----------------
















// // (25) .... Context Api in React js ....
// // ----------------- START -----------------
// import React, {Component} from 'react';
// import GrandChild from './grandChild.js'; 
// // ....You'll have to access the context like below if you create context not in seperate file name context.js
// // import {myContext} from "./student.js";

// export default class Child extends Component{
//     render() {
//         return (
//             <div>
//                 <h1> Hey It's me Child Component</h1>
//                 <GrandChild />
//             </div>
//         );
//     }
// }
// // -------------------- END ----------------




















// (26).... Higher Order Function in React Js ....
// ----------------------- START -------------------


// ---------------------- END ----------------------
