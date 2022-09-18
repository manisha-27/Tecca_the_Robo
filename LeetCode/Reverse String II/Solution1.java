class Solution {
    public String reverseStr(String s, int k) {
        StringBuilder sb = new StringBuilder();
        int a = 0;
        for (int i = 0; i < s.length(); i += k,a++) {
            if (a % 2 == 0) {
                if (i + k >= s.length()) {
                    sb.append(reverse(s.substring(i, s.length())));
                    // System.out.println(s.substring(i, s.length()) + " " + reverse(s.substring(i, s.length())));
                    break;
                }
                // System.out.println(s.substring(i, i + k) + " " + reverse(s.substring(i, i + k)));
                sb.append(reverse(s.substring(i, i + k)));
            } else {
                if (i + k >= s.length()) {
                    sb.append(s.substring(i, s.length()));
                    break;
                }
                sb.append(s.substring(i, i + k));
            }
        }
        String st = new String(sb);
        return st;
    }

    public static String reverse(String s) {
        char[] ch = new char[s.length()];
        for (int j = 0, i = s.length() - 1; i >= 0; i--, j++) {
            ch[j] = s.charAt(i);
        }
        String st = new String(ch);
        return st;
    }
}
