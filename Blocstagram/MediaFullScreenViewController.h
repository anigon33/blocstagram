//
//  MediaFullScreenViewController.h
//  Blocstagram
//
//  Created by Nigon's on 2/25/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype) initWithMedia:(Media *)media;  

- (void) centerScrollView;

@end
