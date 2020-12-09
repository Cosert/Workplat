import kotlin.math.* ; 
private fun rd() = readLine()!!; private fun rds() = readLine()!!.split(" "); private fun rdi() = readLine()!!.toInt(); private fun rdl() = readLine()!!.toLong(); private fun rdd() = readLine()!!.toDouble(); private fun rdari() = readLine()!!.split(" ").map{it.toInt()} ; private fun rdarl() = readLine()!!.split(" ").map{it.toLong()} ; private fun rdard() = readLine()!!.split(" ").map{it.toDouble()} ; 
var rla:String=""
val CASE:Int=0
fun main() { 
    
    while(true) { 
        var rla=readLine(); if(rla==null) break; if(rla=="") continue; 
        var cases:Int=1; if(CASE==1) cases=rla.toInt()
        
        repeat(cases) { 
            
            solve(rla); 
            
        }
        
    } 
    
} 



fun solve(rla:String) { if(false)println(rla)
    
} 

