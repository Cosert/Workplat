import kotlin.math.*

private fun rd() = readLine()!!; private fun rds() = readLine()!!.split(" "); private fun rdi() = readLine()!!.toInt(); private fun rdl() = readLine()!!.toLong(); private fun rdd() = readLine()!!.toDouble(); private fun rdari() = readLine()!!.split(" ").map{it.toInt()} ; private fun rdarl() = readLine()!!.split(" ").map{it.toLong()} ; private fun rdard() = readLine()!!.split(" ").map{it.toDouble()} 

fun main() { 
    val n=rdi(); var ans=0
    val s=rd(); var stk=mutableListOf<Char>()
    for(i in s) { 
        if(ans>=2) if(i=='x' && stk[ans-1]=='o' && stk[ans-2]=='f') { 
            stk.removeAt(ans-1); stk.removeAt(ans-2)
            ans-=2
            continue
        } 
        stk.add(i)
        ans++
    } 
    println(ans)
} 

