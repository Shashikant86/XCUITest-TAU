//
//  TAUSteps.swift
//  TAUUITests
//
//  Created by Laurent B on 15/05/2020.
//

import Foundation
import XCTest

extension TAUUITestBase {
    func givenAppIsReady() {
        XCTContext.runActivity(named: "Given App is ready ") { _ in
            XCTAssertTrue(TAUScreen.enrollButton.element.exists)
        }

    }
    func whenIEnter(city: String) {
        XCTContext.runActivity(named: "When I enter city \(city) ") { _ in
            TAUScreen.cityTextField.element.tap()
            TAUScreen.cityTextField.element.typeText(city)
        }
    }

    func whenIEnrolled() {
        XCTContext.runActivity(named: "When I Enrolled ") { _ in
            TAUScreen.enrollButton.element.tap()
        }
    }

    func thenIShouldSeeThankYouMessage() {
        XCTContext.runActivity(named: "Then I Should See Thanks message ") { _ in
            XCTAssertTrue(TAUScreen.thankYouMessage.element.exists)
        }
    }
    
 
}
