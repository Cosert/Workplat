fun main() { repeat(readLine()!!.toInt()) { solve() } } 

private fun solve() { 
    val n=readLine()!!.toInt(); var ans:Int=n/4
    if(n%4>0) ans++
    for(i in 1..(n-ans)) print(9)
    for(i in 1..ans) print(8)
    println("")
} 
