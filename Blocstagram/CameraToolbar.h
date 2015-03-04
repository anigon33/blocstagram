//
//  CameraToolbar.h
//  Blocstagram
//
//  Created by Nigon's on 3/3/15.
//  Copyright (c) 2015 Adam Nigon. All rights reserved.
//

#import <UIKit/UIKit.h>
@class CameraToolbar;

@protocol CameraToolbarDelegate <NSObject>

- (void) leftButtonPressedOnToolbar:(CameraToolbar *)toolbar;
- (void) rightButtonPressedOnToolbar:(CameraToolbar *)toolbar;
- (void) cameraButtonPressedOnToolbar:(CameraToolbar *)toolbar;

@end

@interface CameraToolbar : UIView

- (instancetype) initWithImageNames:(NSArray *)imageNames;

@property (nonatomic, weak) NSObject <CameraToolbarDelegate> *delegate;

@end
