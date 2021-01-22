

import org.openqa.selenium.firefox.FirefoxDriver;

public class Lab7 {
	public static void main(String[] args) throws InterruptedException {
		System.setProperty("webdriver.gecko.driver","H://MCA//geckodriver.exe");
		FirefoxDriver driver = new FirefoxDriver();

		driver.get("https://www.google.com/");
		String baseURL = driver.getCurrentUrl();
		System.out.println(baseURL);
		Thread.sleep(5000);

		driver.navigate().to("https://seleniummaster.com/llc/");
		String toURL = driver.getCurrentUrl();
		System.out.println(toURL);
		Thread.sleep(5000);

		driver.navigate().back();
		String backURL = driver.getCurrentUrl();
		System.out.println(backURL);
		Thread.sleep(5000);

		driver.navigate().refresh();
		String refreshURL = driver.getCurrentUrl();
		System.out.println(refreshURL);
		Thread.sleep(5000);

		driver.navigate().to("https://seleniummaster.com/llc/");
		String toURL1 = driver.getCurrentUrl();
		System.out.println(toURL1);
		Thread.sleep(5000);

		driver.manage().window().maximize();
		Thread.sleep(5000);

		driver.quit();
	}
}
