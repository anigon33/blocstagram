//
//  MediaFullScreenAnimator.h
//  Blocstagram
//
//  Created by Nigon's on 2/25/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "UIKit/UIKit.h"
@interface MediaFullScreenAnimator : NSObject <UIViewControllerAnimatedTransitioning>

@property (nonatomic, assign) BOOL presenting;
@property (nonatomic, weak) UIImageView *cellImageView;

@end
