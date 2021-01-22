

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.chrome.ChromeDriver;

public class Lab4 {
	public static void main(String[] args) throws InterruptedException {
		
		System.setProperty("webdriver.chrome.driver", "H://MCA//chromedriver.exe");
		WebDriver driver = new ChromeDriver();
		driver.get("https://www.fast2sms.com/");
		Thread.sleep(5000);
		driver.findElement(By.name("mobile")).sendKeys("9824318964");
		Thread.sleep(5000);
		driver.findElement(By.name("password")).sendKeys("1234567");
		Thread.sleep(5000);
		driver.findElement(By.xpath("//button[text()='Login']")).click();
		Thread.sleep(5000);

		// Verification Point
		String o = "https://www.fast2sms.com/dashboard/sms/bulk";

		String z = driver.getCurrentUrl();
		if (z.equals(o)) {
			System.out.println("Login Sucessful_Test Passed");
		} else {
			System.out.println("Login UnSucessful_TestFailed");
		}
		
		driver.close();
	}
}
