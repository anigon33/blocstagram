//
//  CameraViewController.h
//  Blocstagram
//
//  Created by Nigon's on 3/3/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CameraViewController;

@protocol CameraViewControllerDelegate <NSObject>

- (void) cameraViewController:(CameraViewController *)cameraViewController didCompleteWithImage:(UIImage *)image;

@end

@interface CameraViewController : UIViewController
@property (nonatomic, weak) NSObject <CameraViewControllerDelegate> *delegate;

@end