import kotlin.math.*

private fun rd() = readLine()!!
private fun rds() = readLine()!!.split(" ")
private fun rdi() = readLine()!!.toInt()
private fun rdl() = readLine()!!.toLong()
private fun rdd() = readLine()!!.toDouble()
private fun rdari() = readLine()!!.split(" ").map{it.toInt()} 
private fun rdarl() = readLine()!!.split(" ").map{it.toLong()} 
private fun rdard() = readLine()!!.split(" ").map{it.toDouble()} 

fun main() { 
    repeat(rdi()) { 
        solve()
    } 
} 

fun solve() { 
    val (n, m)=rdari()
    val g=mutableListOf(mutableListOf(0))
    repeat(n) { 
        val s=rd()
        val t=mutableListOf(0)
        for(i in s) t.add(i.toInt()-'0'.toInt())
        g.add(t)
    } 
    
    val ans=mutableListOf(0); ans.removeAt(0)
    for(i in 1..n-1) for(j in 1..m-1) { 
        val t=mutableListOf(mutableListOf(0), mutableListOf(0))
        t[]
    } 
} 
