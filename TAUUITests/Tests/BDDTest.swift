//
//  BDDTest.swift
//  TAUUITests
//
//  Created by Laurent B on 15/05/2020.
//

import Foundation
import XCTest



class BDDTest: TAUUITestBase {
 
    func testThankYouMessage() {
          
        givenAppIsReady()
        whenIEnter(city: "London" )
        whenIEnrolled()
        thenIShouldSeeThankYouMessage()
        
        
        
       
    }
      
   
}
