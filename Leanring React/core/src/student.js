// Function Base React Component (Props in React js)------>>

// import React, { Component } from "react" ;
// import PropType from "prop-types";

// const Student = props => {

//     return (

//         <div>

//             <h1>Hellow</h1>
//             <h2>Your name is : {props.name}</h2>
//             <h2> You Live in : {props.city}</h2>
//             <h2>Your Weight is {props.weight}</h2>

//         </div>

//     );
// };

// (Props in React js) Class Based React Component------>>

// class Student extends Component {
//     render(){
//         return (
//             <div>
//                 <h1>Hello !</h1>
//                 <h2>Your name is: {this.props.name}</h2>
//                 <h2>Your city is: {this.props.city}</h2> 
//                 <h2>Your Weight is: {this.props.weight}</h2>
//             </div>
//         )
//     }
// } 









// propType check
// <---------------------START------------------>

// Student.propTypes = {
//     name : PropType.string.isRequired,
//     city : PropType.string,
//     weight : PropType.number
// }

// Student.defaultProps = {
//     name : "ibrahim"
// }
// <-------------END------------>








// (1)....Children in Jsx....
// <-----------------start--------------->

// import React, { Component } from "react" 

// This as function based
// const Student = props => {

//     return (
//         <h1>
//             Hello {props.children}
//         </h1>
//     )

// }

// This is as class Based
// class Student extends Component {
//     render()
//     {    
//         return (
//             <h1>Hello {this.props.children} </h1>
//         )
//     }
// }

// export default Student;
// <------------------end--------------->









// (2).... State in React Js ....
// <-------------------START------------------->

// import React, { Component } from "react" 

// class Student extends Component {
//     state = {
//         name: this.props.name,
//         city: this.props.city
//     }
//     render () {
//         return (
//         <div>
//             <h1>Hello My name is {this.state.name}</h1> 
//             <h2>And My current is {this.state.city}</h2>
//         </div>

//         );
//     }
// }
// export default Student;

// State in React.js(with constructor)

// class Student extends Component{
//     constructor(props){
//         super(props);
//         this.state = {
//             name : "Ibrahim",
//             city : "Dhaka"
//         };
//     }
//     render(){
//         return (
//             <div>
//                 <h1>Hello I'm {this.state.name}</h1>
//                 <h2>My city is {this.state.city} </h2>
//             </div>
//         )
//     }
// }
// export default Student;
// <-----------------END------------->











//  (3).... Event Handling in React js BY class component ....
// <------------------START--------------->

// import { Component } from "react"; 

// class Student extends Component {
// ...You can't access this objects in normal function...   
// handleClick() {
//     console.log("This buton has been clicked, your name is" + this.state.name)
// }


//...You'll have to use constructor to access this object in normal function...
// constructor(props) {
//     super(props)
//     this.state = {
//         name : "ibrahim",
//         roll : this.props.roll
//     } 
//     this.handleClick = this.handleClick.bind(this)
// }
//...So now you can access the this object in normal function...
// handleClick() {
//     console.log(" This button has been clicked your name is", this.state.name)    

// }

// ...Defining state without constructor...
// state = {
//     name : "ibrahim",
//     roll : this.props.roll
// }

//...Accessing the this object by using arrow function is the easist way...
//     const handleClick = () =>{
//         console.log("This button has been clicked , Your name is " + this.state.name + " Your roll is " + this.state.roll)

//     }

//     render() {
//         return( 
//             <div>
//                 <h1>Hello {this.state.name} </h1> <br/>
//                 <h2>Your roll is {this.state.roll} </h2>
//                 <button onClick={this.handleClick}> Click me</button>
//             </div>
//         )
//     }

// }
// export default Student
// <------------------ END ------------------->










// (4)....EVENT HANDLING IN REACT JS IN FUNCTION BY FUNCTION COMPONENT....
// <------------------ START ------------------->

// import React  from "react";
// function Student(props){
// ...BY NORMAL FUNCTION...
// function handleClick() {
//     console.log("button has been clicked " + props.roll)
// }

// ...BY ARROW FUNCTION...
// const handleClick = () => {
//     console.log("button has been clicked, the roll is " + props.roll)
// }
// ...PREVENTING THE DEFAULT BEHAVIOUR OF ANY EVENT...
//     function preventd(e) {
//         e.preventDefault();
//     }
//     return (
//         <div>
//             <h1> Hello {props.name} </h1> 
//             <button onClick={handleClick}>click Me</button> <br/> <br/>
//             <a onClick={preventd} href="http://www.google.com">google</a>
//         </div>

