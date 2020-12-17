fun main() { 
    for(_tes in 1..readLine()!!.toInt() ) { 
        val s=readLine()!!.toString()
        var a:Long=0; var b:Long=0; var r:Long=0; var ans:Long=0
        //println(s)
        for(i in s) { 
            if(i=='+') a=a+1
            else if(i=='-') { 
                b=b+1
                if(b>a+r) { 
                    ans=ans+(a+b)
                    r=r+1
                } 
            } 
        } 
        println(ans+s.length)
    } 
} 
