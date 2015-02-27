//
//  ShareViewController.h
//  Blocstagram
//
//  Created by Nigon's on 2/26/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import <UIKit/UIKit.h>
@class Media;
@interface ShareViewController : UIActivityViewController
- (instancetype) initWithMedia:(Media *)mediaItem;
@end
