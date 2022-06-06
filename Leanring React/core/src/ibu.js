// // (26).... Higher Order Function in React Js ....
// // ----------------------- START -------------------
// import React, { Component } from 'react';
// import SpecialGun from "./withArms"; 

// class Ibu extends Component{
//     state = {
//         gunShots : 0
//     }
//     gunShotHandler = () =>{
//         this.setState({gunShots: this.state.gunShots + 1})
//     }
//     render () 
//     {
//         return(
//             <div>
//                 {/*...... Normally the props common won't work here coz it will be passed to the Higher order Component withArms not here  So I've destructure this props in the HOC withArms so now i can access the props....*/}
//                 <h3>{this.props.common}</h3> 
                
//                 <h3 onMouseOver={this.gunShotHandler}> ibu's gunshots is {this.state.gunShots} </h3> <br/>

//                 <h3> The Special Gun M416 has been added to ibu</h3>
//                 <h3 onMouseOver={this.props.shotHandler}>ibu's M416's gunshot is {this.props.gunShots}</h3>
//             </div>
//         );
//     }
// }
// export default SpecialGun(Ibu, 10);
// // ---------------------- END ----------------------


