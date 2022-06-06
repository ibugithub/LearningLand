import React, {Component} from 'react';

export default class StrictMode extends Component{
    componentWillMount(){
        console.log("This Component will Mount")
    }
    render() {
        return(
            <h3>Going to learn the strict mode</h3>
        );
    }
}