//     )
// }

// export default Student;
// <------------------ END ------------------->















// (5).... UPDATING STATE IN REACT JS ....
// <------------------ START ----------------->

// import React, { Component } from 'react'; 

// class Student extends Component {
//     constructor(props) {
//         super(props);
//         this.state = {
//             name : "ibarhim",
//             city: this.props.city 
//         }
//         this.handleClick = this.handleClick.bind(this)
//     };

//     handleClick() {
// ... 1st form of state which accepts objects as arguments
// this.setState({name: "ibu", city : "khulna" })

// ... 2nd form of state which accepts function as arguments 
// this.setState(function(state, props){
//     console.log("This is the state ", state) 
//     console.log("This is the props ", props)
// })

// ... 2nd form of state which accepts function as arguments in Arrow FUNCTION  
// ... IN THIS setState PARAMITER NAME DOESN'T MATTER SEE I'VE USED ibu INSTEAD OF state AND nibu INSTEAD OF props
//     this.setState((ibu, nibu) => {
//         console.log("This is the state ", ibu) 
//         console.log("This is the props ", nibu)
//     })
// }

//     render() {
//         return(
//             <div>
//                 <h1>Hello {this.state.name}</h1> 
//                 <h2>My city is {this.state.city}</h2> <br/> <br/>
//                 <button onClick={this.handleClick} >click me</button>
//             </div>
//         )
//     }
// }
// export default Student;


















// // (6) .... PASSING ARGUMENTS TO EVENT HANDLER IN REACT JS
// // <------------------START-------------------->

// import React, { Component } from "react"

// class Student extends Component {
//     constructor() {
//         super();
//         this.state = {
//             name : "ibarhim",
//             id : 1749
//         }

//     };

//     handleClick = (id, e) =>{
//         console.log("Deleted User Id is " + id)
//         console.log("The event obj is ", e)
//     }

//     // ...PASSING ARGUMENTS TO THE EVENT HANDLER BY CALLING ANOTHER FUNCTION
//     // handleClickArg = (e) => {
//     //     this.handleClick(this.state.id, e)
//     // }

//     render() {
//         return (
//             <div>
//                 <h1>Hello world</h1>
//                 {/* ...PASSING ARGUMENTS TO THE EVENT HANDLER BY CALLING ANOTHER FUNCTION */}
//                 {/* <button onClick={this.handleClickArg}> Delete </button> */}

//                 {/* ...DIRECTLY PASSING ARGUMENTS TO THE EVENT HANDLER WITHOUT CALLING ANOTHER FUNCTION */}
//                 {/* <button onClick={(e)=> {this.handleClick(this.state.id, e); }}>Delete</button> */}

//                 {/* ...DIRECTLY PASSING ARGUMENTS TO THE EVENT HANDLER BY BIND METHOD WITHOUT CALLING ANOTHER FUNCTION */}
//                 {/* ... EVENT OBJECT --> e WILL AUTOMATICALLY COME IN THE BIND METHOD SO YOU WON'T HAVE TO EXPLICITLY PASS IT TO THE BIND METHOD AS PARAMETER */}
//                 <button onClick={this.handleClick.bind(this, this.state.id)}> Delete</button>

//             </div>
//         )
//     }
// }
// export default Student
// // <----------------------------- END -------------------------->

















// // (7)....MOUNTING IN REACT JS....
// // <------------------ START------------------->
// import React, { Component } from "react"; 
// import Child from "./child"

// export default class Student extends Component{
//     constructor(props){
//         super(props);
//         console.log("Constructor has been called..")
//         console.log(props)
//         this.state  = {
//             country : "bangladash"
//         }
//     } 

//     static getDerivedStateFromProps(props, state){
//         console.log("get Derived State From Props method called");
//         console.log("This is the props", props);
//         console.log("This is the states", state) 
//         return null;
//     }

//     componentDidMount() {
//         // Getting the data from server and set it to the state will be done here in this method
//         console.log("ComponentDidMount has been called from Student")
//     }

