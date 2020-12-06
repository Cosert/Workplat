import kotlin.math.* ; 

private fun rd() = readLine()!!; private fun rds() = readLine()!!.split(" "); private fun rdi() = readLine()!!.toInt(); private fun rdl() = readLine()!!.toLong(); private fun rdd() = readLine()!!.toDouble(); private fun rdari() = readLine()!!.split(" ").map{it.toInt()} ; private fun rdarl() = readLine()!!.split(" ").map{it.toLong()} ; private fun rdard() = readLine()!!.split(" ").map{it.toDouble()} ; 

fun main() { for(i in 1..rdi()) solve() } 

fun solve() { 
    var n=rdl(); val li=rdarl().toMutableList()
    li.sort()
    var mx:Long=0; var cnt:Long=0; var ans:Long=0
    for(i in li) { 
        if(i!=mx) { 
            n-=cnt
            cnt=1
            mx=i
            if(ans<mx*n) ans=mx*n 
        } 
        else cnt++
    } 
    println(ans)
} 

