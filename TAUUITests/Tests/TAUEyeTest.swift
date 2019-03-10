import XCTest
import EyesXCUI

class TAUEyeTest: TAUUITestBase {

    func testTAUApplitoolsEye() {

        // Start the test.
        eyes.open(withApplicationName: "TAU", testName: "TAU Test with EyesXCUI SDK!")
        
        // Visual checkpoint #1.Check Entire Screen.
        // Manage the baseline from Applitools Test manager portal.
        
        eyes.check(withTag: "TAU", andSettings: Target.window().timeout(inSeconds: 5))
        
        // Click the "EnrollButton" button.
        app.buttons["enrollButton"].tap()
        
        // Visual checkpoint #2.Check Please Enter City Text
        eyes.checkWindow(withTag: "Please Enter City")
    }
}
