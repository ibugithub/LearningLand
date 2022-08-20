import './App.css';
import { useState, useEffect } from 'react';
import axios from 'axios';
function App() {
  const [students, setStudent] = useState([]) 
  useEffect(() => {
    async function getAllStudent(){
      try{ 
        const students = await axios.get("http://127.0.0.1:8000/")
        console.log('The students data is', students.data) 
        setStudent(students.data)
      } 
      catch (error){
        console.log('the error is ', error)
      }
    } 
    getAllStudent()
  }, []);
  return (
    <div className="App">
      <h1>Connect React JS to Django </h1>
      <h3>The student data is </h3> 
      {
        students.map((student, i) => {
          return (
            <h2 key={i}> {student.Name}  {student.Email}</h2>
          )
        })
      }
    </div>
  );
}
export default App;
