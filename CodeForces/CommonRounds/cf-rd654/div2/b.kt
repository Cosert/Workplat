fun main() { 
    repeat(readLine()!!.toInt()) { 
        var (n, x)=readLine()!!.split(" ").map{it.toLong()}
        if(n<=1) println(1)
        else { 
            var ans:Long=1; ans-=1
            if(n<=x) x=n-1; ans=1
            println(ans+((x+1)*x)/2)
        } 
    } 
} 
