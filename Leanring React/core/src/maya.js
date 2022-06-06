// // (26).... Higher Order Function in React Js ....
// // ----------------------- START -------------------
// import React, { Component } from 'react';
// import SpecialGun from './withArms';

// class Maya extends Component {
//     state = {
//         gunShots: 0
//     }
//     gunShotHandler = () => {
//         this.setState({ gunShots: this.state.gunShots + 1 })
//     }
//     render() {
//         return (
//             <div>
//                 {/*...... Normally the props common won't work here coz it will be passed to the Higher order Component withArms not here  So I've destructure this props in the HOC withArms so now i can access the props....*/}

//                 <h3>{this.props.common}</h3> 
//                 <h3 onMouseOver={this.gunShotHandler}> Maya's gunshots is {this.state.gunShots} </h3> <br/>
//                 <h3> Special Gun AWM has been added to Maya</h3>
//                 <h3 onMouseOver={this.props.shotHandler}>The Gunshot of Maya's AWM is {this.props.gunShots}</h3>
//             </div>
//         );
//     }
// }
// export default SpecialGun(Maya, 20);
// // ---------------------- END ----------------------








