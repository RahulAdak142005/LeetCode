const express=require('express');
const userRouter=require('./routes/user.routes')
const dotenv=require('dotenv')
dotenv.config();

const connectToDB=require('./config/db');
connectToDB();

const app=express();

app.set('view engine','ejs')    //if the line is written then a folder name "views" can be created

app.use(express.json());
app.use(express.urlencoded({extended:true}))

app.use('/user',userRouter)
/*app.get('/',(req,res)=>{    
    res.render("index")     //It called the html file when '/' get
})*/

app.listen(3000,()=>{
    console.log('Server is running on the port 3000');
})