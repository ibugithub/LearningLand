import { useState } from 'react';
import { useDispatch } from 'react-redux'; 
import { colorChanger } from './ThemeSlicer.js';

const Theme = () => {
    const [color, setColor] = useState('white');
    const dispatch = useDispatch();
    return (
        <>
        <input type="text" className="textbook" onChange={(e)=> {setColor(e.target.value)}}/>
        <button onClick={()=> {dispatch(colorChanger(color))}}>Change Text Color</button> <br/>
        <h4>{color}</h4>

        </>
    );
} 

export default Theme;