//     render(){
//         console.log("Render method from Father method has been called")
//         return(
//             <div>
//                 <h1> <Child name="ibrahim"/> </h1>
//             </div>
//         );
//     }
// }
// // <------------------ END ------------------->


















// // (8)....UPDAING IN REACT JS....
// // <------------------ START------------------->
// import React, { Component } from "react";
// import Child from "./child.js"
// export default class Student extends Component{

//     constructor(props) {
//         console.log("The constructor from student has been called")
//         super(props);
//         this.state = 
//         {
//             name : "ibrahim",
//             age : 12
//         }
//         console.log("The State before clicking haldleclik is", this.state.name)
//     }

//     handleClick = () => {
//         console.log("handleClick button has been clicked")
//         this.setState({name : 'Rakib'})
//         this.setState({age : this.state.age + 2})
//         console.log("The state is after clicking handleClick is", this.state.name)
//     }

//     render() {
//         console.log("The render method from Student has been called")

//         return(
//             <div>
//                 <h2>Hello It's me {this.state.name}</h2>
//                 <Child ChildName={this.state.name} age={this.state.age} />
//                 <button onClick={this.handleClick}> Click Me </button>
//             </div>
//         );
//     }
// }
// // <------------------ END -------------------->
















// // (9).... Unmounting in React Js ....
// // -----------------------  START -------------------------

// import React , { Component } from "react";

// export default class Student extends Component { 

//     componentDidMount() {
//         console.log("The Student component has been mounted")
//     }

//     componentWillUnmount(){
//         console.log('component unmounted')
//     }

//     render() {
//         console.log("The student has been rendered")
//          return (
//              <div>
//                  <h3> Hello world !</h3>
//              </div>
//          );
//     }
// }
// // -----------------------  END -------------------------

























// // (10).... useState hook in Reactjs ....
// // ------------------- SART -----------------------
// import React, {useState} from "react";

// function Student(){
//     const [name, changeName] = useState('ibarhim');
//     const [cityName, setCityName] = useState("Dhaka")
//     const handleClick = () =>{
//         console.log("The handle button has been clicked")
//         changeName('Ibu')
//         setCityName("Khulna")
//     }
//     return <React.Fragment>
//         <h2>Hello world! {name}</h2>
//         <h3>I live in {cityName}</h3>
//         <button   onClick= {handleClick}> click me </button>
//     </React.Fragment>
// }
// export default Student;
// //  ------------------------ END --------------------



















// // (11) .... useEffect in ReactJs ....
// // ------------------------- START ------------------------
// import React, {useState, useEffect} from 'react';

// export default function Student(){
//     const[count, setCount] = useState(0);
//     const[count1, setCount1] = useState(50);


//     function increaseHandle() {
//         setCount(count+1)
//     }
//     function decreaseHandle() {
//         setCount(count-1)
//     }
//     function doubleIncrementHandle() {
//         setCount1(count1 + 2)
//     }
//     useEffect(()=>{console.log("The useEffect has been called")}, [count1])
//     return <React.Fragment>
//         <h3> Count Up  {count} </h3>
//         <button onClick={decreaseHandle}> - </button>
//         <button onClick={increaseHandle}> + </button> <br/> <br/>
//         <h3>Double Up {count1} </h3>
//         <button onClick={doubleIncrementHandle}>+2</button>
//     </React.Fragment>
// }
// // -------------------------- END -------------------------




















// // (12) .... Custom Hooks in React js ....
// // -----------------------  START ----------------------
// import React from 'react';
// import useCustomCounter from './custom.js'

// export default function Student() {
//     const counter = useCustomCounter();
//     const counter1 = useCustomCounter();
//     return (
//         <div>
//             <h1> Count Up {counter.counter}</h1>
//             <button onClick={counter.handleIncrement}>increment</button> <br/> <br/>
//             <h3>Count Up {counter1.counter}</h3>
//             <button onClick={counter1.handleIncrement}>increment</button>
//         </div>
//     );
// }
// // ------------------------ END -----------------------



















// // (13) ..... Conditional Rendering in React js ....
// // ----------------------- START ---------------------

// // // (13.1) ...With If Statement...
// // import React, { Component } from 'react';
// // import User from './user.js';
// // import Guest from './guest.js';

// // export default class Student extends Component {

// //     render() {
// //         const isRegister = this.props.isRegister
// //         if (isRegister) {
// //             return (
// //                 <div>
// //                     <User />
// //                 </div>
// //             );
// //         }

