import java.util.concurrent.TimeUnit;

import org.openqa.selenium.By;
import org.openqa.selenium.WebDriver;
import org.openqa.selenium.WebElement;
import org.openqa.selenium.chrome.ChromeDriver;
import org.openqa.selenium.interactions.Actions;
import org.openqa.selenium.support.ui.Select;

public class Lab10 {

	public static void main(String[] args) {
		System.setProperty("webdriver.chrome.driver", "H://MCA//chromedriver.exe");
		WebDriver driver = new ChromeDriver();
		driver.get("http://automationpractice.com/index.php");
		driver.manage().window().maximize();
		driver.manage().timeouts().implicitlyWait(3000, TimeUnit.MILLISECONDS);
		
		driver.findElement(By.linkText("Sign in")).click();
		driver.findElement(By.id("email")).sendKeys("test1249@test.com");
		driver.findElement(By.id("passwd")).sendKeys("PKR@PKR");
		driver.findElement(By.id("SubmitLogin")).click();
		
		driver.findElement(By.linkText("WOMEN")).click();
		WebElement SecondImg=driver.findElement(By.xpath("(//a[@class='product_img_link']/img)[2]"));
		WebElement MoreBtn=driver.findElement(By.xpath("(//a[@title='View'])[2]"));
		Actions actions=new Actions(driver);
		actions.moveToElement(SecondImg).moveToElement(MoreBtn).click().perform();
		
		driver.findElement(By.id("quantity_wanted")).clear();
		driver.findElement(By.id("quantity_wanted")).sendKeys("2");
		Select selectSize=new Select(driver.findElement(By.id("group_1")));
		selectSize.selectByVisibleText("M");
		driver.findElement(By.id("color_11")).click();
		driver.findElement(By.xpath("//button[contains(.,'Add to cart')]")).click();
		
		driver.findElement(By.xpath("//a[contains(.,'Proceed to checkout')]")).click();
		driver.findElement(By.xpath("//a/span[text()='Proceed to checkout']")).click();
		driver.findElement(By.xpath("//button[contains(.,'Proceed to checkout')]")).click();
		driver.findElement(By.id("cgv")).click();
		driver.findElement(By.xpath("//button[contains(.,'Proceed to checkout')]")).click();
		driver.findElement(By.xpath("//a[contains(text(),'Pay by check')]")).click();
		driver.findElement(By.xpath("//button[contains(.,'confirm')]")).click();
		
		String confirmationText=driver.findElement(By.xpath("//div[@id='center_column']/p[1]")).getText();
		
		if(confirmationText.contains("complete"))
		{
			System.out.println("Order Completed: Test Case Passed");
		}
		else
		{
			System.out.println("Order Not Successfull: Test Case Failed");
		}
		driver.close();
	}
}
