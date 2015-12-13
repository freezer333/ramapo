import java.io.BufferedReader;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileReader;
import java.io.InputStreamReader;
import java.io.PrintStream;


public class FileDemo {

	private String content;
	
	protected String getContent() {
		return content;
	}

	protected void setContent(String content) {
		this.content = content;
	}

	public void writeContent(PrintStream ps) {
		ps.println(content);
	}
	
	
	public void readContent(BufferedReader reader) {
		try {
			content = reader.readLine();
		} 
		catch (Exception e) {
			e.printStackTrace();
		}
	}
	
	
	public static void main(String [] args) throws Exception {
		File file = new File("lower.txt");
		
		BufferedReader keyboard = new BufferedReader(new InputStreamReader(System.in));
		PrintStream fos = new PrintStream( new FileOutputStream(file));
		
		FileDemo demo = new FileDemo();
		demo.readContent(keyboard);
		
		String lower = demo.getContent().toLowerCase();
		demo.setContent(lower);
		demo.writeContent(fos);
		fos.close();
		
		BufferedReader fis = new BufferedReader(new FileReader(file));
		demo.readContent(fis);
		demo.writeContent(System.out);
		fis.close();
	}
}
