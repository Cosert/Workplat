fun main() { 
    repeat(readLine()!!.toInt()) { 
        val (n, m)=readLine()!!.split(" ").map{it.toInt()}
        var flag:Boolean=false
        for(i in 1..n) { 
            val (a, b)=readLine()!!.split(" ").map{it.toInt()}
            val (c, d)=readLine()!!.split(" ").map{it.toInt()}
            if(b==c && m%2==0) flag=true
        } 
        if(flag==false) println("NO")
        else println("YES")
    } 
} 
