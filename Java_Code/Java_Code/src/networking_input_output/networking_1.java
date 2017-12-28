package networking_input_output;

import java.net.URL;

public class networking_1 {

	public static void main(String[] args) {

		try {
			URL u1 = new URL("https://www.google.com/search?q=google&oq=google&aqs=chrome..69i57j69i60l3j0l2.2313j0j7&sourceid=chrome&ie=UTF-8");
			System.out.println("protocol = "+u1.getProtocol());
			System.out.println("Host = "+u1.getHost());
			System.out.println("Port = "+u1.getPort());
			System.out.println("File = "+u1.getFile());
		} catch (Exception e) {
			System.out.println(e);
		}

	}

}
