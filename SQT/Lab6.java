

import java.util.List;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.support.ui.Select;

public class Lab6 {
	public static void main(String[] args) throws InterruptedException {
		System.setProperty("webdriver.chrome.driver", "H://MCA//chromedriver.exe");
		WebDriver driver = new ChromeDriver();
		
		driver.get("http://demo.guru99.com/test/newtours/");
		Thread.sleep(5000);
		driver.findElement(By.linkText("REGISTER")).click();
		Thread.sleep(5000);
		
		driver.findElement(By.name("firstName")).sendKeys("Madhwaraj");
		Thread.sleep(5000);
		driver.findElement(By.name("lastName")).sendKeys("Prof");
		Thread.sleep(5000);
		driver.findElement(By.name("phone")).sendKeys("9703336699");
		Thread.sleep(5000);
		driver.findElement(By.id("userName")).sendKeys("abcd@gmail.com");
		Thread.sleep(5000);
		driver.findElement(By.name("address1")).sendKeys("chennai fasf");
		Thread.sleep(5000);
		driver.findElement(By.name("city")).sendKeys("chennai");
		Thread.sleep(5000);
		driver.findElement(By.name("state")).sendKeys("TN");
		Thread.sleep(5000);
		driver.findElement(By.name("postalCode")).sendKeys("5000221");
		Thread.sleep(5000);
		
		Select s = new Select((driver.findElement(By.name("country"))));
		List<WebElement> listOptionDropdown = s.getOptions();
		int dropdownCount = listOptionDropdown.size();
		System.out.println("Total Number of item count in dropdown list = " + dropdownCount);
		s.selectByVisibleText("INDIA");
		Thread.sleep(5000);
		driver.findElement(By.id("email")).sendKeys("abcd@gmail.com");
		Thread.sleep(5000);
		driver.findElement(By.name("password")).sendKeys("Madhvaraj");
		Thread.sleep(5000);
		driver.findElement(By.name("confirmPassword")).sendKeys("Madhvaraj");
		Thread.sleep(5000);
		driver.close();
	}
}
