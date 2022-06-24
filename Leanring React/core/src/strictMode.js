import React, {Component} from 'react';

export default class StrictMode extends Component{
    componentWillMount(){
        console.log("This Component will Mount")
    }
    
    render() {
        var fruit = "Mango"
        var flower = fruit
        console.log(fruit === flower)
        return(
            <h3>Going to learn the strict mode</h3>
        );
    }
}