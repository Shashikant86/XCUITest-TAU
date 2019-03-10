//
//  TAUEyeTest.swift
//  TAUUITests
//
//  Created by Shashikant Jagtap on 10/03/2019.
//  Copyright © 2019 Shashikant Jagtap. All rights reserved.
//

import XCTest
import EyesXCUI

class TAUEyeTest: TAUUITestBase {

    func testTAUApplitoolsEye() {

        // Start the test.
        eyes.open(withApplicationName: "TAU", testName: "TAU Test with EyesXCUI SDK!")
        
        // Visual checkpoint #1.
        eyes.check(withTag: "TAU", andSettings: Target.window().timeout(inSeconds: 5))
        
        // Click the "Click me!" button.
        XCUIApplication().buttons["enrollButton"].tap()
        
        // Visual checkpoint #2.
        eyes.checkWindow(withTag: "Please Enter City")
        
        // End the test.
        do {
            try eyes.close()
        } catch {
            eyes.abortIfNotClosed()
        }
    }
}
