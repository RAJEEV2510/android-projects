import React ,{useState} from 'react';
import { View, Text,StatusBar,TouchableOpacity,KeyboardAvoidingView} from 'react-native';
import  SignupScreen from './SignupScreen'
import { TextInput,Button } from 'react-native-paper';

const LoginScreen=(props)=>{

    const [email,setEmail]=useState('')
    const [password,setPassword]=useState('')

    return (<>
   <KeyboardAvoidingView behavior="position">
      <View>
<StatusBar backgroundColor="blue" barStyle='light-content'></StatusBar>   
<Text style={{color:'black',fontSize:24,textAlign:'center',fontWeight:'bold',marginTop:50}}>Welcome To </Text>
     
      <Text style={{fontSize:24,fontWeight:'bold',textAlign:'center',color:'blue'}}>Signin </Text>
      <View style={{width:'100%',height:5,backgroundColor:'blue',marginTop:10}}>
      </View>
      <View style={{marginTop:40,marginBottom:60}}> 
  <View>
      <TextInput   mode="outlined"  label="Email"  placeholder="Email"
      style={{width:'90%',
      marginLeft:20}}
      value={email} 
      onChangeText={(text)=>{setEmail(text)}}
      ></TextInput>
      </View>
      <View>
      <TextInput mode="outlined"  label="Pasword" style={{marginTop:30,width:'90%',
   marginLeft:20
    }} value={password} placeholder="Password"   onChangeText={(text)=>{setPassword(text)}}></TextInput>
      </View>
      </View>
      <Button style={{backgroundColor:"blue",color:'green',marginBottom:30,width:"90%",
    marginLeft:20
    }} >
      <Text style={{color:"white"}}>Login</Text>
     </Button>
<TouchableOpacity >

<Text
onPress={()=>{props.navigation.navigate('Signup')}}
style={{fontSize:20,fontWeight:'bold',textAlign:'center'}}>Don't have An Account?</Text>
</TouchableOpacity>
      

      </View>
      </KeyboardAvoidingView>     
      </>)
  }



export default LoginScreen;
