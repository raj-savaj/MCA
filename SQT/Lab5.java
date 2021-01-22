

import java.util.List;
import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;

public class Lab5 {
	public static void main(String[] args) throws InterruptedException {
		System.setProperty("webdriver.chrome.driver", "H://MCA//chromedriver.exe");
		WebDriver driver = new ChromeDriver();
		Thread.sleep(5000);
		driver.get("http://demo.guru99.com/test/newtours/");
		Thread.sleep(5000);
		List<WebElement> e = driver.findElements(By.tagName("a"));
		System.out.println(e.size());
		for (int i = 0; i < e.size(); i = i + 1) {
			System.out.println(e.get(i).getText());
		}
		driver.close();
	}
}
