//
//  MediaTableViewTests.m
//  Blocstagram
//
//  Created by Nigon's on 3/5/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>
#import "MediaTableViewCell.h"
#import "Media.h"
@interface MediaTableViewTests : XCTestCase

@end

@implementation MediaTableViewTests

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testThatAccurateHeights {
    NSDictionary *sourceDictionary = @{@"id": @"8675309",
                                       @"user" : @{@"id": @"8675309",
                                                   @"username" : @"d'oh",
                                                   @"full_name" : @"Homer Simpson",
                                                   @"profile_picture" : @"http://www.example.com/example.jpg"},
                                       @"images" : @{@"standard_resolution" : @{@"url" : @"http://distillery.s3.amazonaws.com/media/2010/07/16/4de37e03aa4b4372843a7eb33fa41cad_7.jpg"}},
                                       @"caption" : @{@"text" : @"this is a caption"},
                                       @"comments" : @{},
                                       @"user_has_liked" : @"true",
                                       @"likes" : @{@"count" : @10}};
    Media *testMedia = [[Media alloc] initWithDictionary:sourceDictionary];
    testMedia.image = [UIImage imageNamed:@"3.jpg"];
    CGFloat cellHeight = [MediaTableViewCell heightForMediaItem:testMedia width:[UIScreen mainScreen].bounds.size.width];
    XCTAssertNotEqual(cellHeight, testMedia.image.size.height, @"the height should not be equal");}

- (void)testPerformanceExample {
    // This is an example of a performance test case.
    [self measureBlock:^{
        // Put the code you want to measure the time of here.
    }];
}

@end
