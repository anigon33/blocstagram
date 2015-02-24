//
//  Comment.h
//  Blocstagram
//
//  Created by Nigon's on 2/21/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import <Foundation/Foundation.h>
@class User;
@interface Comment : NSObject
@property (nonatomic, strong) NSString *idNumber;
- (instancetype) initWithDictionary:(NSDictionary *)commentDictionary;
@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;
@end
