import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.scene.text.Text;
import javafx.stage.Stage;

public class MyClass extends Application {

    public static void main(String[] args) {
        launch(args);
    }

    @Override
    public void start(Stage primaryStage) {
        GridPane gp = new GridPane();
        Text t1 = new Text("Number 1");
        Text t2 = new Text("Number 2");
        Text t3 = new Text("Result");
        TextField tf1 = new TextField();
        TextField tf2 = new TextField();
        TextField tf3 = new TextField();
        Button b = new Button("ADD");

        gp.add(t1,0,0);
        gp.add(t2,0,2);
        gp.add(b,2,4);
        gp.add(tf1,2,0);
        gp.add(tf2,2,2);
        gp.add(t3,0,6);
        gp.add(tf3,2,6);

        gp.setAlignment(Pos.CENTER);

        b.setOnAction(e -> {
            int sum = Integer.parseInt(tf1.getText()) + Integer.parseInt(tf2.getText());
            tf3.setText(Integer.toString(sum));
        });

        Scene s = new Scene(gp,800,500);
        primaryStage.setTitle("Addition");
        primaryStage.setScene(s);
        primaryStage.show();
    }
}
