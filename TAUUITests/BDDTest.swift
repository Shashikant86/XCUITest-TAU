//
//  BDDTest.swift
//  TAUUITests
//
//  Created by Shashikant Jagtap on 10/02/2019.
//  Copyright © 2019 Shashikant Jagtap. All rights reserved.
//

import Foundation
import XCTest

class BDDTest: TAUUITestBase {
    
 func testThankYouMessageInBDStyle() {
        givenAppIsReady()
        whenIEnter(city: "London")
        whenIEnrolled()
        thenIShouldSeeThankYouMessage()
    }
}

extension TAUUITestBase {
    
    func givenAppIsReady() {
        XCTContext.runActivity(named: "Given App is ready ") { _ in
            XCTAssertTrue(app.buttons["enrollButton"].exists)
        }
        
    }
    
    func whenIEnter(city: String) {
        XCTContext.runActivity(named: "When I enter city \(city) ") { _ in
          app.textFields["city"].tap()
          app.textFields["city"].typeText(city)
        }
    }
    
    func whenIEnrolled() {
        XCTContext.runActivity(named: "When I Enrolled ") { _ in
          app.buttons["enrollButton"].tap()
        }
        
    }
    
    func thenIShouldSeeThankYouMessage() {
        XCTContext.runActivity(named: "Then I Should See Thanks message ") { _ in
         XCTAssertTrue(app.staticTexts["Thanks for Joining!"].exists)
        }
    }
    
}


