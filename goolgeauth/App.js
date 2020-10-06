import React, { useState, useEffect } from 'react';
import { View, Text } from 'react-native';

function App() {
  useEffect(()=>{

    fetch('https://api.covid19api.com/').then(res=>{res.json()}).then((data)=>{console.log(data)})
  
  })
  
return (
<View>



</View>

    );
}

export default App