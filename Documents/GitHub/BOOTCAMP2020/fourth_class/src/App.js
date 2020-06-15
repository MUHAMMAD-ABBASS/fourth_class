import React,{useState} from 'react';
import {Message} from './Message.js';
import './App.css';

export default function App() {
  let [count, setCount]=useState(0);
  let [isMorning, setMorning]=useState(true);

  return (

    <div className={`box ${isMorning ? 'daylight' :''}`}>

  <h1> Day time = {isMorning ? 'Sun Rise': 'Sun Set'}</h1>
     <Message counter={count}/>
     <br/>
     
    <button onClick={()=> setCount(++count)}> 
     update coutern
    </button>
    
    <button onClick={()=>setMorning(!isMorning)}>Modify day</button>
  

    </div>
  );
}


