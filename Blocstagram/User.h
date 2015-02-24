//
//  User.h
//  Blocstagram
//
//  Created by Nigon's on 2/21/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIKit/UIKit.h"
@interface User : NSObject
@property (nonatomic, strong) NSString *idNumber;
@property (nonatomic, strong) NSString *userName;
@property (nonatomic, strong) NSString *fullName;
@property (nonatomic, strong) NSURL *profilePictureURL;
@property (nonatomic, strong) UIImage *profilePicture;
 - (instancetype) initWithDictionary:(NSDictionary *)userDictionary;
@end
