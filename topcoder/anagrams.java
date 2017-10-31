import java.util.*;
public class Aaagmnrs {
  public String[] anagrams(String[] p) {
      ArrayList ret = new ArrayList();
      String[] copy = new String[p.length];
      for(int k=0; k < p.length; k++){
    String s = p[k].toLowerCase();
    char[] b = s.toCharArray();
    Arrays.sort(b);
    s = new String(b);
    s = s.trim();
    copy[k] = s;
      }
      ret.add(p[0]);
      for(int k=1; k < p.length; k++){
    boolean keep = true;
    for(int j=0; j < k; j++){
        if (copy[j].equals(copy[k])){
      keep = false;
        }
    }
    if (keep){
        ret.add(p[k]);
    }
      }
      copy = (String[]) ret.toArray(new String[0]);
      return copy;
  }
  public static void main(String[] args) {

  }
} 