fun main() { 
    repeat(readLine()!!.toInt()) { 
        solve()
    } 
} 

fun solve() { 
    val q=mutableListOf('['); q.clear()
    val s=readLine()!!
    var ans:Int=0; var l:Int=0; var r:Int=0
    
    for(i in s) { 
        if(i=='(') r++
        else if(i=='[') l++
        else if(i==')' && r>0) { r--; ans++ } 
        else if(i==']' && l>0) { l--; ans++ } 
    } 
    
    println(ans)
} 

