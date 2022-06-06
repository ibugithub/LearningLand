import {createSlice} from '@reduxjs/toolkit';

const initialState = {
    color : 'white'
}

export const ThemeSlicer = createSlice({
    name : "colorChangerName",
    initialState,
    reducers : {
        colorChanger : (state, currentColor) =>{
            state.color = currentColor.payload
        }
    }
})

export default ThemeSlicer.reducer
export const { colorChanger } = ThemeSlicer.actions
