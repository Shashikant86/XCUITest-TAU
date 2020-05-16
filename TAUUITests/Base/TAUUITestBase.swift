//
//  TAUUITestBase.swift
//  TAUUITests
//
//  Created by Laurent B on 15/05/2020.
//

import Foundation
import  XCTest

class TAUUITestBase :XCTestCase {
    
    var app = XCUIApplication()
    
    override func setUp() {
        super.setUp()
        continueAfterFailure = false
        app.launch()
        // In UI tests it’s important to set the initial state - such as interface orientation - required for your tests before they run. The setUp method is a good place to do this.
    }

    override func tearDown() {
        super.tearDown()
        app.terminate()
    }
    
    
}