// //         return (
// //             <div>
// //                 <Guest />
// //             </div>
// //         );
// //     }
// // }


// // // (13.2) ...With true && expression Statement...
// // import React, { Component } from 'react';
// // import PrimeUser from './user.js';

// // export default class PrimeStudent extends Component {

// //     render() {
// //         const isPrime = this.props.isPrime
// //         console.log("The isPrime is", isPrime)

// //         return(
// //             <React.Fragment>
// //                 <h1>Welcome User</h1>
// //                 {isPrime && <PrimeUser />} <br/> <br/>
// //             </React.Fragment>
// //         )
// //     }
// // }



// // // (13.3) ...With if and else Statement...
// // import React, { Component } from 'react';
// // import Guest from './guest.js';
// // import User from './user.js';

// // export default class Student extends Component {
// //     state = {
// //         isLoggedIn: true,
// //         name: "ibrahim",
// //         age: 23
// //     }
// //     loginClicked = () => {
// //         console.log("loging button has been clicked")
// //         this.setState({ isLoggedIn: true })
// //     }
// //     logoutClicked = () => {
// //         console.log("The logout button has been clicked")
// //         this.setState({ isLoggedIn: false })
// //     }

// //     render() {
// //         let consumer;
// //         if (this.state.isLoggedIn) {
// //             consumer = <User clickedData={this.logoutClicked} />
// //         }
// //         else {
// //              consumer = <Guest clickedData={this.loginClicked} />
// //         }
// //        return <div>{consumer}</div>;
// //     }
// // }



// // // (13.4) ...Inline if and else Statement with conditional operator...
// // import React, { Component } from 'react';
// // import Guest from './guest.js';
// // import User from './user.js';

// // export default class Student extends Component {
// //     state = {
// //         isLoggedIn: true,
// //         name: "ibrahim",
// //         age: 23
// //     }
// //     loginClicked = () => {
// //         console.log("loging button has been clicked")
// //         this.setState({ isLoggedIn: true })
// //     }
// //     logoutClicked = () => {
// //         console.log("The logout button has been clicked")
// //         this.setState({ isLoggedIn: false })
// //     }
// //     render() {
// //        return (
// //             <div>
// //                 {this.state.isLoggedIn ? (<User clickedData={this.logoutClicked}/>) : (<Guest clickedData={this.loginClicked}/>)}
// //             </div>
// //        );
// //     }
// // }



// // // (13.5) ... IIFE conditional operator...
// // import React, { Component } from 'react';
// // import Guest from './guest.js';
// // import User from './user.js';

// // export default class Student extends Component {
// //     state = {
// //         isLoggedIn: true,
// //         name: "ibrahim",
// //         age: 23
// //     }
// //     loginClicked = () => {
// //         console.log("loging button has been clicked")
// //         this.setState({ isLoggedIn: true })
// //     }
// //     logoutClicked = () => {
// //         console.log("The logout button has been clicked")
// //         this.setState({ isLoggedIn: false })
// //     }
// //     render() {
// //         return (
// //             <div>
// //                 {
// //                     (
// //                         () => {
// //                             if (this.state.isLoggedIn) {
// //                                 return <User clickedData={this.logoutClicked} />
// //                             }
// //                             else {
// //                                 return <Guest clickedData={this.loginClicked} />
// //                             }
// //                         }
// //                     )()
// //                 }
// //             </div>
// //         );
// //     }
// // }
// // ----------------------- END ---------------------




















// // (14) .... List in React Js....
// // ------------------------ START ----------------------

// // // (14.1) ... Looping with Map function in React Js
// // import React, { Component } from 'react';

// // export default class Student extends Component {
// //     render() {
// //         const arr = [10, 20, 30, 40]
// //         const newArr = arr.map( (num) =>{
// //             console.log("The num is", num)

// //             return <li>'The element is'{num * 2}</li>
// //         });
// //         console.log("The Old Array is ", arr);
// //         console.log("The New Array is ", newArr);
// //         return (
// //             <div>
// //                 <ul>
// //                     {arr}
// //                   {newArr}
// //                 </ul>
// //             </div>
// //         );
// //     }
// // }




// // // (14.2) ... Looping with Map function in JSX in React Js ...
// // import React, { Component } from 'react';

