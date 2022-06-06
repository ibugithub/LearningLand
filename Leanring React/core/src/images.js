// (27) ..... Error boundaries ..... 
// --------------------- START ----------------------- 
import React, {Component} from 'react';

export default class Images extends Component{
    render(){
        if (this.props.img === "" | this.props.img === "nopic"){
            throw new Error("This images hasn't found")
        }
        return <img src={this.props.img} alt="Critical moment of life" width="90%"/>;
    }
}
// ----------------------- END -----------------------