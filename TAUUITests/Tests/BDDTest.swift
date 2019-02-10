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
