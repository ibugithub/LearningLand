// // (27) ..... Error boundaries ..... 
// // --------------------- START ----------------------- 
// import React, {Component} from 'react';

// export default class Error extends Component{
//     state = {
//         hasError : false 
//     }
//     static getDerivedStateFromError(error){
//        return {hasError : true}
//     }
//     componentDidCatch (error, info){
//         console.log("The Error is ", error)
//         console.log("The info is", info)
//     }
//     render() {
//         if(this.state.hasError){
//             return <h3>Error: Image not Found</h3>;
//         }
//         return this.props.children;
//     }
// }
// // ----------------------- END -----------------------