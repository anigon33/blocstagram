//
//  ComposeCommentTests.m
//  Blocstagram
//
//  Created by Nigon's on 3/5/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>
#import "ComposeCommentView.h"
@interface ComposeCommentTests : XCTestCase

@end

@implementation ComposeCommentTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testSetTextWorks {
    ComposeCommentView *setTextTests = [[ComposeCommentView alloc] init];
    
    if (setTextTests.isWritingComment){
    XCTAssertTrue(setTextTests.isWritingComment == YES);
    }else{
        XCTAssertTrue(setTextTests.isWritingComment == NO);
    }
}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
