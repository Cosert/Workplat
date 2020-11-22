import kotlin.math.*

private fun rd() = readLine()!!; private fun rds() = readLine()!!.split(" "); private fun rdi() = readLine()!!.toInt(); private fun rdl() = readLine()!!.toLong(); private fun rdd() = readLine()!!.toDouble(); private fun rdari() = readLine()!!.split(" ").map{it.toInt()} ; private fun rdarl() = readLine()!!.split(" ").map{it.toLong()} ; private fun rdard() = readLine()!!.split(" ").map{it.toDouble()} 

fun main() { 
    var (n, m)=rdarl()
    if(m+1<n) println("No")
    else if(m+1==n) println("Yes")
    else { 
        var flag:Boolean=true; var i:Long=1
        
        while(i*i<=m) { 
            if(m%i==0.toLong() && i+m/i==n) { 
                println("Yes")
                flag=false
                break
            } 
            i++
        } 
        if(flag) println("No")
    } 
} 