// // export default class Student extends Component {
// //     render() {
// //         const arr = this.props.arr
// //         return (
// //             <ul>
// //                 {
// //                     arr.map( (num) => {
// //                         return <li>The Number is {num}</li>
// //                     })
// //                 }
// //             </ul>
// //         );
// //     }
// // }




// // // (14.3) ... Accessing State defining key in React Js ...
// // import React, { Component } from 'react';

// // export default class Student extends Component {
// //     state = {
// //         users : [{id:101, name:'Ibrhaim', password : "1749"}, {id : 102, name : "ibur" , password : "14355"}, {id : 103, name : "jani na", password : "13432"}] ,
// //         isActive : true
// //     }
// //     render() {
// //         console.log("The state is ", this.state.users)
// //         const user = this.state.users;
// //         return (
// //             <React.Fragment>
// //                 {/* <h1>{this.state.users[0].id}</h1> */}
// //                 {
// //                     user.map((info) =>  {
// //                         return ( 
// //                         <React.Fragment key= {info.id}>
// //                             <h3>The id is {info.id}</h3>
// //                             <h3>The name is {info.name}</h3>
// //                             <h3> The Password is {info.password}</h3>
// //                         </React.Fragment> 
// //                         );
// //                     })
// //                 }
// //             </React.Fragment>
// //         );
// //     }
// // }




// // // (14.4) ....Passing key attribut through props in React js
// // import React, { Component } from 'react';
// // import User from './user.js';

// // export default class Student extends Component {
// //     render() {
// //         const arr = this.props.number
// //         const newArr =  arr.map((num) => {
// //             // passing the key Two different ways 1-is by naming the key as 'key' as props 2-is naming the key as not key and anything but 'key' like here i named it num.
// //             return <User key={num} num={num}/>;
// //         })
// //         return (
// //             <div>
// //                 <ul>{newArr}</ul>
// //             </div>
// //         )
// //     }
// // }
// // -------------------------- END ----------------------















// // (15)Styling component with Inline css in React js
// // ----------------------------- START --------------------------
// import React, { Component } from 'react';

// export default class Student extends Component {
//     state = {
//         change: false
//     }
//     clickHandle = () => {
//         this.setState({ change: true })
//     }
//     render() {
//         const btnColoring = {
//             color: 'red',
//             backgroundColor: 'orange',
//         }
//         const btnAligning = {
//             textAlign: 'center'
//         }
//         if (this.state.change) {
//             btnColoring.backgroundColor = 'black'
//         }
//         return (
//             <h3 style={{ ...btnColoring, ...btnAligning, ...{ fontSize: '50px' } }} onClick={this.clickHandle}>Hello World</h3>
//         );
//     }
// }
// // ------------------------------- END --------------------------


















// // (16) && (16.1) ....Styling with exteernal css in React js and React css module
// // ------------------------ START -----------------------
// import React, {Component} from 'react'; 
// import "./student.css";
// import User from './user.js';
// import cssModule from './student.module.css'

// export default class Student extends Component {
//     render() {
//         let change = false
//         const styles = ['color background center']
//         console.log(styles)
//         return (
//             <React.Fragment>
//                 <h1 className="color3 background">Hello World</h1>
//                 <User rong={change ? "color" : 'color2'}/>
//                 <h3 className={styles}>The world is really beautiful</h3>
//                 <h4 className={cssModule.color}>Using React css module from student</h4>
//             </React.Fragment>
//         )
//     }
// }
// // --------------------------- END ------------------------


















// // (17) .... Usng image and other assests in  React js
// // -------------------------------- START ---------------------------
// import React, {Component} from 'react';
// import pic from './images/image1.jpg'
// import pic2 from "./image8.jpg";
// export default class Student extends Component{
//     render(){
//         return (
//         <div>
//             <img src={pic} alt="jade raymond"  width="100%"/>
//             <img src={pic2} alt= "vr" width="100%" />
//         </div>
//         );
//     }
// }
// // --------------------------------- END ---------------------------- 
















// // (18).... Using Bootstrap in React js
// // ---------------------- START ----------------------
// import React, {Component} from 'react';
// import "../node_modules/bootstrap/dist/css/bootstrap.min.css";

// export default class Student extends Component{
//     render() {
//         return( 
//             <div>
//                 <h3 className='btn btn-danger'>Hello world</h3>
//             </div>
//         );
//     }
// }
// // ------------------------- END ----------------------


















