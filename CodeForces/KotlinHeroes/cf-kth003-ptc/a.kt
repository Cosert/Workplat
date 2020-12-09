import kotlin.math.* ; 
private fun rd() = readLine()!!; private fun rds() = readLine()!!.split(" "); private fun rdi() = readLine()!!.toInt(); private fun rdl() = readLine()!!.toLong(); private fun rdd() = readLine()!!.toDouble(); private fun rdari() = readLine()!!.split(" ").map{it.toInt()} ; private fun rdarl() = readLine()!!.split(" ").map{it.toLong()} ; private fun rdard() = readLine()!!.split(" ").map{it.toDouble()} ; 
var rla:String=""
val CASE:Int=0
fun main() { 
    
    while(true) { 
        var rdlin=readLine(); if(rdlin==null) break; if(rdlin=="") continue; rla=rdlin.toString()
        var cases:Int=1; if(CASE==1) cases=rla.toInt()
        
        repeat(cases) { 
            
            solve(); 
            
        }
        
    } 
    
} 



fun solve() { 
    val li=rla.split(" ").map{it.toInt()}.toMutableList()
    li.sort()
    println(li)
} 

