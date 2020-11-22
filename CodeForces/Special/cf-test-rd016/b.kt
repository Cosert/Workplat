fun main() { 
    repeat(readLine()!!.toInt()) { 
        val (a, b)=readLine()!!.split(" ").map{it.toInt()}
        val (c, d)=readLine()!!.split(" ").map{it.toInt()}
        if(a!=c && a!=d && b!=c && b!=d) println("No")
        else if(a==c && b+d==a) println("Yes")
        else if(a==d && b+c==a) println("Yes")
        else if(b==c && a+d==b) println("Yes")
        else if(b==d && a+c==b) println("Yes")
        else println("No")
    } 
} 
