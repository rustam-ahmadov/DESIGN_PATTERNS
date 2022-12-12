import src.Editor;
import src.EmailListener;
import src.LogListener;

public class Application {
    public static void main(String[] args) {

        Editor editor = new Editor();
        editor.events.subscribe("open", new LogListener("/path/to/log/file.txt"));
        editor.events.subscribe("save", new EmailListener("admin@example.com"));

        try {
            editor.openFile("test.txt");
            editor.saveFile();
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}
