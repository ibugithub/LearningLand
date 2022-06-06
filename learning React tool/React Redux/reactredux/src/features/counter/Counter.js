import React, { useState } from 'react';
import { useSelector, useDispatch } from 'react-redux';
import { decrement, increment, incrementByAmount } from './CounterSlice';

function Counter() {
    // // Expected an assignment or function call and instead saw an expression 
    // const count = useSelector((state) => {state.counter.value})

    const count = useSelector((state) => {return state.counter.value})
    const textColor = useSelector((state)=> {return state.theme.color})
    const dispatch = useDispatch()
    return (

            <div>
                <button className="button" onClick={() => {dispatch(decrement())}}> - </button>
                <span className="value" style={{color:textColor}}>Count: {count} </span>

                <button className="button" onClick={() => {dispatch(increment())}}> + </button> <br/> <br/> <br/>

            </div>
    );
}
export default Counter;


