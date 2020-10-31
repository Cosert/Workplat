fun main() { 
    repeat(readLine()!!.toInt()) { 
        val (n, x)=readLine()!!.split(" ").map{it.toInt()} 
        if(n<=2) println(1)
        else println((n-3)/x+2)
    } 
} 
