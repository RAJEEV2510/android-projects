import React from 'react';
import { View,ActivityIndicator } from 'react-native';

class Loading extends React.Component{
render()
  {
    return (<>
      <View style={{marginTop:"50%"}}>
      <ActivityIndicator size='large' color="blue"></ActivityIndicator>
      </View>
        </>)
  }
}


export default Loading;