// // (19) Forms in React js
// // --------------------------- START ---------------------------
// import React, { Component } from 'react';

// export default class Student extends Component {
//     state = {
//         value: ""
//     }
//     changeHandle = (e) => {
//         console.log('element is changing')
//         this.setState({ value: e.target.value.substr(0, 10).toUpperCase()})
//         console.log("The element e is", e)
//     }
//     render() {
//         return (
//             <div>
//                 <h2> Controled by React</h2>
//                 <form>
//                     <input onChange={this.changeHandle} type="text" value={this.state.value} />
//                 </form>

//             </div>
//         );
//     }
// }
// // ---------------------------- END ----------------------------



















// // (20)..... multiple input handling in React js
// // -------------------- START -------------------
// import React, { Component } from 'react';

// export default class Student extends Component {
//     state = {
//         name: "",
//         password: ""
//     }
//     inputHandler = e =>{
//       console.log("just the wasted of time ")
//       const value = e.target.name === "name" ? e.target.value.toUpperCase().substr(0, 10) : e.target.value;
//       this.setState({[e.target.name] : value})
//     }
//     submitHandler = e =>{ 
//         e.preventDefault();
//         console.log("the target element is", e.target[2].value)
//         for (let item of e.target) {
//             console.log(item.value)
//             if (item.value === ""){
//                 return(
//                     item.value ="can't be empty"
//                 );
//             }
//         }
//     }
//     render() {
//         return (
//             <div>
//                 <form onSubmit={this.submitHandler}>
//                     <label>
//                         Name : <input name ="name"  type="text" value={this.state.name}  onChange={this.inputHandler}/>
//                     </label>
//                     <br /> <br />
//                     <label>
//                         Password : <input name="password"  type="text" value={this.state.password}  onChange={this.inputHandler}/>
//                     </label> <br/> <br />
//                     <input type='submit' value='submit' />
//                 </form>
//             </div>
//         );
//     }
// }
// // ---------------------- END -------------------
















// // (21) .... Uncontroled Component Ref in React js
// // ----------------------- START -------------------
// import React, { Component } from 'react';

// export default class Student extends Component {
//     constructor(props) {
//         super(props);
//         this.uncTextInput = React.createRef();
//         this.uncPassInput = React.createRef();
//         this.uncAddressInput = React.createRef();
//         this.uncTextArea = React.createRef();
//         this.state ={
//             textAreaValue : "",
//             textInput : ""
//         }
//     }
//     componentDidMount = () => {
//         console.log("the uncontroled text input is ", this.uncTextInput.current.name);
//         console.log("the uncontroled password Input is ", this.uncPassInput.current.name);
//         console.log("the uncontrolled address is", this.uncAddressInput.current.name);
//         this.uncTextInput.current.focus();
//     }
//     submitHandle = (e) =>{
//         e.preventDefault();
//         console.log("you have typed ", this.uncTextArea.current.value)
//         this.setState({textAreaValue : "You've typed..." + this.uncTextArea.current.value})
//     }
//     changeHandler = (e) =>{
//         this.setState({textAreaValue : this.uncTextArea.current.value})
//     }
//     render() {
//         return (
//             <React.Fragment>
//                 <form onSubmit={this.submitHandle}>
//                     Name: <input name="name" type="text" ref={this.uncTextInput} />
//                     <br /> <br />
//                     Password: <input name="password" type="text"  ref={this.uncPassInput} />
//                     <br /> <br />
//                     Address: <input name="address" type="text" ref={this.uncAddressInput} /> <br/> <br/>
//                     Write something here :<textarea onChange={this.changeHandler}  ref={this.uncTextArea} />
//                     <input type="submit" value="submit" />  
//                 </form>
//                 <h3>{this.state.textAreaValue}</h3>
//             </React.Fragment>
//         );
//     }
// }
// // ------------------------ END --------------------   

















// // (22)..... Callback refs in React js .... 
// // ------------------ START -----------------
// import React, {Component} from 'react';

