
// // (7)....MOUNTING IN REACT JS....
// // <------------------ START------------------->
// import React, { Component } from "react"

// export default class GrandChild extends Component{
//     componentDidMount() {
//         // Getting the data from server and set it to the state will be done here in this method
//         console.log("ComponentDidMount has been called from Grandhild")
//     }
//     render() {
//         console.log("Render Method form Grandchild has been called")
//         return(
//             <div>
//                 <h3> Hello It's me your GrandChild </h3>
//             </div>
//         )
//     }
// }
// // <------------------ END ------------------->





















// // (24) .... Context Api in React js ....
// // ----------------- START -----------------
// import React, {Component} from 'react';

// // ....You'll have to access the context like below if you create context not in seperate file name context.js
// // import { myContext } from './student';

// import { Consumer } from './context';
// export default class GrandChild extends Component{
//     render() {
//         return (
//             <div>
//                 <h1> Hey It's me Grandchild Component</h1>
//                 <h2> The state is {this.props.childName}</h2>
//                 <Consumer>
//                     { ({info, infoChanger}) => (                     
//                      <div>
//                          <h4>Name : {info.name}</h4>
//                          <h4>City: {info.city}</h4>
//                          <h4>Age : {info.age}</h4>
//                          <button onClick={infoChanger}>click</button>
//                      </div>
//                     )
//                     }
//                 </Consumer>
//             </div>
//         );
//     }
// }
// // -------------------- END ----------------





















// // (25) .... Context Api with context type in React js ....
// // ----------------- START -----------------
// import React, { Component } from 'react';
// import { myContext } from './context.js';

// export default class GrandChild extends Component {
//     static contextType = myContext;

//     state = {
//         name: this.context.info.name,
//         city: this.context.info.city,
//     }
//     componentDidMount() {
//         console.log("componentDidMount has been called")
//     }
//     render() {
//         console.log(this.context)
//         return (
//             <div>
//                 <h1> Hey It's me Grandchild Component</h1>
//                 <h2> The state is {this.props.childName}</h2>
//                 <h4>Name : {this.context.info.name}</h4>
//                 <h4>City: {this.context.info.city}</h4>
//                 <h4>Age : {this.context.info.age}</h4>
//                 <button onClick={this.context.infoChanger}>click</button> <br/> <br/> 

//                 <h4> now here the data will come from the state</h4>
//                 <h5> The name is {this.state.name}</h5> 
//                 <h5> The city is {this.state.city}</h5> 
//             </div>
//         );
//     }
// }
// // -------------------- END ----------------




















