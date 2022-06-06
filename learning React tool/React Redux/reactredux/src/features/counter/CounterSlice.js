import { createSlice } from '@reduxjs/toolkit';

const  initialState = {
    value : 4,
}

export const counterSlice  = createSlice({
    name : 'counter',
    initialState, 
    reducers : {
        increment : (state) => {
            state.value += 1
        },

        decrement : (state) => {
            state.value -= 1
        },

        incrementByAmount : (state, val) => {
            state.value += val.payload
        },
    },

}) 

export const { increment, decrement, incrementByAmount } = counterSlice.actions
export default counterSlice.reducer