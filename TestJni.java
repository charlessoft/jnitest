import java.util.*;
public class TestJni
{
    public native void print(String content);
    static
    {
        //System.loadLibraray("TestJni");
        System.loadLibrary("TestJni");
    }
}
