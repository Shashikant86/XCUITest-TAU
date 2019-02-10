//
//  TAUSteps.swift
//  TAUUITests
//
//  Created by Shashikant Jagtap on 10/02/2019.
//  Copyright © 2019 Shashikant Jagtap. All rights reserved.
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