// export default class Student extends Component{
//     constructor(props){
//         super(props);
//         this.backRef = null;
//         this.setBackRef = (element) =>{
//             this.backRef = element;
//         }
//     }
//     componentDidMount =() =>{
//         if(this.backRef){
//             this.backRef.focus()
//         }
//     }
//     render(){
//         return(
//             <React.Fragment>
//                  <form>
//                      Name : <input type="text" ref={this.setBackRef}/> <br /> <br />
//                      Password : <input type="text" /> <br /> <br />
//                      Address : <input type="text" /> <br/> <br />
//                      <input type="submit" value ="submit"/>
//                  </form>
//             </React.Fragment>
//         )
//     }
// }
// // ------------------------ END --------------------



















// // (23) .... Lifting up state in React js
// // -------------------- START ----------------- 
// import React, {Component} from 'react';
// import User from './user.js';
// import Guest from './guest.js';

// export default class Student extends Component{
//     state ={ 
//         name : 'ibrahim',
//         age : 23
//     }
//     clickHandler =() => {
//         this.setState({name: 'ibu'})
//         console.log("The ClickHandler has been called")
//     }
//     render() {
//         return(
//             <div>
//                 <h2>The state in Student is {this.state.name}</h2>
//                 <User name={this.state.name} userAge={this.state.age}/>
//                 <Guest name={this.state.name} />
//                 <button onClick={this.clickHandler}> Click Here</button>
//             </div>
//         );
//     }
// }
// // -------------------- END -------------------















// // (24) .... Context Api in React js ....
// // ----------------- START -----------------
// import React, { Component } from 'react';
// import Child from './child.js';

// //... You could also create context like below
// // export const myContext = React.createContext();

// import { Provider } from './context.js';
// export default class Student extends Component {
//     state = {
//         name: "ibrahim",
//         city: "dhaka",
//         age : 23
//     }
//     ageUpper = () => {
//         this.setState({age: this.state.age+2})
//     }
//     render() {
//         const contextValue = {
//             info: this.state,
//             infoChanger: this.ageUpper
//         }
//         return (
//             <div>
//                 <h1>Hey I'ts me the Student Component</h1>
//                 <Provider value={contextValue}>
//                    <Child /> 
//                 </Provider>

//             </div>
//         );
//     }
// }
// // -------------------- END ----------------



















// // (25) .... Context Api with context type in React js ....
// // ----------------- START -----------------
// import React, { Component } from 'react';
// import Child from './child.js';

// //... You could also create context like below
// // export const myContext = React.createContext();

// import { Provider } from './context.js';
// export default class Student extends Component {
//     state = {
//         name: "ibrahim",
//         city: "dhaka",
//         age : 23
//     }
//     ageUpper = () => {
//         this.setState({age: this.state.age+2})
//     }
//     render() {
//         const contextValue = {
//             info: this.state,
//             infoChanger: this.ageUpper
//         }
//         return (
//             <div>
//                 <h1>Hey I'ts me the Student Component</h1>
//                 <Provider value={contextValue}>
//                    <Child /> 
//                 </Provider>
//             </div>
//         );
//     }
// }
// // -------------------- END ----------------






















// // (26).... Higher Order Function in React Js ....
// // ----------------------- START -------------------
// import React, {Component} from 'react';
// import Ibu from './ibu.js';
// import Maya from './maya.js';

// export  default class Student extends Component{
//     state ={
//         common : "this is the common UPM9 GUN"
//     }
//     render()
//     {
//         return(
//             <div>
//                 <Ibu common={this.state.common}/> <br/> <br/> <br/> <br/>
//                 <Maya common={this.state.common}/>
//             </div>
//         );
//     }
// }
// // ---------------------- END ----------------------

















// // (27) ..... Error boundaries ..... 
// // --------------------- START ----------------------- 
// import React, { Component } from 'react';
// import Images from './images';
// import pic1 from "./images/image2.jpg";
// import pic2 from "./images/image3.jpg";
// import Error from './error';

// export default class Student extends Component {
//     render() {
//         return (
//             <div>
//                 <Error>
//                     <Images img={pic1} /> <br /> <br />
//                     <Images img={pic2} />
//                     <Images img="" />
//                 </Error>

//             </div>
//         );
//     }
// }
// // ----------------------- END -----------------------















// (28).... STRICT MODE  in React Js ....
// ----------------------- START -------------------
import React, {Component} from 'react';
import StrictMode from './strictMode.js';
export default class Student extends Component {
    render(){
        return <StrictMode />
    }
}
// ---------------------- END ----------------------