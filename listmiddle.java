/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int mid,size;
		LinkedList list=new LinkedList();
		list.addFirst("1");
		list.add("2");
		list.add("3");
		list.add("4");
		list.add("5");
		list.add("6");
		list.addLast("7");
		System.out.println("Contents of List : "+list);
		size=list.size();
		mid=size/2;
		System.out.println("Middle element :" +list.get(mid));
		list.add("8");
		size=list.size();
		mid=(size/2);
		System.out.println("Middle element :" +list.get(mid));
	}
}
