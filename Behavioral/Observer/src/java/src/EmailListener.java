package src;

import java.io.File;

public class EmailListener implements EventListener {
    private final String email;

    public EmailListener(String email) {
        this.email = email;
    }
    @Override
    public void update(String eventType, File file) {
        System.out.println("Email to " + email + ": Someone has performed "
                + eventType + " operation with the following file: " + file.getName());
    }
}