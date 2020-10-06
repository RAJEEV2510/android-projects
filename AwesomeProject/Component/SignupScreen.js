import React,{useState} from 'react';
import { View, Text,StatusBar,TouchableOpacity,KeyboardAvoidingView} from 'react-native';
import { TextInput,Button } from 'react-native-paper';
const SignupScreen=(props)=>{
    
    const [email,setEmail]=useState('')
    const [password,setPassword]=useState('')

    const sendCred=()=>{

        console.log(email,password)
        fetch('https://api.covid19api.com/').then(res=>{return res.json()}).then(data=>console.log(data))
    }
    return (<>
<KeyboardAvoidingView behavior="position">
      <View>
<StatusBar backgroundColor="blue" barStyle='light-content'></StatusBar>   
  <Text style={{color:'black',fontSize:24,textAlign:'center',fontWeight:'bold',marginTop:50}}>Welcome To </Text>
     
      <Text style={{fontSize:24,fontWeight:'bold',textAlign:'center',color:'blue'}}>Signup </Text>
      <View style={{width:'100%',height:5,backgroundColor:'blue',marginTop:10}}>
      </View>
      <View style={{marginTop:40,marginBottom:60}}> 
  <View>
      <TextInput   mode="outlined"  label="Email"  placeholder="Email"
      style={{width:'90%', 
      marginLeft:20}} value={email}
      onChangeText={(text)=>{setEmail(text)}}></TextInput>
      </View>
      <View>
      <TextInput mode="outlined"  label="Pasword" style={{marginTop:30,width:'90%',
       marginLeft:20
    }} value={password} placeholder="Password"
    onChangeText={(text)=>{setPassword(text)}}
    ></TextInput>

      </View>
      </View>
      <Button style={{backgroundColor:"blue",color:'green',marginBottom:30,width:"90%",
    marginLeft:20
    }} onPress={()=>{

        sendCred()
    }} >
      <Text style={{color:"white"}}>Signup</Text>
      
     </Button>
<TouchableOpacity>

<Text style={{fontSize:20,fontWeight:'bold',textAlign:'center'}}
onPress={()=>{props.navigation.navigate('Login')}}
>already have An Account?</Text>
</TouchableOpacity>
</View>
</KeyboardAvoidingView>     
      </>)
}
export default SignupScreen;
