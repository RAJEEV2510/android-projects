import React from 'react';
import { View, Text,StatusBar,TouchableOpacity,KeyboardAvoidingView} from 'react-native';
import { TextInput,Button } from 'react-native-paper';
import Loading from './Component/Loading';
import LoginScreen from './Component/LoginScreen';
import SignupScreen  from './Component/SignupScreen'
import { NavigationContainer } from '@react-navigation/native';
import { createStackNavigator } from '@react-navigation/stack';
import Home from './Component/Home'
const Stack = createStackNavigator();
const App=()=>{
    return (<>
    

      <NavigationContainer>
      <Stack.Navigator initialRouteName="Login" >
        <Stack.Screen name="Login" component={LoginScreen} />
        <Stack.Screen name="Signup" component={SignupScreen} />
      </Stack.Navigator>
    </NavigationContainer>

      {/*<SignupScreen></SignupScreen>*/}
      {/*<LoginScreen></LoginScreen>*/}
      {/*<Loading></Loading>*/}
      {/*<Home></Home>*/}

    
        </>)
  
}


export default App;
