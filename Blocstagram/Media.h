//
//  Media.h
//  Blocstagram
//
//  Created by Nigon's on 2/21/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIKit/UIKit.h"
@class User;
@interface Media : NSObject <NSCoding>
- (instancetype) initWithDictionary:(NSDictionary *)mediaDictionary;
@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) User *user;
@property (nonatomic, strong) NSURL *mediaURL;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, strong) NSString *caption;
@property (nonatomic, strong) NSArray *comments;

@end
